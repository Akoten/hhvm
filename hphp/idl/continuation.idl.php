<?php
/**
 * Automatically generated by running "php schema.php xml".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => 'hphp_create_continuation',
    'return' => array(
      'type'   => 'Continuation',
    ),
    'args'   => array(
      array(
        'name'   => 'clsname',
        'type'   => String,
      ),
      array(
        'name'   => 'funcname',
        'type'   => String,
      ),
      array(
        'name'   => 'origFuncName',
        'type'   => String,
      ),
      array(
        'name'   => 'args',
        'type'   => VariantMap,
        'value'  => 'null_array',
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => 'hphp_unpack_continuation',
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => 'continuation',
        'type'   => Object,
      ),
    ),
    'taint_observer' => false,
  ));

///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()

BeginClass(
  array(
    'name' => 'Continuation',
    'flags' => IsFinal,
    'ifaces' => array('Iterator', 'Awaitable'),
    'footer' => <<<EOT
  public: void setCalledClass(CStrRef cls) {
    const_assert(!hhvm);
    m_called_class = cls;
  }
protected: virtual bool php_sleep(Variant &ret);
public:
  inline void preNext() {
    if (m_done) {
      throw_exception(Object(SystemLib::AllocExceptionObject(
                               "Continuation is already finished")));
    }
    if (m_running) {
      throw_exception(Object(SystemLib::AllocExceptionObject(
                               "Continuation is already running")));
    }
    m_running = true;
    ++m_index;
  }

  inline void startedCheck() {
    if (m_index < 0LL) {
      throw_exception(
        Object(SystemLib::AllocExceptionObject("Need to call next() first")));
    }
  }

public:
  Object m_obj;
  Array m_args;
  int64_t m_index;
  Variant m_value;
  Variant m_received;
  String m_origFuncName;
  bool m_done;
  bool m_running;
  bool m_should_throw;

  int m_localsOffset;
  VM::Func *m_vmFunc;
  int64_t m_label
  VM::ActRec* m_arPtr;

  p_ContinuationWaitHandle m_waitHandle;

  SmartPtr<HphpArray> m_VMStatics;

  String& getCalledClass() { not_reached(); }

  HphpArray* getStaticLocals();
  static size_t sizeForLocalsAndIters(int nLocals, int nIters) {
    return (sizeof(c_Continuation) + sizeof(TypedValue) * nLocals +
            sizeof(VM::Iter) * nIters + sizeof(VM::ActRec));
  }
  VM::ActRec* actRec() {
    return m_arPtr;
  }
  TypedValue* locals() {
    return (TypedValue*)(uintptr_t(this) + m_localsOffset);
  }
EOT
,
  )
);

DefineFunction(
  array(
    'name'   => '__construct',
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => 'func',
        'type'   => Int64,
      ),
      array(
        'name'   => 'origFuncName',
        'type'   => String,
      ),
      array(
        'name'   => 'obj',
        'type'   => Variant,
        'value'  => 'null',
      ),
      array(
        'name'   => 'args',
        'type'   => VariantMap,
        'value'  => 'null_array',
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => 'update',
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => 'label',
        'type'   => Int64,
      ),
      array(
        'name'   => 'value',
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => 'done',
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => "getWaitHandle",
    'desc'   => "Start asynchronous execution of this Continuation and return the wait handle",
    'flags'  => HasDocComment,
    'return' => array(
      'type'   => Object,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'getLabel',
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'num_args',
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'get_args',
    'return' => array(
      'type'   => VariantVec,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'get_arg',
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => 'id',
        'type'   => Int64,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => 'current',
    'return' => array(
      'type'   => Variant,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'key',
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'next',
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'rewind',
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'valid',
    'return' => array(
      'type'   => Boolean,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'send',
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => 'v',
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => 'raise',
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => 'v',
        'type'   => Variant,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => 'getOrigFuncName',
    'return' => array(
      'type'   => String,
    ),
  ));

DefineFunction(
  array(
    'name'   => '__clone',
    'return' => array(
      'type'   => Variant,
    ),
  ));

EndClass();

BeginClass(
  array(
    'name' => "DummyContinuation",
    'ifaces' => array('Iterator'),
    'desc' => "Represents an invalid continuation which will fatal when used.",
  ));

DefineFunction(
  array(
    'name'   => '__construct',
    'args'   => array(),
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'current',
    'return' => array(
      'type'   => Variant,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'key',
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'next',
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'rewind',
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => 'valid',
    'return' => array(
      'type'   => Boolean,
    ),
  ));

EndClass();
