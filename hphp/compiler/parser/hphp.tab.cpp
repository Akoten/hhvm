
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         Compilerparse
#define yylex           Compilerlex
#define yyerror         Compilererror
#define yylval          Compilerlval
#define yychar          Compilerchar
#define yydebug         Compilerdebug
#define yynerrs         Compilernerrs
#define yylloc          Compilerlloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../../../hphp/util/parser/hphp.y"

#include "parser.h"
#include <util/util.h>
#include <util/logger.h>

// macros for bison
#define YYSTYPE HPHP::HPHP_PARSER_NS::Token
#define YYSTYPE_IS_TRIVIAL 1
#define YYLTYPE HPHP::Location
#define YYLTYPE_IS_TRIVIAL 1
#define YYERROR_VERBOSE
#define YYINITDEPTH 500
#define YYLEX_PARAM _p

#ifdef yyerror
#undef yyerror
#endif
#define yyerror(loc,p,msg) p->fatal(loc,msg)

#ifdef YYLLOC_DEFAULT
# undef YYLLOC_DEFAULT
#endif
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  do                                                                    \
    if (YYID (N)) {                                                     \
      (Current).first(YYRHSLOC (Rhs, 1));                               \
      (Current).last (YYRHSLOC (Rhs, N));                               \
    } else {                                                            \
      (Current).line0 = (Current).line1 = YYRHSLOC (Rhs, 0).line1;      \
      (Current).char0 = (Current).char1 = YYRHSLOC (Rhs, 0).char1;      \
    }                                                                   \
  while (YYID (0));                                                     \
  _p->setRuleLocation(&Current);

#define YYCOPY(To, From, Count)                  \
  do {                                           \
    YYSIZE_T yyi;                                \
    for (yyi = 0; yyi < (Count); yyi++) {        \
      (To)[yyi] = (From)[yyi];                   \
    }                                            \
    if (From != From ## a) {                     \
      YYSTACK_FREE (From);                       \
    }                                            \
  }                                              \
  while (YYID (0))

#define YYCOPY_RESET(To, From, Count)           \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (To)[yyi] = (From)[yyi];                \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (YYID (0))

#define YYTOKEN_RESET(From, Count)              \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (YYID (0))

# define YYSTACK_RELOCATE_RESET(Stack_alloc, Stack)                     \
  do                                                                    \
    {                                                                   \
      YYSIZE_T yynewbytes;                                              \
      YYCOPY_RESET (&yyptr->Stack_alloc, Stack, yysize);                \
      Stack = &yyptr->Stack_alloc;                                      \
      yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
      yyptr += yynewbytes / sizeof (*yyptr);                            \
    }                                                                   \
  while (YYID (0))

#define YYSTACK_CLEANUP                         \
  YYTOKEN_RESET (yyvs, yystacksize);            \
  if (yyvs != yyvsa) {                          \
    YYSTACK_FREE (yyvs);                        \
  }                                             \
  if (yyls != yylsa) {                          \
    YYSTACK_FREE (yyls);                        \
  }                                             \


// macros for rules
#define BEXP(e...) _p->onBinaryOpExp(e);
#define UEXP(e...) _p->onUnaryOpExp(e);

using namespace HPHP::HPHP_PARSER_NS;

///////////////////////////////////////////////////////////////////////////////
// helpers

static void scalar_num(Parser *_p, Token &out, const char *num) {
  Token t;
  t.setText(num);
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_num(Parser *_p, Token &out, int num) {
  Token t;
  t.setText(boost::lexical_cast<std::string>(num));
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_null(Parser *_p, Token &out) {
  Token tnull; tnull.setText("null");
  _p->onConstantValue(out, tnull);
}

///////////////////////////////////////////////////////////////////////////////
// converting constant declartion to "define(name, value);"

static void on_constant(Parser *_p, Token &out, Token *stmts,
                        Token &name, Token &value) {
  Token sname;   _p->onScalar(sname, T_CONSTANT_ENCAPSED_STRING, name);

  Token fname;   fname.setText("define");
  Token params1; _p->onCallParam(params1, NULL, sname, 0);
  Token params2; _p->onCallParam(params2, &params1, value, 0);
  Token call;    _p->onCall(call, 0, fname, params2, 0);
  Token scall;   _p->onExpStatement(scall, call);

  Token stmts0;
  if (!stmts) {
    _p->onStatementListStart(stmts0);
    stmts = &stmts0;
  }
  _p->addStatement(out, *stmts, scall);
}

///////////////////////////////////////////////////////////////////////////////
// continuation transformations

static void prepare_continuation_call(Parser* _p, Token& rhs, const char* cname) {
  Token fname;  fname.setText(std::string("hphp_continuation_") + cname);
  Token empty;
  _p->onCall(rhs, false, fname, empty, NULL, true);
}

void prepare_generator(Parser *_p, Token &stmt, Token &params, int count) {
  // 1. add prologue and epilogue to original body and store it back to "stmt"
  {
    Token scall;
    Token switchExp;
    {
      // hphp_unpack_continuation(v___cont__)
      Token name;    name.setText(CONTINUATION_OBJECT_NAME);
      Token var;     _p->onSynthesizedVariable(var, name);
      Token param1;  _p->onCallParam(param1, NULL, var, false);

      Token cname;   cname.setText("hphp_unpack_continuation");
      Token call;    _p->onCall(call, false, cname, param1, NULL, true);

      switchExp = call;
    }
    Token sswitch;
    {
      _p->pushLabelScope();
      {
        Token cases;
        for (int i = count; i > 0; i--) {
          std::string si = boost::lexical_cast<std::string>(i);

          Token label;   label.setText(YIELD_LABEL_PREFIX + si);
          Token sgoto;   _p->onGoto(sgoto, label, false);
                         _p->addGoto(label.text(), _p->getLocation(), &sgoto);

          Token stmts0;  _p->onStatementListStart(stmts0);
          Token stmts1;  _p->addStatement(stmts1, stmts0, sgoto);
          Token stmts;   _p->finishStatement(stmts, stmts1); stmts = 1;

          Token snum;    snum.setText(si);
          Token num;     _p->onScalar(num, T_LNUMBER, snum);
          Token scase;   _p->onCase(scase, cases, &num, stmts);
          cases = scase;
        }
        _p->onSwitch(sswitch, switchExp, cases);
      }
      _p->popLabelScope();
    }
    Token sdone;
    {
      Token mcall;  prepare_continuation_call(_p, mcall, "done");
      _p->onExpStatement(sdone, mcall);
    }
    {
      Token stmts0;  _p->onStatementListStart(stmts0);
      Token stmts1;  _p->addStatement(stmts1, stmts0, scall);
      Token stmts2;  _p->addStatement(stmts2, stmts1, sswitch);
      Token stmts3;  _p->addStatement(stmts3, stmts2, stmt);
      Token stmts4;  _p->addStatement(stmts4, stmts3, sdone);

      stmt.reset();
      _p->finishStatement(stmt, stmts4); stmt = 1;
    }
  }

  // 2. prepare a single continuation parameter list and store it in "params"
  {
    Token type;    type.setText("Continuation");
    Token var;     var.setText(CONTINUATION_OBJECT_NAME);
    params.reset();
    type.reset();
    _p->onParam(params, NULL, type, var, false, NULL, NULL);
  }
}

// create a generator function with original name and parameters
void create_generator(Parser *_p, Token &out, Token &params,
                      Token &name, const std::string &closureName,
                      const char *clsname, Token *modifiers, bool getArgs,
                      Token &origGenFunc, bool isHhvm, Token *attr) {
  _p->pushFuncLocation();
  if (clsname) {
    _p->onMethodStart(name, *modifiers, false);
  } else {
    _p->onFunctionStart(name, false);
  }

  Token scont;
  {
    Token cname;
    if (isHhvm) {
      Token cn;    cn.setText(clsname ? "__CLASS__" : "");
                   _p->onScalar(
                     cname,
                     clsname ? T_CLASS_C : T_CONSTANT_ENCAPSED_STRING,
                     cn);
    } else {
      Token cn;    cn.setText(clsname ? clsname : "");
                   _p->onScalar(cname, T_CONSTANT_ENCAPSED_STRING, cn);
    }

    Token fn;      fn.setText(closureName);
    Token fname;   _p->onScalar(fname, T_CONSTANT_ENCAPSED_STRING, fn);

    Token ofn;     ofn.setText(clsname ? "__METHOD__" : "__FUNCTION__");
    Token oname;   _p->onScalar(oname, clsname ? T_METHOD_C : T_FUNC_C, ofn);

    Token param1;  _p->onCallParam(param1, NULL, cname, false);
                   _p->onCallParam(param1, &param1, fname, false);
                   _p->onCallParam(param1, &param1, oname, false);

    if (getArgs) {
      Token cname;   cname.setText("func_get_args");
      Token empty;
      Token call;    _p->onCall(call, false, cname, empty, NULL);
                     _p->onCallParam(param1, &param1, call, false);
    }

    Token cname0;  cname0.setText("hphp_create_continuation");
    Token call;    _p->onCall(call, false, cname0, param1, NULL, true);
    Token ret;     _p->onReturn(ret, &call);

    Token stmts0;  _p->onStatementListStart(stmts0);
    Token stmts1;  _p->addStatement(stmts1, stmts0, ret);
    _p->finishStatement(scont, stmts1); scont = 1;
  }

  Token ret, ref;
  ret.setText("Continuation");
  ret.setCheck();
  if (clsname) {
    Token closure;
    _p->onMethod(closure, *modifiers, ret, ref, name, params, scont, attr);
    origGenFunc = closure;

    Token stmts0;  _p->onStatementListStart(stmts0);
    Token stmts1;  _p->addStatement(stmts1, stmts0, closure);
    Token stmts2;  _p->addStatement(stmts2, stmts1, out);
    _p->finishStatement(out, stmts2); out = 1;
  } else {
    out.reset();
    _p->onFunction(out, modifiers, ret, ref, name, params, scont, attr);
    origGenFunc = out;
  }
}

void transform_yield_break(Parser *_p, Token &out) {
  // hphp_continuation_done()
  Token mcall;   prepare_continuation_call(_p, mcall, "done");
  Token done;    _p->onExpStatement(done, mcall);

  // return
  Token ret;     _p->onReturn(ret, NULL, false);

  Token stmts0;  _p->onStatementListStart(stmts0);
  Token stmts1;  _p->addStatement(stmts1, stmts0, done);
  Token stmts2;  _p->addStatement(stmts2, stmts1, ret);
  _p->finishStatement(out, stmts2); out = 1;
}

///////////////////////////////////////////////////////////////////////////////

static void user_attribute_check(Parser *_p) {
  if (!_p->enableHipHopSyntax()) {
    HPHP_PARSER_ERROR("User attributes are not enabled", _p);
  }
}

static void finally_statement(Parser *_p) {
  if (!_p->enableFinallyStatement()) {
    HPHP_PARSER_ERROR("Finally statement is not enabled", _p);
  }
}

static void constant_ae(Parser *_p, Token &out, Token &value) {
  const std::string& valueStr = value.text();
  if (valueStr.size() < 3 || valueStr.size() > 5 ||
      (strcasecmp("true", valueStr.c_str()) != 0 &&
       strcasecmp("false", valueStr.c_str()) != 0 &&
       strcasecmp("null", valueStr.c_str()) != 0 &&
       strcasecmp("inf", valueStr.c_str()) != 0 &&
       strcasecmp("nan", valueStr.c_str()) != 0)) {
    HPHP_PARSER_ERROR("User-defined constants are not allowed in user "
                      "attribute expressions", _p);
  }
  _p->onConstantValue(out, value);
}

///////////////////////////////////////////////////////////////////////////////

/**
 * XHP functions: They are defined here, so different parsers don't have to
 * handle XHP rules at all.
 */

static void xhp_tag(Parser *_p, Token &out, Token &label, Token &body) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  if (!body.text().empty() && body.text() != label.text()) {
    HPHP_PARSER_ERROR("XHP: mismatched tag: '%s' not the same as '%s'",
                      _p, body.text().c_str(), label.text().c_str());
  }

  label.xhpLabel();
  Token name; _p->onName(name, label, Parser::StringName);
  _p->onNewObject(out, name, body);
}

static void xhp_attribute(Parser *_p, Token &out, Token &type, Token &label,
                          Token &def, Token &req) {
  /**
   * The basic builtin types "bool", "int", "double", and "string" all map to
   * T_STRING in the parser, and the parser uses always uses type code 5 for
   * T_STRING. However, XHP uses different type codes for these basic builtin
   * types, so we need to fix up the type code here to make XHP happy.
   */
  if (type.num() == 5 && type.text().size() >= 3 && type.text().size() <= 7) {
    switch (type.text()[0]) {
      case 'b':
        if ((type.text().size() == 4 &&
             strcasecmp(type.text().c_str(), "bool") == 0) ||
            (type.text().size() == 7 &&
             strcasecmp(type.text().c_str(), "boolean") == 0)) {
          type.reset();
          type.setNum(2);
        }
        break;
      case 'd':
        if (type.text().size() == 6 &&
            strcasecmp(type.text().c_str(), "double") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 'f':
        if (type.text().size() == 5 &&
            strcasecmp(type.text().c_str(), "float") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 'i':
        if ((type.text().size() == 3 &&
             strcasecmp(type.text().c_str(), "int") == 0) ||
            (type.text().size() == 7 &&
             strcasecmp(type.text().c_str(), "integer") == 0)) {
          type.reset();
          type.setNum(3);
        }
        break;
      case 'r':
        if (type.text().size() == 4 &&
            strcasecmp(type.text().c_str(), "real") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 's':
        if (type.text().size() == 6 &&
            strcasecmp(type.text().c_str(), "string") == 0) {
          type.reset();
          type.setNum(1);
        }
        break;
      default:
        break;
    }
  }

  Token num;  scalar_num(_p, num, type.num());
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token arr2;
  switch (type.num()) {
    case 5: /* class */ {
      Token cls; _p->onScalar(cls, T_CONSTANT_ENCAPSED_STRING, type);
      _p->onArrayPair(arr2, &arr1, 0, cls, 0);
      break;
    }
    case 7: /* enum */ {
      Token arr;   _p->onArray(arr, type);
      _p->onArrayPair(arr2, &arr1, 0, arr, 0);
      break;
    }
    default: {
      Token tnull; scalar_null(_p, tnull);
      _p->onArrayPair(arr2, &arr1, 0, tnull, 0);
      break;
    }
  }

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, def, 0);
  Token arr4; _p->onArrayPair(arr4, &arr3, 0, req, 0);
  _p->onArray(out, arr4);
  out.setText(label);
}

static void xhp_attribute_list(Parser *_p, Token &out, Token *list,
                               Token &decl) {
  if (decl.num() == 0) {
    decl.xhpLabel();
    if (list) {
      out = *list;
      out.setText(list->text() + ":" + decl.text()); // avoiding vector<string>
    } else {
      out.setText(decl);
    }
  } else {
    Token name; _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, decl);
    _p->onArrayPair(out, list, &name, decl, 0);
    if (list) {
      out.setText(list->text());
    } else {
      out.setText("");
    }
  }
}

static void xhp_attribute_stmt(Parser *_p, Token &out, Token &attributes) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token modifiers;
  Token fname; fname.setText("__xhpAttributeDeclaration");
  {
    Token m;
    Token m1; m1.setNum(T_PROTECTED); _p->onMemberModifier(m, NULL, m1);
    Token m2; m2.setNum(T_STATIC);    _p->onMemberModifier(modifiers, &m, m2);
  }
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  std::vector<std::string> classes;
  HPHP::Util::split(':', attributes.text().c_str(), classes, true);
  Token arrAttributes; _p->onArray(arrAttributes, attributes);

  Token dummy;

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = -1;
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &mone);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // if ($_ === -1) {
    //   $_ = array_merge(parent::__xhpAttributeDeclaration(),
    //                    attributes);
    // }
    Token parent;  parent.set(T_STRING, "parent");
    Token cls;     _p->onName(cls, parent, Parser::StringName);
    Token fname;   fname.setText("__xhpAttributeDeclaration");
    Token param1;  _p->onCall(param1, 0, fname, dummy, &cls);
    Token params1; _p->onCallParam(params1, NULL, param1, 0);

    for (unsigned int i = 0; i < classes.size(); i++) {
      Token parent;  parent.set(T_STRING, classes[i]);
      Token cls;     _p->onName(cls, parent, Parser::StringName);
      Token fname;   fname.setText("__xhpAttributeDeclaration");
      Token param;   _p->onCall(param, 0, fname, dummy, &cls);

      Token params; _p->onCallParam(params, &params1, param, 0);
      params1 = params;
    }

    Token params2; _p->onCallParam(params2, &params1, arrAttributes, 0);

    Token name;    name.set(T_STRING, "array_merge");
    Token call;    _p->onCall(call, 0, name, params2, NULL);
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token assign;  _p->onAssign(assign, var, call, 0);
    Token exp;     _p->onExpStatement(exp, assign);
    Token block;   _p->onBlock(block, exp);

    Token tvar2;   tvar2.set(T_VARIABLE, "_");
    Token var2;    _p->onSimpleVariable(var2, tvar2);
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token cond;    BEXP(cond, var2, mone, T_IS_IDENTICAL);
    Token dummy1, dummy2;
    Token sif;     _p->onIf(sif, cond, block, dummy1, dummy2);
    _p->addStatement(stmts2, stmts1, sif);
  }
  Token stmts3;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts3, stmts2, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts3);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

static void xhp_collect_attributes(Parser *_p, Token &out, Token &stmts) {
  Token *attr = _p->xhpGetAttributes();
  if (attr) {
    Token stmt;
    xhp_attribute_stmt(_p, stmt, *attr);
    _p->onClassStatement(out, stmts, stmt);
  } else {
    out = stmts;
  }
}

static void xhp_category_stmt(Parser *_p, Token &out, Token &categories) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token fname;     fname.setText("__xhpCategoryDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = categories;
    Token arr;     _p->onArray(arr, categories);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

static void xhp_children_decl_tag(Parser *_p, Token &arr, Token &tag) {
  Token num;  scalar_num(_p, num, tag.num());
  Token arr1; _p->onArrayPair(arr1, &arr, 0, num, 0);

  Token name;
  if (tag.num() == 3 || tag.num() == 4) {
    _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, tag);
  } else if (tag.num() >= 0) {
    scalar_null(_p, name);
  } else {
    HPHP_PARSER_ERROR("XHP: unknown children declaration", _p);
  }
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, name, 0);
  arr = arr2;
}

static void xhp_children_decl(Parser *_p, Token &out, Token &op1, int op,
                              Token *op2) {
  Token num; scalar_num(_p, num, op);
  Token arr; _p->onArrayPair(arr, 0, 0, num, 0);

  if (op2) {
    Token arr1; _p->onArrayPair(arr1, &arr,  0, op1,  0);
    Token arr2; _p->onArrayPair(arr2, &arr1, 0, *op2, 0);
    _p->onArray(out, arr2);
  } else {
    xhp_children_decl_tag(_p, arr, op1);
    _p->onArray(out, arr);
  }
}

static void xhp_children_paren(Parser *_p, Token &out, Token exp, int op) {
  Token num;  scalar_num(_p, num, op);
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token num5; scalar_num(_p, num5, 5);
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, num5, 0);

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, exp, 0);
  _p->onArray(out, arr3);
}

static void xhp_children_stmt(Parser *_p, Token &out, Token &children) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token fname;     fname.setText("__xhpChildrenDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = children;
    Token arr;
    if (children.num() == 2) {
      arr = children;
    } else if (children.num() >= 0) {
      scalar_num(_p, arr, children.num());
    } else {
      HPHP_PARSER_ERROR("XHP: XHP unknown children declaration", _p);
    }
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

/* This is called from strict-mode productions (sm_*) to throw an
 * error if we're not in strict mode */
static void only_in_strict_mode(Parser *_p) {
  if (!_p->scanner().isStrictMode()) {
    HPHP_PARSER_ERROR("Syntax only allowed in strict mode", _p);
  }
}

static void only_in_hphp_syntax(Parser *_p) {
  if (!_p->enableHipHopSyntax()) {
    HPHP_PARSER_ERROR("Syntax only allowed with -v Eval.EnableHipHopSyntax=true", _p);
  }
}


///////////////////////////////////////////////////////////////////////////////

static int yylex(YYSTYPE *token, HPHP::Location *loc, Parser *_p) {
  return _p->scan(token, loc);
}


/* Line 189 of yacc.c  */
#line 809 "hphp.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_GOTO = 332,
     T_CONTINUE = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_GLOBAL = 341,
     T_PUBLIC = 342,
     T_PROTECTED = 343,
     T_PRIVATE = 344,
     T_FINAL = 345,
     T_ABSTRACT = 346,
     T_STATIC = 347,
     T_VAR = 348,
     T_UNSET = 349,
     T_ISSET = 350,
     T_EMPTY = 351,
     T_HALT_COMPILER = 352,
     T_CLASS = 353,
     T_INTERFACE = 354,
     T_EXTENDS = 355,
     T_IMPLEMENTS = 356,
     T_OBJECT_OPERATOR = 357,
     T_DOUBLE_ARROW = 358,
     T_LIST = 359,
     T_ARRAY = 360,
     T_CLASS_C = 361,
     T_METHOD_C = 362,
     T_FUNC_C = 363,
     T_LINE = 364,
     T_FILE = 365,
     T_COMMENT = 366,
     T_DOC_COMMENT = 367,
     T_OPEN_TAG = 368,
     T_OPEN_TAG_WITH_ECHO = 369,
     T_CLOSE_TAG = 370,
     T_WHITESPACE = 371,
     T_START_HEREDOC = 372,
     T_END_HEREDOC = 373,
     T_DOLLAR_OPEN_CURLY_BRACES = 374,
     T_CURLY_OPEN = 375,
     T_PAAMAYIM_NEKUDOTAYIM = 376,
     T_NAMESPACE = 377,
     T_NS_C = 378,
     T_DIR = 379,
     T_NS_SEPARATOR = 380,
     T_YIELD = 381,
     T_XHP_LABEL = 382,
     T_XHP_TEXT = 383,
     T_XHP_ATTRIBUTE = 384,
     T_XHP_CATEGORY = 385,
     T_XHP_CATEGORY_LABEL = 386,
     T_XHP_CHILDREN = 387,
     T_XHP_ENUM = 388,
     T_XHP_REQUIRED = 389,
     T_TRAIT = 390,
     T_INSTEADOF = 391,
     T_TRAIT_C = 392,
     T_VARARG = 393,
     T_STRICT_ERROR = 394,
     T_FINALLY = 395,
     T_XHP_TAG_LT = 396,
     T_XHP_TAG_GT = 397,
     T_TYPELIST_LT = 398,
     T_TYPELIST_GT = 399,
     T_UNRESOLVED_LT = 400,
     T_COLLECTION = 401
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int line0;
  int char0;
  int line1;
  int char1;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1010 "hphp.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
struct yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (struct yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  194
/* YYNRULES -- Number of rules.  */
#define YYNRULES  678
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   401

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   174,     2,   171,    47,    31,   175,
     166,   167,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   168,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   173,    30,     2,   172,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   169,    29,   170,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      22,    26,    27,    34,    35,    41,    45,    48,    50,    52,
      54,    56,    58,    60,    64,    66,    68,    71,    75,    80,
      82,    86,    88,    91,    95,    97,   100,   103,   109,   114,
     117,   118,   120,   122,   124,   126,   130,   136,   145,   146,
     151,   152,   159,   160,   171,   172,   177,   180,   184,   187,
     191,   194,   198,   202,   206,   210,   214,   220,   222,   224,
     225,   235,   241,   256,   262,   266,   270,   273,   276,   279,
     282,   285,   295,   296,   297,   303,   305,   306,   308,   309,
     311,   312,   324,   325,   338,   339,   348,   349,   359,   360,
     368,   369,   378,   379,   386,   387,   395,   397,   399,   401,
     403,   405,   408,   411,   414,   415,   418,   419,   422,   423,
     425,   429,   431,   435,   438,   439,   441,   444,   446,   451,
     453,   458,   460,   465,   467,   472,   476,   482,   486,   491,
     496,   502,   508,   513,   514,   516,   518,   523,   524,   530,
     531,   534,   535,   539,   540,   544,   547,   549,   550,   554,
     559,   566,   572,   578,   585,   594,   602,   605,   606,   608,
     611,   615,   620,   624,   626,   628,   631,   636,   640,   646,
     648,   652,   655,   656,   657,   662,   663,   669,   672,   673,
     684,   685,   697,   701,   705,   709,   713,   719,   722,   725,
     726,   733,   739,   744,   748,   750,   752,   756,   761,   763,
     765,   767,   769,   774,   776,   780,   783,   784,   787,   788,
     790,   794,   796,   798,   800,   802,   806,   811,   816,   821,
     823,   825,   828,   831,   834,   838,   842,   844,   846,   848,
     850,   854,   856,   858,   860,   861,   863,   866,   868,   870,
     872,   874,   876,   878,   882,   888,   890,   894,   900,   905,
     909,   913,   917,   921,   923,   925,   926,   929,   933,   940,
     942,   944,   946,   953,   957,   962,   969,   972,   976,   980,
     984,   988,   992,   996,  1000,  1004,  1008,  1012,  1016,  1019,
    1022,  1025,  1028,  1032,  1036,  1040,  1044,  1048,  1052,  1056,
    1060,  1064,  1068,  1072,  1076,  1080,  1084,  1088,  1092,  1095,
    1098,  1101,  1104,  1108,  1112,  1116,  1120,  1124,  1128,  1132,
    1136,  1140,  1144,  1150,  1155,  1157,  1160,  1163,  1166,  1169,
    1172,  1175,  1178,  1181,  1184,  1186,  1188,  1192,  1195,  1196,
    1208,  1209,  1222,  1224,  1226,  1228,  1233,  1238,  1243,  1248,
    1253,  1255,  1257,  1261,  1267,  1268,  1272,  1277,  1279,  1282,
    1287,  1290,  1297,  1298,  1300,  1305,  1306,  1309,  1310,  1312,
    1314,  1318,  1320,  1324,  1326,  1328,  1332,  1336,  1338,  1340,
    1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,  1358,  1360,
    1362,  1364,  1366,  1368,  1370,  1372,  1374,  1376,  1378,  1380,
    1382,  1384,  1386,  1388,  1390,  1392,  1394,  1396,  1398,  1400,
    1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,
    1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1438,  1440,
    1442,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,
    1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,  1478,  1480,
    1482,  1487,  1489,  1491,  1493,  1495,  1497,  1499,  1501,  1503,
    1506,  1508,  1509,  1510,  1512,  1514,  1518,  1519,  1521,  1523,
    1525,  1527,  1529,  1531,  1533,  1535,  1537,  1539,  1541,  1545,
    1548,  1550,  1552,  1555,  1558,  1563,  1565,  1567,  1571,  1575,
    1577,  1579,  1581,  1583,  1587,  1591,  1595,  1598,  1599,  1601,
    1602,  1604,  1605,  1611,  1615,  1619,  1621,  1623,  1625,  1627,
    1631,  1634,  1636,  1638,  1640,  1642,  1644,  1647,  1650,  1655,
    1658,  1659,  1665,  1669,  1673,  1675,  1679,  1681,  1684,  1685,
    1689,  1690,  1695,  1698,  1699,  1703,  1707,  1709,  1710,  1712,
    1715,  1718,  1723,  1727,  1731,  1734,  1739,  1742,  1747,  1749,
    1751,  1753,  1755,  1757,  1760,  1765,  1769,  1774,  1778,  1780,
    1782,  1784,  1786,  1789,  1794,  1799,  1803,  1805,  1807,  1811,
    1819,  1826,  1835,  1845,  1854,  1865,  1873,  1880,  1882,  1885,
    1890,  1895,  1897,  1899,  1904,  1906,  1907,  1909,  1912,  1914,
    1916,  1919,  1924,  1928,  1932,  1933,  1935,  1938,  1943,  1947,
    1950,  1954,  1961,  1962,  1964,  1969,  1972,  1973,  1979,  1983,
    1987,  1989,  1996,  2001,  2006,  2009,  2012,  2013,  2019,  2023,
    2027,  2029,  2032,  2033,  2039,  2043,  2047,  2049,  2052,  2055,
    2057,  2060,  2062,  2067,  2071,  2075,  2082,  2086,  2088,  2090,
    2092,  2097,  2102,  2105,  2108,  2113,  2116,  2119,  2121,  2125,
    2129,  2131,  2134,  2136,  2141,  2145,  2146,  2148,  2152,  2156,
    2158,  2160,  2161,  2162,  2165,  2169,  2171,  2177,  2181,  2184,
    2187,  2190,  2192,  2197,  2204,  2206,  2215,  2221,  2223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     177,     0,    -1,   178,    -1,   178,   179,    -1,    -1,   193,
      -1,   205,    -1,   208,    -1,   213,    -1,   116,   166,   167,
     168,    -1,   141,   185,   168,    -1,    -1,   141,   185,   169,
     180,   178,   170,    -1,    -1,   141,   169,   181,   178,   170,
      -1,   104,   183,   168,    -1,   190,   168,    -1,    71,    -1,
     148,    -1,   149,    -1,   151,    -1,   153,    -1,   152,    -1,
     183,     8,   184,    -1,   184,    -1,   185,    -1,   144,   185,
      -1,   185,    90,   182,    -1,   144,   185,    90,   182,    -1,
     182,    -1,   185,   144,   182,    -1,   185,    -1,   144,   185,
      -1,   141,   144,   185,    -1,   186,    -1,   186,   363,    -1,
     186,   363,    -1,   190,     8,   361,    13,   311,    -1,    99,
     361,    13,   311,    -1,   191,   192,    -1,    -1,   193,    -1,
     205,    -1,   208,    -1,   213,    -1,   169,   191,   170,    -1,
      65,   276,   193,   235,   237,    -1,    65,   276,    26,   191,
     236,   238,    68,   168,    -1,    -1,    82,   276,   194,   229,
      -1,    -1,    81,   195,   193,    82,   276,   168,    -1,    -1,
      84,   166,   278,   168,   278,   168,   278,   167,   196,   227,
      -1,    -1,    91,   276,   197,   232,    -1,    95,   168,    -1,
      95,   282,   168,    -1,    97,   168,    -1,    97,   282,   168,
      -1,   100,   168,    -1,   100,   282,   168,    -1,   145,    95,
     168,    -1,   105,   243,   168,    -1,   111,   245,   168,    -1,
      80,   277,   168,    -1,   113,   166,   359,   167,   168,    -1,
     168,    -1,    75,    -1,    -1,    86,   166,   282,    90,   226,
     225,   167,   198,   228,    -1,    88,   166,   231,   167,   230,
      -1,   101,   169,   191,   170,   102,   166,   304,    73,   167,
     169,   191,   170,   199,   202,    -1,   101,   169,   191,   170,
     200,    -1,   103,   282,   168,    -1,    96,   182,   168,    -1,
     282,   168,    -1,   279,   168,    -1,   280,   168,    -1,   281,
     168,    -1,   182,    26,    -1,   199,   102,   166,   304,    73,
     167,   169,   191,   170,    -1,    -1,    -1,   201,   159,   169,
     191,   170,    -1,   200,    -1,    -1,    31,    -1,    -1,    98,
      -1,    -1,   204,   203,   362,   206,   166,   239,   167,   366,
     169,   191,   170,    -1,    -1,   329,   204,   203,   362,   207,
     166,   239,   167,   366,   169,   191,   170,    -1,    -1,   219,
     216,   209,   220,   221,   169,   246,   170,    -1,    -1,   329,
     219,   216,   210,   220,   221,   169,   246,   170,    -1,    -1,
     118,   217,   211,   222,   169,   246,   170,    -1,    -1,   329,
     118,   217,   212,   222,   169,   246,   170,    -1,    -1,   154,
     218,   214,   169,   246,   170,    -1,    -1,   329,   154,   218,
     215,   169,   246,   170,    -1,   362,    -1,   146,    -1,   362,
      -1,   362,    -1,   117,    -1,   110,   117,    -1,   109,   117,
      -1,   119,   304,    -1,    -1,   120,   223,    -1,    -1,   119,
     223,    -1,    -1,   304,    -1,   223,     8,   304,    -1,   304,
      -1,   224,     8,   304,    -1,   122,   226,    -1,    -1,   336,
      -1,    31,   336,    -1,   193,    -1,    26,   191,    85,   168,
      -1,   193,    -1,    26,   191,    87,   168,    -1,   193,    -1,
      26,   191,    83,   168,    -1,   193,    -1,    26,   191,    89,
     168,    -1,   182,    13,   311,    -1,   231,     8,   182,    13,
     311,    -1,   169,   233,   170,    -1,   169,   168,   233,   170,
      -1,    26,   233,    92,   168,    -1,    26,   168,   233,    92,
     168,    -1,   233,    93,   282,   234,   191,    -1,   233,    94,
     234,   191,    -1,    -1,    26,    -1,   168,    -1,   235,    66,
     276,   193,    -1,    -1,   236,    66,   276,    26,   191,    -1,
      -1,    67,   193,    -1,    -1,    67,    26,   191,    -1,    -1,
     240,     8,   157,    -1,   240,   316,    -1,   157,    -1,    -1,
     330,   369,    73,    -1,   330,   369,    31,    73,    -1,   330,
     369,    31,    73,    13,   311,    -1,   330,   369,    73,    13,
     311,    -1,   240,     8,   330,   369,    73,    -1,   240,     8,
     330,   369,    31,    73,    -1,   240,     8,   330,   369,    31,
      73,    13,   311,    -1,   240,     8,   330,   369,    73,    13,
     311,    -1,   242,   316,    -1,    -1,   282,    -1,    31,   336,
      -1,   242,     8,   282,    -1,   242,     8,    31,   336,    -1,
     243,     8,   244,    -1,   244,    -1,    73,    -1,   171,   336,
      -1,   171,   169,   282,   170,    -1,   245,     8,    73,    -1,
     245,     8,    73,    13,   311,    -1,    73,    -1,    73,    13,
     311,    -1,   246,   247,    -1,    -1,    -1,   269,   248,   273,
     168,    -1,    -1,   271,   368,   249,   273,   168,    -1,   274,
     168,    -1,    -1,   270,   204,   203,   362,   166,   250,   239,
     167,   366,   268,    -1,    -1,   329,   270,   204,   203,   362,
     166,   251,   239,   167,   366,   268,    -1,   148,   256,   168,
      -1,   149,   262,   168,    -1,   151,   264,   168,    -1,   104,
     224,   168,    -1,   104,   224,   169,   252,   170,    -1,   252,
     253,    -1,   252,   254,    -1,    -1,   189,   140,   182,   155,
     224,   168,    -1,   255,    90,   270,   182,   168,    -1,   255,
      90,   271,   168,    -1,   189,   140,   182,    -1,   182,    -1,
     257,    -1,   256,     8,   257,    -1,   258,   301,   260,   261,
      -1,   146,    -1,   124,    -1,   304,    -1,   112,    -1,   152,
     169,   259,   170,    -1,   310,    -1,   259,     8,   310,    -1,
      13,   311,    -1,    -1,    51,   153,    -1,    -1,   263,    -1,
     262,     8,   263,    -1,   150,    -1,   265,    -1,   182,    -1,
     115,    -1,   166,   266,   167,    -1,   166,   266,   167,    45,
      -1,   166,   266,   167,    25,    -1,   166,   266,   167,    42,
      -1,   265,    -1,   267,    -1,   267,    45,    -1,   267,    25,
      -1,   267,    42,    -1,   266,     8,   266,    -1,   266,    29,
     266,    -1,   182,    -1,   146,    -1,   150,    -1,   168,    -1,
     169,   191,   170,    -1,   271,    -1,   112,    -1,   271,    -1,
      -1,   272,    -1,   271,   272,    -1,   106,    -1,   107,    -1,
     108,    -1,   111,    -1,   110,    -1,   109,    -1,   273,     8,
      73,    -1,   273,     8,    73,    13,   311,    -1,    73,    -1,
      73,    13,   311,    -1,   274,     8,   361,    13,   311,    -1,
      99,   361,    13,   311,    -1,    63,   306,   309,    -1,   166,
     275,   167,    -1,   166,   282,   167,    -1,   277,     8,   282,
      -1,   282,    -1,   277,    -1,    -1,   145,   282,    -1,   336,
      13,   279,    -1,   123,   166,   348,   167,    13,   279,    -1,
     283,    -1,   336,    -1,   275,    -1,   123,   166,   348,   167,
      13,   282,    -1,   336,    13,   282,    -1,   336,    13,    31,
     336,    -1,   336,    13,    31,    63,   306,   309,    -1,    62,
     282,    -1,   336,    24,   282,    -1,   336,    23,   282,    -1,
     336,    22,   282,    -1,   336,    21,   282,    -1,   336,    20,
     282,    -1,   336,    19,   282,    -1,   336,    18,   282,    -1,
     336,    17,   282,    -1,   336,    16,   282,    -1,   336,    15,
     282,    -1,   336,    14,   282,    -1,   336,    60,    -1,    60,
     336,    -1,   336,    59,    -1,    59,   336,    -1,   282,    27,
     282,    -1,   282,    28,   282,    -1,   282,     9,   282,    -1,
     282,    11,   282,    -1,   282,    10,   282,    -1,   282,    29,
     282,    -1,   282,    31,   282,    -1,   282,    30,   282,    -1,
     282,    44,   282,    -1,   282,    42,   282,    -1,   282,    43,
     282,    -1,   282,    45,   282,    -1,   282,    46,   282,    -1,
     282,    47,   282,    -1,   282,    41,   282,    -1,   282,    40,
     282,    -1,    42,   282,    -1,    43,   282,    -1,    48,   282,
      -1,    50,   282,    -1,   282,    33,   282,    -1,   282,    32,
     282,    -1,   282,    35,   282,    -1,   282,    34,   282,    -1,
     282,    36,   282,    -1,   282,    39,   282,    -1,   282,    37,
     282,    -1,   282,    38,   282,    -1,   282,    49,   306,    -1,
     166,   283,   167,    -1,   282,    25,   282,    26,   282,    -1,
     282,    25,    26,   282,    -1,   358,    -1,    58,   282,    -1,
      57,   282,    -1,    56,   282,    -1,    55,   282,    -1,    54,
     282,    -1,    53,   282,    -1,    52,   282,    -1,    64,   307,
      -1,    51,   282,    -1,   313,    -1,   286,    -1,   172,   308,
     172,    -1,    12,   282,    -1,    -1,   204,   203,   166,   284,
     239,   167,   366,   291,   169,   191,   170,    -1,    -1,   111,
     204,   203,   166,   285,   239,   167,   366,   291,   169,   191,
     170,    -1,   293,    -1,   289,    -1,   287,    -1,   124,   166,
     349,   167,    -1,   304,   169,   351,   170,    -1,   304,   169,
     353,   170,    -1,   289,    61,   344,   173,    -1,   290,    61,
     344,   173,    -1,   286,    -1,   360,    -1,   166,   283,   167,
      -1,   104,   166,   292,   316,   167,    -1,    -1,   292,     8,
      73,    -1,   292,     8,    31,    73,    -1,    73,    -1,    31,
      73,    -1,   160,   146,   294,   161,    -1,   296,    46,    -1,
     296,   161,   297,   160,    46,   295,    -1,    -1,   146,    -1,
     296,   298,    13,   299,    -1,    -1,   297,   300,    -1,    -1,
     146,    -1,   147,    -1,   169,   282,   170,    -1,   147,    -1,
     169,   282,   170,    -1,   293,    -1,   302,    -1,   301,    26,
     302,    -1,   301,    43,   302,    -1,   182,    -1,    64,    -1,
      98,    -1,    99,    -1,   100,    -1,   145,    -1,   101,    -1,
     102,    -1,   159,    -1,   103,    -1,    65,    -1,    66,    -1,
      68,    -1,    67,    -1,    82,    -1,    83,    -1,    81,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    49,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    97,    -1,    96,    -1,
      80,    -1,    12,    -1,   117,    -1,   118,    -1,   119,    -1,
     120,    -1,    63,    -1,    62,    -1,   112,    -1,     5,    -1,
       7,    -1,     6,    -1,     4,    -1,     3,    -1,   141,    -1,
     104,    -1,   105,    -1,   114,    -1,   115,    -1,   116,    -1,
     111,    -1,   110,    -1,   109,    -1,   108,    -1,   107,    -1,
     106,    -1,   113,    -1,   123,    -1,   124,    -1,     9,    -1,
      11,    -1,    10,    -1,   125,    -1,   127,    -1,   126,    -1,
     128,    -1,   129,    -1,   143,    -1,   142,    -1,   154,    -1,
     156,    -1,   188,   166,   241,   167,    -1,   189,    -1,   146,
      -1,   304,    -1,   111,    -1,   342,    -1,   304,    -1,   111,
      -1,   346,    -1,   166,   167,    -1,   276,    -1,    -1,    -1,
      78,    -1,   355,    -1,   166,   241,   167,    -1,    -1,    69,
      -1,    70,    -1,    79,    -1,   128,    -1,   129,    -1,   143,
      -1,   125,    -1,   156,    -1,   126,    -1,   127,    -1,   142,
      -1,   136,    78,   137,    -1,   136,   137,    -1,   310,    -1,
     187,    -1,    42,   311,    -1,    43,   311,    -1,   124,   166,
     314,   167,    -1,   312,    -1,   288,    -1,   189,   140,   182,
      -1,   146,   140,   182,    -1,   187,    -1,    72,    -1,   360,
      -1,   310,    -1,   174,   355,   174,    -1,   175,   355,   175,
      -1,   136,   355,   137,    -1,   317,   315,    -1,    -1,     8,
      -1,    -1,     8,    -1,    -1,   317,     8,   311,   122,   311,
      -1,   317,     8,   311,    -1,   311,   122,   311,    -1,   311,
      -1,    69,    -1,    70,    -1,    79,    -1,   136,    78,   137,
      -1,   136,   137,    -1,    69,    -1,    70,    -1,   182,    -1,
     318,    -1,   182,    -1,    42,   319,    -1,    43,   319,    -1,
     124,   166,   321,   167,    -1,   322,   315,    -1,    -1,   322,
       8,   320,   122,   320,    -1,   322,     8,   320,    -1,   320,
     122,   320,    -1,   320,    -1,   323,     8,   320,    -1,   320,
      -1,   323,   315,    -1,    -1,   166,   324,   167,    -1,    -1,
     326,     8,   182,   325,    -1,   182,   325,    -1,    -1,   328,
     326,   315,    -1,    41,   327,    40,    -1,   329,    -1,    -1,
     332,    -1,   121,   341,    -1,   121,   182,    -1,   121,   169,
     282,   170,    -1,    61,   344,   173,    -1,   169,   282,   170,
      -1,   337,   333,    -1,   166,   275,   167,   333,    -1,   347,
     333,    -1,   166,   275,   167,   333,    -1,   341,    -1,   303,
      -1,   339,    -1,   340,    -1,   334,    -1,   336,   331,    -1,
     166,   275,   167,   331,    -1,   305,   140,   341,    -1,   338,
     166,   241,   167,    -1,   166,   336,   167,    -1,   303,    -1,
     339,    -1,   340,    -1,   334,    -1,   336,   332,    -1,   166,
     275,   167,   332,    -1,   338,   166,   241,   167,    -1,   166,
     336,   167,    -1,   341,    -1,   334,    -1,   166,   336,   167,
      -1,   336,   121,   182,   363,   166,   241,   167,    -1,   336,
     121,   341,   166,   241,   167,    -1,   336,   121,   169,   282,
     170,   166,   241,   167,    -1,   166,   275,   167,   121,   182,
     363,   166,   241,   167,    -1,   166,   275,   167,   121,   341,
     166,   241,   167,    -1,   166,   275,   167,   121,   169,   282,
     170,   166,   241,   167,    -1,   305,   140,   182,   363,   166,
     241,   167,    -1,   305,   140,   341,   166,   241,   167,    -1,
     342,    -1,   345,   342,    -1,   342,    61,   344,   173,    -1,
     342,   169,   282,   170,    -1,   343,    -1,    73,    -1,   171,
     169,   282,   170,    -1,   282,    -1,    -1,   171,    -1,   345,
     171,    -1,   341,    -1,   335,    -1,   346,   331,    -1,   166,
     275,   167,   331,    -1,   305,   140,   341,    -1,   166,   336,
     167,    -1,    -1,   335,    -1,   346,   332,    -1,   166,   275,
     167,   332,    -1,   166,   336,   167,    -1,   348,     8,    -1,
     348,     8,   336,    -1,   348,     8,   123,   166,   348,   167,
      -1,    -1,   336,    -1,   123,   166,   348,   167,    -1,   350,
     315,    -1,    -1,   350,     8,   282,   122,   282,    -1,   350,
       8,   282,    -1,   282,   122,   282,    -1,   282,    -1,   350,
       8,   282,   122,    31,   336,    -1,   350,     8,    31,   336,
      -1,   282,   122,    31,   336,    -1,    31,   336,    -1,   352,
     315,    -1,    -1,   352,     8,   282,   122,   282,    -1,   352,
       8,   282,    -1,   282,   122,   282,    -1,   282,    -1,   354,
     315,    -1,    -1,   354,     8,   311,   122,   311,    -1,   354,
       8,   311,    -1,   311,   122,   311,    -1,   311,    -1,   355,
     356,    -1,   355,    78,    -1,   356,    -1,    78,   356,    -1,
      73,    -1,    73,    61,   357,   173,    -1,    73,   121,   182,
      -1,   138,   282,   170,    -1,   138,    72,    61,   282,   173,
     170,    -1,   139,   336,   170,    -1,   182,    -1,    74,    -1,
      73,    -1,   114,   166,   359,   167,    -1,   115,   166,   336,
     167,    -1,     7,   282,    -1,     6,   282,    -1,     5,   166,
     282,   167,    -1,     4,   282,    -1,     3,   282,    -1,   336,
      -1,   359,     8,   336,    -1,   305,   140,   182,    -1,   182,
      -1,   368,   182,    -1,   182,    -1,   182,   162,   367,   163,
      -1,   162,   364,   163,    -1,    -1,   368,    -1,   364,     8,
     368,    -1,   364,     8,   157,    -1,   364,    -1,   157,    -1,
      -1,    -1,    26,   368,    -1,   182,     8,   367,    -1,   182,
      -1,   182,    90,   182,     8,   367,    -1,   182,    90,   182,
      -1,    25,   368,    -1,    51,   368,    -1,   182,   363,    -1,
     124,    -1,   124,   162,   368,   163,    -1,   124,   162,   368,
       8,   368,   163,    -1,   146,    -1,   166,    98,   166,   365,
     167,    26,   368,   167,    -1,   166,   364,     8,   368,   167,
      -1,   368,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   863,   863,   868,   870,   873,   875,   876,   877,   878,
     879,   881,   881,   883,   883,   885,   886,   891,   892,   893,
     894,   895,   896,   900,   902,   905,   906,   907,   908,   913,
     914,   918,   919,   920,   925,   930,   936,   942,   945,   950,
     952,   955,   956,   957,   958,   961,   962,   966,   971,   971,
     975,   975,   980,   979,   983,   983,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,  1001,
     999,  1004,  1006,  1014,  1017,  1018,  1022,  1023,  1024,  1025,
    1026,  1033,  1039,  1043,  1043,  1049,  1050,  1054,  1055,  1059,
    1064,  1063,  1074,  1073,  1087,  1086,  1105,  1103,  1122,  1121,
    1130,  1128,  1140,  1139,  1150,  1148,  1160,  1161,  1165,  1168,
    1171,  1172,  1173,  1176,  1178,  1181,  1182,  1185,  1186,  1189,
    1190,  1194,  1195,  1200,  1201,  1204,  1205,  1209,  1210,  1214,
    1215,  1219,  1220,  1224,  1225,  1230,  1231,  1236,  1237,  1238,
    1239,  1242,  1245,  1247,  1250,  1251,  1255,  1257,  1260,  1263,
    1266,  1267,  1270,  1271,  1275,  1277,  1279,  1280,  1284,  1286,
    1288,  1291,  1294,  1297,  1300,  1304,  1311,  1313,  1316,  1317,
    1318,  1320,  1325,  1326,  1329,  1330,  1331,  1335,  1336,  1338,
    1339,  1343,  1345,  1348,  1348,  1352,  1351,  1355,  1359,  1357,
    1371,  1368,  1380,  1382,  1384,  1386,  1388,  1392,  1393,  1394,
    1397,  1403,  1406,  1412,  1415,  1420,  1422,  1427,  1432,  1436,
    1437,  1443,  1444,  1449,  1450,  1455,  1456,  1460,  1461,  1465,
    1467,  1473,  1478,  1479,  1481,  1485,  1486,  1487,  1488,  1492,
    1493,  1494,  1495,  1496,  1497,  1499,  1504,  1507,  1508,  1512,
    1513,  1516,  1517,  1520,  1521,  1524,  1525,  1529,  1530,  1531,
    1532,  1533,  1534,  1537,  1539,  1541,  1542,  1545,  1547,  1551,
    1553,  1557,  1561,  1562,  1566,  1567,  1571,  1575,  1579,  1584,
    1585,  1586,  1589,  1591,  1592,  1593,  1596,  1597,  1598,  1599,
    1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,  1609,
    1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,  1618,  1619,
    1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1628,  1629,
    1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,  1639,  1640,
    1642,  1644,  1645,  1646,  1647,  1648,  1649,  1650,  1651,  1652,
    1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,  1662,  1661,
    1670,  1669,  1677,  1678,  1679,  1683,  1687,  1694,  1701,  1703,
    1708,  1709,  1710,  1714,  1718,  1722,  1723,  1724,  1725,  1729,
    1735,  1740,  1749,  1750,  1753,  1756,  1759,  1760,  1763,  1767,
    1770,  1773,  1780,  1781,  1785,  1786,  1788,  1792,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,
    1805,  1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1814,
    1815,  1816,  1817,  1818,  1819,  1820,  1821,  1822,  1823,  1824,
    1825,  1826,  1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,
    1835,  1836,  1837,  1838,  1839,  1840,  1841,  1842,  1843,  1844,
    1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,  1853,  1854,
    1855,  1856,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1864,
    1868,  1873,  1874,  1877,  1878,  1879,  1883,  1884,  1885,  1889,
    1890,  1891,  1895,  1896,  1897,  1900,  1902,  1906,  1907,  1908,
    1910,  1911,  1912,  1913,  1914,  1915,  1916,  1917,  1918,  1921,
    1926,  1927,  1928,  1929,  1930,  1932,  1933,  1936,  1939,  1944,
    1945,  1946,  1947,  1948,  1949,  1950,  1955,  1957,  1960,  1961,
    1964,  1965,  1968,  1971,  1973,  1975,  1979,  1980,  1981,  1983,
    1986,  1990,  1991,  1992,  1995,  1996,  1997,  1998,  1999,  2003,
    2005,  2008,  2011,  2013,  2015,  2018,  2020,  2023,  2025,  2028,
    2029,  2033,  2036,  2040,  2040,  2045,  2048,  2049,  2053,  2054,
    2059,  2060,  2064,  2065,  2069,  2070,  2074,  2076,  2080,  2081,
    2082,  2083,  2084,  2085,  2086,  2087,  2090,  2092,  2096,  2097,
    2098,  2099,  2100,  2102,  2104,  2106,  2110,  2111,  2112,  2116,
    2119,  2122,  2125,  2128,  2131,  2137,  2141,  2148,  2149,  2154,
    2156,  2157,  2160,  2161,  2164,  2165,  2169,  2170,  2174,  2175,
    2176,  2177,  2178,  2181,  2184,  2185,  2186,  2188,  2190,  2194,
    2195,  2196,  2198,  2199,  2200,  2204,  2206,  2209,  2211,  2212,
    2213,  2214,  2217,  2219,  2220,  2224,  2226,  2229,  2231,  2232,
    2233,  2237,  2239,  2242,  2245,  2247,  2249,  2253,  2254,  2256,
    2257,  2263,  2264,  2266,  2268,  2270,  2272,  2275,  2276,  2277,
    2281,  2282,  2283,  2284,  2285,  2286,  2287,  2291,  2292,  2296,
    2305,  2306,  2312,  2313,  2321,  2324,  2328,  2329,  2333,  2334,
    2335,  2336,  2340,  2341,  2345,  2346,  2347,  2349,  2357,  2358,
    2359,  2370,  2371,  2374,  2377,  2378,  2381,  2385,  2386
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_GOTO", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "T_YIELD",
  "T_XHP_LABEL", "T_XHP_TEXT", "T_XHP_ATTRIBUTE", "T_XHP_CATEGORY",
  "T_XHP_CATEGORY_LABEL", "T_XHP_CHILDREN", "T_XHP_ENUM", "T_XHP_REQUIRED",
  "T_TRAIT", "T_INSTEADOF", "T_TRAIT_C", "T_VARARG", "T_STRICT_ERROR",
  "T_FINALLY", "T_XHP_TAG_LT", "T_XHP_TAG_GT", "T_TYPELIST_LT",
  "T_TYPELIST_GT", "T_UNRESOLVED_LT", "T_COLLECTION", "'('", "')'", "';'",
  "'{'", "'}'", "'$'", "'`'", "']'", "'\"'", "'\\''", "$accept", "start",
  "top_statement_list", "top_statement", "$@1", "$@2", "ident",
  "use_declarations", "use_declaration", "namespace_name",
  "namespace_string_base", "namespace_string", "namespace_string_typeargs",
  "class_namespace_string_typeargs", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement", "$@3", "$@4",
  "$@5", "$@6", "$@7", "additional_catches", "finally", "$@8",
  "optional_finally", "is_reference", "function_loc",
  "function_declaration_statement", "$@9", "$@10",
  "class_declaration_statement", "$@11", "$@12", "$@13", "$@14",
  "trait_declaration_statement", "$@15", "$@16", "class_decl_name",
  "interface_decl_name", "trait_decl_name", "class_entry_type",
  "extends_from", "implements_list", "interface_extends_list",
  "interface_list", "trait_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "while_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "case_separator", "elseif_list",
  "new_elseif_list", "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "function_call_parameter_list",
  "non_empty_fcall_parameter_list", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@17",
  "$@18", "$@19", "$@20", "trait_rules", "trait_precedence_rule",
  "trait_alias_rule", "trait_alias_rule_method", "xhp_attribute_stmt",
  "xhp_attribute_decl", "xhp_attribute_decl_type", "xhp_attribute_enum",
  "xhp_attribute_default", "xhp_attribute_is_required",
  "xhp_category_stmt", "xhp_category_decl", "xhp_children_stmt",
  "xhp_children_paren_expr", "xhp_children_decl_expr",
  "xhp_children_decl_tag", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration", "new_expr",
  "parenthesis_expr", "expr_list", "for_expr", "yield_expr",
  "yield_assign_expr", "yield_list_assign_expr", "expr",
  "expr_no_variable", "$@21", "$@22", "array_literal",
  "collection_literal", "static_collection_literal", "dim_expr",
  "dim_expr_base", "lexical_vars", "lexical_var_list", "xhp_tag",
  "xhp_tag_body", "xhp_opt_end_label", "xhp_attributes", "xhp_children",
  "xhp_attribute_name", "xhp_attribute_value", "xhp_child", "xhp_label_ws",
  "xhp_bareword", "simple_function_call", "fully_qualified_class_name",
  "static_class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "possible_comma_in_hphp_syntax",
  "non_empty_static_array_pair_list", "common_scalar_ae",
  "static_numeric_scalar_ae", "static_scalar_ae",
  "static_array_pair_list_ae", "non_empty_static_array_pair_list_ae",
  "non_empty_static_scalar_list_ae", "static_scalar_list_ae",
  "attribute_static_scalar_list", "non_empty_user_attribute_list",
  "user_attribute_list", "$@23", "non_empty_user_attributes",
  "optional_user_attributes", "property_access",
  "property_access_without_variables", "array_access",
  "dimmable_variable_access", "dimmable_variable_no_calls_access",
  "variable", "dimmable_variable", "callable_variable",
  "object_method_call", "class_method_call", "variable_without_objects",
  "reference_variable", "compound_variable", "dim_offset",
  "simple_indirect_reference", "variable_no_calls",
  "dimmable_variable_no_calls", "assignment_list", "array_pair_list",
  "non_empty_array_pair_list", "collection_init",
  "non_empty_collection_init", "static_collection_init",
  "non_empty_static_collection_init", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions", "variable_list",
  "class_constant", "sm_name_with_type", "sm_name_with_typevar",
  "sm_typeargs_opt", "sm_type_list", "sm_func_type_list",
  "sm_opt_return_type", "sm_typevar_list", "sm_type", "sm_type_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,    40,    41,    59,   123,
     125,    36,    96,    93,    34,    39
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   176,   177,   178,   178,   179,   179,   179,   179,   179,
     179,   180,   179,   181,   179,   179,   179,   182,   182,   182,
     182,   182,   182,   183,   183,   184,   184,   184,   184,   185,
     185,   186,   186,   186,   187,   188,   189,   190,   190,   191,
     191,   192,   192,   192,   192,   193,   193,   193,   194,   193,
     195,   193,   196,   193,   197,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   198,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   199,   199,   201,   200,   202,   202,   203,   203,   204,
     206,   205,   207,   205,   209,   208,   210,   208,   211,   208,
     212,   208,   214,   213,   215,   213,   216,   216,   217,   218,
     219,   219,   219,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   231,   232,   232,   232,
     232,   233,   233,   233,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   239,   239,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   243,   243,   244,   244,   244,   245,   245,   245,
     245,   246,   246,   248,   247,   249,   247,   247,   250,   247,
     251,   247,   247,   247,   247,   247,   247,   252,   252,   252,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     258,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   264,   264,   264,   265,   265,   265,   265,   266,
     266,   266,   266,   266,   266,   266,   267,   267,   267,   268,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   274,   274,   275,
     275,   276,   277,   277,   278,   278,   279,   280,   281,   282,
     282,   282,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   284,   283,
     285,   283,   283,   283,   283,   286,   287,   288,   289,   289,
     290,   290,   290,   291,   291,   292,   292,   292,   292,   293,
     294,   294,   295,   295,   296,   296,   297,   297,   298,   299,
     299,   300,   300,   300,   301,   301,   301,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     303,   304,   304,   305,   305,   305,   306,   306,   306,   307,
     307,   307,   308,   308,   308,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   312,   312,   313,
     313,   313,   313,   313,   313,   313,   314,   314,   315,   315,
     316,   316,   317,   317,   317,   317,   318,   318,   318,   318,
     318,   319,   319,   319,   320,   320,   320,   320,   320,   321,
     321,   322,   322,   322,   322,   323,   323,   324,   324,   325,
     325,   326,   326,   328,   327,   329,   330,   330,   331,   331,
     332,   332,   333,   333,   334,   334,   335,   335,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   337,   337,
     337,   337,   337,   337,   337,   337,   338,   338,   338,   339,
     339,   339,   339,   339,   339,   340,   340,   341,   341,   342,
     342,   342,   343,   343,   344,   344,   345,   345,   346,   346,
     346,   346,   346,   346,   347,   347,   347,   347,   347,   348,
     348,   348,   348,   348,   348,   349,   349,   350,   350,   350,
     350,   350,   350,   350,   350,   351,   351,   352,   352,   352,
     352,   353,   353,   354,   354,   354,   354,   355,   355,   355,
     355,   356,   356,   356,   356,   356,   356,   357,   357,   357,
     358,   358,   358,   358,   358,   358,   358,   359,   359,   360,
     361,   361,   362,   362,   363,   363,   364,   364,   365,   365,
     365,   365,   366,   366,   367,   367,   367,   367,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   369,   369
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     4,
       3,     0,     6,     0,     5,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     3,     4,     1,
       3,     1,     2,     3,     1,     2,     2,     5,     4,     2,
       0,     1,     1,     1,     1,     3,     5,     8,     0,     4,
       0,     6,     0,    10,     0,     4,     2,     3,     2,     3,
       2,     3,     3,     3,     3,     3,     5,     1,     1,     0,
       9,     5,    14,     5,     3,     3,     2,     2,     2,     2,
       2,     9,     0,     0,     5,     1,     0,     1,     0,     1,
       0,    11,     0,    12,     0,     8,     0,     9,     0,     7,
       0,     8,     0,     6,     0,     7,     1,     1,     1,     1,
       1,     2,     2,     2,     0,     2,     0,     2,     0,     1,
       3,     1,     3,     2,     0,     1,     2,     1,     4,     1,
       4,     1,     4,     1,     4,     3,     5,     3,     4,     4,
       5,     5,     4,     0,     1,     1,     4,     0,     5,     0,
       2,     0,     3,     0,     3,     2,     1,     0,     3,     4,
       6,     5,     5,     6,     8,     7,     2,     0,     1,     2,
       3,     4,     3,     1,     1,     2,     4,     3,     5,     1,
       3,     2,     0,     0,     4,     0,     5,     2,     0,    10,
       0,    11,     3,     3,     3,     3,     5,     2,     2,     0,
       6,     5,     4,     3,     1,     1,     3,     4,     1,     1,
       1,     1,     4,     1,     3,     2,     0,     2,     0,     1,
       3,     1,     1,     1,     1,     3,     4,     4,     4,     1,
       1,     2,     2,     2,     3,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       3,     3,     3,     1,     1,     0,     2,     3,     6,     1,
       1,     1,     6,     3,     4,     6,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     3,     2,     0,    11,
       0,    12,     1,     1,     1,     4,     4,     4,     4,     4,
       1,     1,     3,     5,     0,     3,     4,     1,     2,     4,
       2,     6,     0,     1,     4,     0,     2,     0,     1,     1,
       3,     1,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     0,     0,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     2,     2,     4,     1,     1,     3,     3,     1,
       1,     1,     1,     3,     3,     3,     2,     0,     1,     0,
       1,     0,     5,     3,     3,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     2,     2,     4,     2,
       0,     5,     3,     3,     1,     3,     1,     2,     0,     3,
       0,     4,     2,     0,     3,     3,     1,     0,     1,     2,
       2,     4,     3,     3,     2,     4,     2,     4,     1,     1,
       1,     1,     1,     2,     4,     3,     4,     3,     1,     1,
       1,     1,     2,     4,     4,     3,     1,     1,     3,     7,
       6,     8,     9,     8,    10,     7,     6,     1,     2,     4,
       4,     1,     1,     4,     1,     0,     1,     2,     1,     1,
       2,     4,     3,     3,     0,     1,     2,     4,     3,     2,
       3,     6,     0,     1,     4,     2,     0,     5,     3,     3,
       1,     6,     4,     4,     2,     2,     0,     5,     3,     3,
       1,     2,     0,     5,     3,     3,     1,     2,     2,     1,
       2,     1,     4,     3,     3,     6,     3,     1,     1,     1,
       4,     4,     2,     2,     4,     2,     2,     1,     3,     3,
       1,     2,     1,     4,     3,     0,     1,     3,     3,     1,
       1,     0,     0,     2,     3,     1,     5,     3,     2,     2,
       2,     1,     4,     6,     1,     8,     5,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     533,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   594,   461,     0,   467,
     468,    17,   490,   582,    68,   469,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,   454,     0,     0,     0,     0,
     110,     0,     0,     0,   473,   475,   476,   470,   471,     0,
       0,   477,   472,     0,     0,   452,    18,    19,    20,    22,
      21,     0,   474,     0,     0,    67,    40,   586,   462,     0,
       0,     3,    29,    31,    34,   489,     0,   451,     0,     5,
      88,     6,     7,     8,     0,   271,     0,     0,     0,     0,
     269,   335,   344,   343,     0,   342,   549,   453,     0,   492,
     334,     0,   552,   270,     0,     0,   550,   551,   548,   577,
     581,     0,   324,   491,   454,     0,     0,    29,    88,   646,
     270,   645,     0,   643,   642,   337,     0,     0,   308,   309,
     310,   311,   333,   331,   330,   329,   328,   327,   326,   325,
     454,     0,   655,   453,     0,   291,   289,   276,   457,     0,
     655,   456,     0,   466,   589,   588,   458,     0,     0,   460,
     332,     0,     0,     0,   263,     0,    48,   265,     0,     0,
      54,    56,     0,     0,    58,     0,     0,     0,   671,   674,
       0,   655,     0,     0,    60,     0,    40,     0,     0,     0,
      24,    25,   174,     0,     0,   173,   112,   111,   179,    88,
       0,     0,     0,     0,     0,   652,    98,   108,   602,   606,
     631,     0,   479,     0,     0,     0,   629,     0,    13,     0,
      32,     0,   266,   102,   109,   365,   271,     0,   269,   270,
       0,     0,   463,     0,   464,     0,     0,     0,    80,     0,
       0,    36,   167,     0,    16,    87,     0,   107,    94,   106,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   594,    76,
     585,   585,   616,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     290,   288,     0,   553,   538,   585,     0,   544,   167,   585,
       0,   587,   578,   602,     0,     0,     0,   535,   530,   499,
       0,     0,     0,     0,     0,     0,    36,     0,   167,   259,
       0,   590,   538,   546,   459,     0,    40,   147,     0,    65,
       0,     0,   264,     0,     0,     0,     0,     0,    57,    75,
      59,   655,   668,   669,     0,     0,     0,   656,   670,     0,
     651,    61,     0,    74,    26,     0,    15,     0,     0,   175,
       0,    63,     0,     0,     0,    64,   647,     0,     0,     0,
       0,     0,   118,     0,   603,     0,     0,   610,     0,   499,
       0,     0,   478,   630,   490,     0,     0,   628,   495,   627,
      33,     4,    10,    11,    62,     0,     0,     0,   260,   321,
     557,    45,    39,    41,    42,    43,    44,     0,   336,   493,
     494,    30,     0,     0,     0,   501,   168,     0,   338,    90,
     114,   294,   296,   295,     0,     0,   292,   293,   297,   299,
     298,   313,   312,   315,   314,   316,   318,   319,   317,   307,
     306,   301,   302,   300,   303,   304,   305,   320,   584,     0,
       0,   620,     0,   499,   649,   555,   577,   100,   104,     0,
      96,     0,     0,   267,   273,   287,   286,   285,   284,   283,
     282,   281,   280,   279,   278,   277,     0,   540,   539,     0,
       0,     0,     0,     0,     0,   644,   528,   532,   498,   534,
       0,     0,   655,     0,   593,   592,     0,     0,   540,   539,
     261,   149,   151,   262,     0,    40,   131,    49,   265,     0,
       0,     0,     0,   143,   143,    55,     0,   661,     0,     0,
       0,     0,     0,   452,    34,   481,   451,   486,     0,   480,
      38,   485,    83,     0,    23,    27,     0,   172,   180,   340,
     177,     0,     0,   640,   641,     9,   665,     0,     0,     0,
     602,   599,     0,   614,     0,   345,   498,   605,   639,   638,
     637,     0,   633,     0,   634,   636,     0,     4,   182,   359,
     360,   368,   367,     0,     0,   554,   538,   545,   583,     0,
     654,   169,   450,   500,   166,     0,   537,     0,     0,   116,
     323,     0,   348,   349,     0,   346,   498,   615,     0,   167,
     118,     0,    92,   114,   594,   274,     0,     0,   167,   542,
     543,   556,   579,   580,     0,     0,     0,   506,   507,   508,
       0,     0,   515,   514,   526,   499,     0,   530,   591,   538,
     547,   465,     0,   153,     0,     0,    46,     0,     0,     0,
       0,   124,   125,   135,     0,    40,   133,    71,   143,     0,
     143,     0,     0,   672,   660,   659,     0,   657,   482,   483,
     497,     0,     0,     0,   622,     0,    73,     0,    28,   176,
     537,     0,   648,    66,     0,     0,   653,   117,   119,   182,
       0,     0,   600,     0,     0,   609,     0,   608,   632,     0,
      14,     0,   244,     0,     0,     0,   540,   539,   657,     0,
     170,    37,   156,     0,   501,   536,   678,   537,   113,     0,
       0,   322,   619,   618,   167,     0,     0,   182,     0,   116,
     466,   541,   167,     0,     0,   511,   512,   513,   516,   517,
     520,     0,   510,   498,   527,   529,   531,   541,     0,     0,
       0,     0,   150,    51,     0,   265,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     676,   505,     0,   499,   488,   487,   626,     0,   499,     0,
       0,     0,   178,   664,   667,     0,   244,   604,   602,   268,
     272,   613,   612,     0,     0,    12,     0,     0,   247,   248,
     249,   252,   251,   250,   242,     0,     0,     0,   103,   181,
     183,     0,   241,   245,     0,   244,   371,     0,     0,   373,
     366,   369,     0,   364,     0,     0,   167,   171,   662,   537,
     155,   677,     0,     0,   115,   182,     0,     0,   576,   182,
     244,   537,     0,   275,   167,     0,   570,   524,     0,   499,
     509,   525,     0,    40,     0,   146,   132,     0,   123,    69,
     136,     0,     0,   139,     0,   144,   145,    40,   138,   673,
     658,     0,     0,   484,   498,   496,     0,   347,   498,   621,
       0,    40,   662,     0,   120,    99,     0,     0,   607,   635,
       0,     0,   121,   211,   209,   452,    22,     0,   205,     0,
     210,   221,     0,   219,   224,     0,   223,     0,   222,     0,
      88,   246,   185,     0,   187,     0,   243,   362,     0,     0,
     541,   167,     0,     0,   354,   154,   678,     0,   158,   662,
     244,   617,   575,   244,   105,     0,   182,     0,   569,     0,
     518,   498,   519,    40,   152,    47,    52,     0,   134,   140,
      40,   142,     0,   504,   503,   625,   624,     0,     0,   354,
     666,   601,   611,     0,     0,   195,   199,     0,     0,   192,
     422,   421,   418,   420,   419,   438,   440,   439,   410,   400,
     416,   415,   378,   387,   388,   390,   389,   409,   393,   391,
     392,   394,   395,   396,   397,   398,   399,   401,   402,   403,
     404,   405,   406,   408,   407,   379,   380,   381,   383,   384,
     386,   424,   425,   434,   433,   432,   431,   430,   429,   417,
     435,   426,   427,   428,   411,   412,   413,   414,   436,   437,
     441,   443,   442,   444,   445,   423,   447,   446,   382,   448,
     449,   385,   377,   216,   374,     0,   193,   237,   238,   236,
     229,     0,   230,   194,   255,     0,     0,     0,     0,    88,
     363,   361,   372,   370,   167,     0,   573,   663,     0,     0,
       0,   159,     0,     0,    95,   101,   662,   244,   571,   523,
     522,   148,     0,    40,   129,    70,   141,   675,     0,     0,
       0,    84,     0,   258,   122,     0,     0,   213,   206,     0,
       0,     0,   218,   220,     0,     0,   225,   232,   233,   231,
       0,     0,   184,     0,     0,     0,     0,     0,   572,     0,
      40,     0,   162,     0,   161,    40,     0,    97,     0,    40,
     127,    53,     0,   502,   623,    40,    40,   196,    29,     0,
     197,   198,     0,     0,   212,   215,   375,   376,     0,   207,
     234,   235,   227,   228,   226,   256,   253,   188,   186,   257,
       0,   574,     0,   357,   501,     0,   163,     0,   160,     0,
      40,   521,     0,     0,     0,     0,     0,   244,   214,   217,
       0,   537,   190,   358,   500,     0,   339,     0,   165,    91,
       0,     0,   130,    82,   341,   203,     0,   243,   254,     0,
     537,     0,   355,   353,   164,    93,   128,    86,     0,     0,
     202,   662,     0,   356,     0,    85,    72,     0,   201,     0,
     662,     0,   200,   239,    40,   189,     0,     0,     0,   191,
       0,   240,     0,    40,     0,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    91,   597,   421,   137,   209,   210,    93,
      94,    95,    96,    97,    98,   250,   432,   433,   361,   185,
    1102,   367,   967,  1227,   696,   697,  1236,   266,   138,   434,
     617,   748,   435,   450,   633,   402,   630,   436,   425,   631,
     268,   226,   243,   104,   619,   740,   579,   707,   911,   778,
     671,  1151,  1105,   537,   677,   366,   545,   679,   887,   532,
     663,   666,   770,   733,   734,   444,   445,   214,   215,   220,
     722,   829,   929,  1077,  1201,  1220,  1115,  1160,  1161,  1162,
     917,   918,   919,  1116,  1122,  1169,   922,   923,   927,  1070,
    1071,  1072,  1245,   830,   831,   832,   833,  1075,   834,   105,
     179,   362,   363,   106,   107,   108,   109,   110,   616,   700,
     111,   112,   557,   113,   114,  1089,  1184,   115,   426,  1081,
     427,   723,   603,   843,   840,  1063,  1064,   116,   117,   118,
     173,   180,   253,   349,   119,   560,   561,   120,   792,   519,
     614,   793,   653,   758,   654,   868,   869,   655,   656,   517,
     339,   146,   147,   121,   736,   323,   324,   607,   122,   174,
     140,   124,   125,   126,   127,   128,   129,   130,   479,   131,
     176,   177,   405,   408,   409,   482,   483,   797,   798,   235,
     236,   591,   132,   397,   133,   202,   227,   261,   376,   686,
     944,   577,   203,   852
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -875
static const yytype_int16 yypact[] =
{
    -875,   113,  2941,  -875,  8779,  8779,   -48,  8779,  8779,  8779,
    -875,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,
    8779,  8779,  8779,  2125,  2125,  8779,  6445,   -43,   -41,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  8779,  -875,   -41,   -34,
     -20,   -10,   -41,  6567,   799,  6725,  -875,   991,  6883,   104,
    8779,   430,   119,   132,   162,    49,    -8,     6,   152,   158,
    -875,   799,   172,   177,  -875,  -875,  -875,  -875,  -875,   368,
     728,  -875,  -875,   799,  7041,  -875,  -875,  -875,  -875,  -875,
    -875,   799,  -875,     5,  8779,  -875,  -875,   183,   415,   561,
     561,  -875,   320,   210,   346,  -875,   194,  -875,    41,  -875,
     332,  -875,  -875,  -875,   584,  -875,   200,   202,   220,  9521,
    -875,   317,  -875,   345,   366,  -875,    44,   265,   298,  -875,
    -875,   685,    34,  2169,   102,   283,   103,   115,   293,    -4,
    -875,   226,  -875,   402,   383,   319,   354,  -875,   332, 10346,
    5636, 10346,  8779, 10346, 10346,  2927,   456,   799,  -875,  -875,
     464,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  1325,   357,  -875,   388,   417,   417,  -875,   396,  1325,
     357,   404,   409,   391,   120,  -875,   444,   102,  7199,  -875,
    -875,  8779,  2412,    43, 10346,  6251,  -875,  8779,  8779,   799,
    -875,  -875,  9562,   401,  -875,  9603,   991,   991,   405,  -875,
     305,    37,   562,   799,  -875,  9663,  -875,  9704,   799,    48,
    -875,    45,  -875,  1873,    52,  -875,  -875,  -875,   563,   332,
      56,  2125,  2125,  2125,   413,   422,  -875,  -875,  2281,  7357,
      40,   -11,  -875,  8937,  2125,   609,  -875,   799,  -875,   -35,
     210,   418, 10346,  -875,  -875,  -875,   420, 10346,   423,  1546,
    3099,  8779,    14,   419,   756,    14,   382,   352,  -875,   799,
     991,   426,  7515,   991,  -875,  -875,   284,  -875,  -875,  -875,
    -875,  -875,  -875,  8779,  8779,  8779,  7673,  8779,  8779,  8779,
    8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,
    8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  6445,  -875,
    8779,  8779,  8779,   601,   799,   799,   332,   584,  6409,  8779,
    8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,  8779,
    -875,  -875,   399,  -875,   123,  8779,  8779,  -875,  7515,  8779,
    8779,   183,   141,  2281,   429,  7831,  9745,  -875,   431,   581,
    1325,   437,   -18,   601,   438,   -17,  -875,   242,  7515,  -875,
     500,  -875,   143,  -875,  -875,  9805,  -875,  -875,  8779,  -875,
     516,  5619,   604,   441, 10239,   605,    47,    28,  -875,  -875,
    -875,   357,  -875,  -875,   991,   453,   613,  -875,  -875,  9984,
    -875,  -875,  3272,  -875,   193,   430,  -875,   799,  8779,   417,
     119,  -875,  9984,   457,   549,  -875,   417,    63,    80,   -13,
     460,   799,   506,   463,   417,    83,  2125,  9846,   478,   638,
     291,   799,  -875,  -875,   586,  2216,   -15,  -875,  -875,  -875,
     210,  -875,  -875,  -875,  -875,   485,   495,   124,    22,   599,
     112,  -875,  -875,  -875,  -875,  -875,  -875,  2288,  -875,  -875,
    -875,  -875,    55,  2125,   497,   654, 10346,   657,  -875,  -875,
     548, 10386,  2757,  2927,  8779, 10305,  3257,  3429,  3591,  3748,
    3915,  4078,  4078,  4078,  4078,  2334,  2334,  2334,  2334,  1246,
    1246,   433,   433,   433,   464,   464,   464,  -875, 10346,   503,
     511, 10047,   515,   665,   -55,   522,   141,  -875,  -875,   799,
    -875,  1541,  8779,  -875,  2927,  2927,  2927,  2927,  2927,  2927,
    2927,  2927,  2927,  2927,  2927,  2927,  8779,   -55,   529,   528,
    9089,   537,   532,  9130,    84,  -875,  1386,  -875,   799,  -875,
     420,    22,   357,    39,   227,  -875,   539,  8779,  -875,  -875,
    -875,  5461,   381, 10346,   -41,  -875,  -875,  -875,  8779,   351,
    9984,   799,  5777,   540,   552,  -875,    91,   484,   991,  9984,
    9984,   541,     2,   573,   -21,  -875,   577,  -875,   553,  -875,
    -875,  -875,   621,   799,  -875,  -875,  9171,  -875,  -875,  -875,
     713,  2125,   571,  -875,  -875,  -875,    89,   566,   936,   572,
    2281,  6129,   727,   417,  7989,  -875,  8147,  -875,  -875,  -875,
    -875,   569,  -875,  8779,  -875,  -875,  2595,  -875,  -875,  -875,
    -875,  -875,  -875,   730,   734,  -875,   232,  -875,  -875,   991,
    -875,   417,  -875,  8305,  -875,  9984,    11,   579,   936,   631,
    3090,  8779,  -875,  -875,  8779,  -875,  8779,  -875,   589,  7515,
     506,   588,  -875,   548,  6445,   417,  9233,   593,  7515,  -875,
    -875,   243,  -875,  -875,   751,   462,   462,  -875,  -875,  -875,
     607,    20,  -875,  -875,  -875,   757,   610,   431,  -875,   245,
    -875,  -875,  9274,   408,   -41,  6251,  -875,   606,  3445,   608,
    2125,   658,   417,  -875,   775,  -875,  -875,  -875,  -875,    23,
    -875,   234,   991,  -875,  -875,   779,   625,   634,  -875,  -875,
    9984,   675,   799,   799,  9984,   655,  -875,   663,  -875,  -875,
      11,  9984,   417,  -875,   799,   799,  -875,   819,  -875,  -875,
      85,   662,   417,  8463,  2125, 10346,  2125, 10143,  -875,  1599,
    -875,  2768,  1612,   166,   160,  8779,   -55,   666,  -875,  2125,
   10346,  -875,  -875,   664,   827,  -875,   991,    11,  -875,   936,
     668,  3090, 10346, 10184,  7515,   669,   671,  -875,   672,   631,
     391,   676,  7515,   677,  8779,  -875,  -875,  -875,  -875,  -875,
    1386,   706,  -875,  1386,  -875,  -875,  -875,  -875,   -41,   823,
     777,  6251,  -875,  -875,   682,  8779,   417,   351,   684,  9984,
    3603,   301,   691,  8779,    51,   256,  -875,   689,   667,   834,
    -875,   739,   695,   856,  -875,  -875,   743,   696,   859,   936,
     699,   704,  -875,  -875,   865,   936,  1831,  -875,  2281,  -875,
    2927,   417,   417,  8621,   708,  -875,   991,   936,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  1158,   724,  1096,  -875,  -875,
    -875,   383,  1271,  -875,    58,   987,  -875,   131,  8779,  -875,
    -875,  -875,  8779,  -875,  9315,   718,  7515,   417,   862,    99,
    -875,  -875,    93,   723,   819,  -875,  8779,   726,  -875,  -875,
    2239,    11,   731,  -875,  7515,   729,  -875,   782,   744,   898,
    -875,  -875,   884,  -875,   747,  -875,  -875,   745,  -875,  -875,
    -875,   748,   753,  -875,  9461,  -875,  -875,  -875,  -875,  -875,
    -875,   991,  9984,  -875,  9984,  -875,  9984,  -875,  9984,  -875,
     846,  -875,   862,   799,  -875,  -875,    86,  2125, 10346,  -875,
     909,    66,  -875,  -875,  -875,    64,   755,    68,  -875,  9893,
    -875,  -875,    73,  -875,  -875,   900,  -875,   759,  -875,   852,
     332,  -875,  -875,   991,  -875,   383,   987,   784,  9377,  9418,
     762,  7515,   765,   991,   830,  -875,   991,   863,   924,   862,
    6393, 10346,  -875,  6551,  -875,   773,  -875,   787,  -875,  1386,
    -875,  1386,  -875,  -875,  5461,  -875,  -875,  5935,  -875,  -875,
    -875,  5461,   788,  -875,   824,  -875,   836,   789,  3761,   830,
    -875,  -875,   417,  9984,   936,  -875,  -875,  1205,  1158,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,   296,  -875,   724,  -875,  -875,  -875,  -875,
    -875,    38,   289,  -875,   947,    76,   799,   852,   948,   332,
    -875,  -875,  -875,  -875,  7515,   796,  -875,  -875,   783,   795,
     263,   953,  9984,   803,  -875,  -875,   862,  6709,  -875,  -875,
     851,  5461,  6093,  -875,  -875,  -875,  5461,  -875,  9984,  9984,
     808,  -875,   809,  -875,  -875,   545,    36,  -875,  -875,  9984,
    9893,  9893,   928,  -875,   900,   900,   300,  -875,  -875,  -875,
    9984,   907,  -875,   816,    77,  9984,   799,   818,  -875,   280,
    -875,   916,   978,  9984,  -875,  -875,   825,  -875,  1386,  -875,
    -875,  -875,  3934,  -875,  -875,  -875,  -875,  -875,   902,   853,
    -875,  -875,   910,  1205,  -875,  -875,  -875,  -875,   848,  -875,
     970,  -875,  -875,  -875,  -875,  -875,   990,  -875,  -875,  -875,
     839,  -875,   933,  -875,  1001,  4092,   998,  9984,  -875,  4265,
    -875,  -875,  4438,   844,  4596,  4769,   799,   987,  -875,  -875,
    9984,    11,  -875,  -875,   285,   854,  -875,  9984,  -875,  -875,
    4942,   847,  -875,  -875,  -875,   867,   799,   358,  -875,   858,
      11,   945,  -875,  -875,  -875,  -875,  -875,     8,   936,   861,
    -875,   862,   864,  -875,   868,  -875,  -875,    78,  -875,   355,
     862,   936,  -875,  -875,  -875,  -875,   355,   957,  5115,  -875,
     866,  -875,   871,  -875,  5288,  -875
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -875,  -875,  -380,  -875,  -875,  -875,    -2,  -875,   650,   -12,
     635,  1007,  -875,  -217,  -875,  -117,  -875,     0,  -875,  -875,
    -875,  -875,  -875,  -875,  -207,  -875,  -875,  -137,    10,     3,
    -875,  -875,     4,  -875,  -875,  -875,  -875,     7,  -875,  -875,
     736,   732,   740,   923,   414,   288,   424,   316,  -172,  -875,
     282,  -875,  -875,  -875,  -875,  -875,  -875,  -415,   173,  -875,
    -875,  -875,  -875,  -690,  -875,  -321,  -875,  -875,   670,  -875,
    -669,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,    75,  -875,  -875,  -875,  -875,  -875,    -1,  -875,   238,
    -565,  -875,  -185,  -875,  -816,  -806,  -815,    -9,  -875,   -49,
     -24,  1031,  -500,  -293,  -875,  -875,  1776,   985,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,    92,  -875,   347,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -557,  -875,   774,   686,
    -267,  -875,  -875,   325,   389,  1035,  -875,  -875,  -875,  -393,
    -723,  -875,  -875,   435,  -738,  -875,  -875,  -875,  -875,   434,
    -875,  -875,  -875,  -563,   237,  -152,  -146,  -104,  -875,  -875,
      46,  -875,  -875,  -875,  -875,    -3,  -110,  -875,  -187,  -875,
    -875,  -875,  -325,  -875,  -875,  -875,  -875,  -875,  -875,   327,
     554,  -875,  -875,   879,  -875,  -250,   -78,  -133,  -226,  -875,
    -874,  -661,  -164,   130
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -656
static const yytype_int16 yytable[] =
{
      92,   334,    99,   244,   182,   101,   102,   511,   514,   103,
     801,   850,   100,   447,   186,   493,   587,   931,   190,   935,
     327,   332,   867,   175,   351,   871,   269,   526,   979,   936,
     352,   477,   372,   373,   442,   246,   377,   346,   669,   211,
     806,   596,   193,   803,  1163,   201,  1124,   853,   123,   263,
    -650,   358,    10,   735,   543,   541,   385,   329,   239,   225,
     390,   240,   230,   609,   394,   219,   933,  1125,   378,   165,
     166,   571,  -208,   353,   984,  1093,   988,   885,   860,   225,
     691,  1065,   393,   325,  1131,  1131,   984,   230,   571,   382,
     627,   581,   581,   581,   581,  -561,   377,   704,   761,   682,
     325,   410,   225,   322,   322,  -558,   322,   260,   322,   259,
    1234,  -655,   341,     3,   480,   782,   783,   784,   142,  -655,
     344,   931,   218,   178,   947,   181,   412,   233,   234,   681,
     249,   306,   187,   422,   423,   387,  -455,   735,   509,   232,
      10,   260,   512,   604,   219,   338,   188,    46,  -655,   430,
     524,   245,   233,   234,   574,   595,   189,   762,   221,   835,
     350,   411,   556,   325,  -559,   330,   948,   -83,   732,   489,
     600,   955,   222,  -565,   735,   556,  -560,   937,  -157,   705,
      92,  -595,   357,    92,  -562,   360,   950,   365,   449,   259,
     953,   326,   212,   486,   371,   371,   384,   544,   371,   260,
    -567,   380,   329,  -561,  -596,  1126,  1164,   342,   326,   264,
     546,   359,   486,  -558,   542,   345,   386,   721,   610,   886,
     391,  1099,  1146,  1100,   395,   420,   934,   244,   123,   269,
     572,   123,  -208,   486,   985,   986,   989,   486,   378,   531,
     486,  1066,   980,   835,  1132,  1178,  1242,   573,    92,   216,
     582,   644,   807,   981,   683,   710,   945,   441,   371,   389,
     100,   201,   764,   781,   225,   785,  -500,   396,   396,   399,
     601,   326,  -559,   206,   404,   877,   605,   245,  -568,   217,
     416,  -565,   606,   563,  -560,   602,   735,  1097,  -598,  -595,
     213,   520,  -562,  -563,  1141,   175,   123,   835,   735,    33,
     485,   484,   225,   225,  -564,   225,  -597,   841,   745,  1119,
     330,  1182,  -596,   836,  1127,    33,  1221,   753,   223,   508,
     507,   685,  1120,   556,   224,  1172,   837,   783,   784,   842,
     196,  1128,   556,   556,  1129,   838,  1142,   259,   228,  1121,
     485,   522,  1173,   229,   525,  1174,   258,   529,   528,   783,
     784,   628,   251,  1183,   259,    31,   197,  1239,  1222,    92,
     262,   536,    31,   265,   588,   589,  1246,   750,   270,   605,
     271,   658,   371,   211,   637,   606,    31,   659,  -350,   404,
      92,  1216,   670,   377,   687,   565,   342,   835,   272,   628,
     835,  1217,   100,   882,   783,   784,  -598,   331,   556,   576,
     895,  -563,   931,   375,   786,   899,   300,   123,   590,   592,
    1191,   632,  -564,    87,  -597,   254,   256,   257,   668,   660,
     809,   346,    31,   857,    33,   230,   888,   301,   123,   198,
     417,   865,    76,    77,   302,    78,    79,    80,   303,    76,
      77,   230,    78,    79,    80,   728,   231,   664,   665,   328,
     448,   199,   583,    76,    77,   230,    78,    79,    80,  -566,
     417,  1205,   160,  -351,   818,   819,   820,   821,   822,   823,
      31,   200,    33,   556,   768,   769,   962,   556,   295,   296,
     297,    46,   298,   906,   556,   333,  -655,   225,   230,   611,
     233,   234,   136,   252,   486,    73,   337,    75,   237,    76,
      77,    31,    78,    79,    80,   232,   233,   234,   260,   196,
     667,  1219,  -655,   298,   652,  -655,   657,   161,   787,   260,
     233,   234,    87,  1243,  1244,   942,  1230,   440,   343,    92,
    1232,   755,   756,    31,   835,   197,  -454,   635,   322,   674,
      92,   100,   676,   957,  -453,   371,   371,    76,    77,   347,
      78,    79,    80,   233,   234,    31,   439,   348,   780,  1170,
    1171,   698,   556,  1166,  1167,   350,   910,   374,   506,   369,
      87,    31,   851,    33,   208,   379,   392,   123,    76,    77,
     400,    78,    79,    80,   401,   672,   424,   428,   123,   518,
     429,   438,   -35,   845,    92,   448,    99,   516,   534,   101,
     102,   727,   726,   103,   521,   523,   100,   371,   198,   538,
      76,    77,   358,    78,    79,    80,    31,   702,   540,   547,
    1085,   548,   570,   569,   728,   578,   404,   712,   575,   580,
     199,   175,    76,    77,   230,    78,    79,    80,   735,   255,
     771,   684,   123,   757,   757,   585,   586,   593,    76,    77,
     200,    78,    79,    80,   598,    31,   599,   735,   162,   162,
    -352,   170,   613,    92,   612,   772,    92,   618,   932,   527,
     615,    87,    31,   626,    33,   556,   622,   556,   100,   556,
     371,   556,   230,  1078,   623,   625,   136,   417,   629,    73,
     794,   795,   196,    76,    77,   638,    78,    79,    80,   233,
     234,   639,   576,   804,   641,   642,   661,   690,   678,   164,
     164,   123,   172,   692,   123,  1157,   776,   693,   197,    92,
     680,    99,   694,   695,   101,   102,   701,   972,   103,   706,
     267,   100,    76,    77,   371,    78,    79,    80,    31,   703,
     713,   709,   718,   724,   872,   737,   418,   233,   234,    76,
      77,   739,    78,    79,    80,   744,   964,   747,   652,   752,
     811,   652,   812,  1137,   754,   763,   556,   123,   559,    92,
     971,   875,    87,   760,   773,   847,   775,   765,    92,  1087,
     777,   559,   851,    46,   978,   413,   371,   788,   779,   419,
     100,   198,   789,  1076,    53,    54,   162,   163,   163,    31,
     171,   790,    60,   304,   162,    31,   413,    33,   419,   413,
     419,   419,   412,   199,   201,    76,    77,   123,    78,    79,
      80,   799,   800,   672,   890,   926,   123,   805,   808,   230,
     371,   848,   846,   200,   417,   849,   858,   855,   861,   305,
     859,   930,   864,   870,   866,   874,  1101,   164,   162,   873,
     876,   879,   889,  1106,   404,   164,   162,   162,   162,   883,
     891,   892,   893,   162,   894,   896,   897,   898,   901,   162,
      31,   902,   237,   903,   921,   556,    76,    77,   909,    78,
      79,    80,    76,    77,   941,    78,    79,    80,   943,   371,
     949,   556,   556,   952,   233,   234,   958,   238,  1159,   164,
     956,   576,   556,   725,   959,    87,   961,   164,   164,   164,
     963,   960,   966,   556,   164,   965,   968,  1062,   556,   977,
     164,   969,   983,  1069,   987,  1074,   556,  1073,  1084,   559,
    1080,   201,  1086,   170,  1088,   163,  1091,  1092,   559,   559,
    1096,   371,  1136,   163,   371,  1079,  1108,    76,    77,  1139,
      78,    79,    80,   982,  1098,  1107,  1110,   652,  1109,   652,
    1130,  1135,    92,  1138,  1140,    92,  1143,  1104,   162,    92,
     556,    31,  1145,  1148,   100,   162,    92,  1155,  1156,  1168,
    1176,   100,  1177,   556,   172,  1181,  1152,   163,   100,  1186,
     556,  1187,  -204,  1196,  1190,   163,   163,   163,  1133,  1125,
    1197,  1199,   163,  1200,   559,  1202,  1203,    31,   163,  1204,
     123,  1207,  1212,   123,   554,  1226,   196,   123,  1233,   164,
    1235,  1223,  1228,  1185,   123,  1231,   164,   554,  1189,  1238,
    1250,  1240,  1192,  1252,  1241,   564,   487,   862,  1194,  1195,
    1253,   162,   197,   490,   307,   488,  1067,   749,    76,    77,
    1068,    78,    79,    80,   746,   854,  1237,   970,  1180,   878,
     567,  1249,    31,  1118,  1123,   928,   925,   183,  1134,   248,
     839,  1112,   171,  1210,   225,   863,  1090,   136,   162,   559,
      73,   759,    75,   559,    76,    77,   946,    78,    79,    80,
     559,   766,   164,   818,   819,   820,   821,   822,   823,    92,
      92,   398,  1150,     0,    92,     0,     0,   163,     0,     0,
       0,   100,     0,  1158,   163,   198,   100,     0,  1062,  1062,
       0,     0,  1069,  1069,     0,     0,   162,  1248,     0,   164,
       0,     0,     0,     0,   225,     0,  1254,   199,     0,    76,
      77,     0,    78,    79,    80,     0,   652,   123,   123,     0,
      92,     0,   123,   558,     0,     0,     0,   200,     0,     0,
       0,     0,   100,     0,     0,     0,   558,    31,   559,     0,
       0,     0,     0,     0,   162,   554,     0,   164,     0,     0,
     163,     0,     0,    92,   554,   554,     0,    92,     0,     0,
      92,     0,    92,    92,  1215,   100,     0,     0,   123,   100,
       0,     0,   100,     0,   100,   100,   162,     0,    92,     0,
       0,   924,     0,   170,  1229,   162,   162,   163,     0,     0,
     100,     0,     0,     0,     0,   164,     0,     0,     0,    31,
       0,   123,     0,     0,     0,   123,     0,     0,   123,     0,
     123,   123,     0,     0,    76,    77,    92,    78,    79,    80,
     554,     0,    92,   170,     0,     0,   123,   164,   100,     0,
       0,     0,   925,     0,   100,   163,   164,   164,     0,   170,
     913,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,   559,   914,   559,    35,   559,     0,   559,   292,   293,
     294,   295,   296,   297,   123,   298,   196,     0,     0,   136,
     123,     0,    73,     0,   915,   162,    76,    77,     0,    78,
     916,    80,     0,   163,   558,     0,     0,     0,     0,     0,
     172,     0,   197,   558,   558,   554,     0,     0,     0,   554,
      64,    65,    66,    67,    68,     0,   554,     0,     0,     0,
       0,   552,    31,     0,     0,   163,     0,    71,    72,   162,
       0,   162,   708,     0,   163,   163,   164,     0,     0,     0,
       0,    82,     0,     0,   162,     0,     0,     0,     0,  -243,
       0,     0,   559,     0,   170,     0,  1117,   818,   819,   820,
     821,   822,   823,     0,     0,     0,   555,     0,    26,   558,
       0,     0,   738,     0,     0,   198,    31,     0,    33,   555,
     164,     0,   164,     0,     0,     0,     0,     0,   171,     0,
       0,     0,   162,     0,   554,   164,     0,   199,     0,    76,
      77,     0,    78,    79,    80,     0,     0,   568,   645,   646,
       0,     0,     0,     0,   170,     0,   160,   200,     0,     0,
     170,     0,     0,   162,   163,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,   647,   648,    31,     0,     0,
     170,     0,     0,   164,   558,   649,   136,     0,   558,    73,
       0,    75,     0,    76,    77,   558,    78,    79,    80,     0,
       0,   559,     0,     0,     0,     0,     0,     0,   163,     0,
     163,   340,     0,     0,   164,     0,    87,   559,   559,     0,
       0,     0,     0,   163,     0,     0,     0,     0,   559,     0,
     650,     0,     0,   708,     0,     0,     0,     0,     0,   559,
       0,     0,   651,     0,   559,     0,     0,   554,     0,   554,
       0,   554,   559,   554,    76,    77,     0,    78,    79,    80,
       0,     0,   162,     0,     0,     0,     0,   555,     0,     0,
       0,   163,  1198,   558,     0,     0,   555,   555,     0,   335,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,     0,   900,     0,   673,   559,     0,     0,   904,
       0,     0,   163,     0,   688,   689,     0,     0,     0,   559,
       0,   912,     0,   164,     0,     0,   559,     0,     0,   920,
       0,     0,     0,     0,   634,   320,   321,     0,   273,   274,
     275,     0,    31,     0,    33,     0,     0,     0,   554,   170,
       0,     0,   555,   170,   276,     0,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,     0,
     731,     0,   160,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   558,   322,   558,     0,
     558,     0,   558,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   136,     0,     0,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,   555,     0,     0,
       0,   555,     0,     0,     0,     0,     0,   161,   555,     0,
       0,   816,    87,   430,     0,     0,   817,     0,   818,   819,
     820,   821,   822,   823,   824,   791,     0,   554,     0,   796,
       0,     0,     0,     0,     0,     0,   802,     0,     0,     0,
       0,     0,     0,   554,   554,     0,     0,     0,     0,     0,
     170,     0,     0,     0,   554,     0,     0,   558,  1114,     0,
     825,   826,   920,   827,     0,   554,     0,     0,     0,     0,
     554,     0,   814,     0,     0,     0,     0,     0,   554,     0,
     139,   141,   828,   143,   144,   145,   555,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   880,     0,     0,     0,     0,   192,
       0,   195,   554,     0,   205,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,   554,     0,     0,     0,     0,
       0,     0,   554,     0,     0,     0,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,     0,   170,     0,     0,   558,     0,     0,     0,
       0,     0,    10,     0,     0,     0,   170,     0,     0,     0,
       0,     0,   558,   558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   558,     0,     0,     0,     0,     0,   555,
       0,   555,     0,   555,   558,   555,     0,     0,     0,   558,
       0,     0,     0,     0,     0,     0,     0,   558,   336,     0,
       0,     0,     0,     0,     0,     0,     0,   973,     0,   974,
     816,   975,     0,   976,     0,   817,     0,   818,   819,   820,
     821,   822,   823,   824,    31,     0,    33,     0,     0,     0,
       0,     0,     0,     0,   355,     0,     0,   355,     0,     0,
       0,   558,     0,   184,   364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   558,     0,     0,     0,     0,   825,
     826,   558,   827,     0,   160,     0,     0,     0,     0,     0,
     555,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   905,   912,     0,     0,   407,     0,     0,     0,   415,
       0,     0,     0,     0,   136,  1247,     0,    73,  1113,    75,
       0,    76,    77,     0,    78,    79,    80,   437,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,   161,
       0,     0,   388,     0,    87,     0,     0,     0,     0,   451,
     452,   453,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,     0,     0,   478,   478,   481,     0,
       0,     0,     0,     0,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,     0,     0,     0,   555,
       0,   478,   510,     0,   446,   478,   513,     0,     0,     0,
       0,   494,     0,     0,     0,   555,   555,     0,     0,     0,
       0,     0,     0,     0,   446,     0,   555,  1144,     0,     0,
       0,     0,     0,     0,   533,     0,     0,   555,     0,     0,
       0,     0,   555,  1153,  1154,     0,     0,     0,     0,     0,
     555,     0,     0,     0,  1165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   566,  1175,     0,     0,     0,     0,
    1179,     0,     0,     0,     0,     0,     0,     0,  1188,     0,
       0,     0,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   555,     0,    31,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,   555,     0,     0,
       0,     0,     0,     0,   555,     0,     0,     0,     0,     0,
       0,     0,  1208,     0,     0,   273,   274,   275,   320,   321,
     620,     0,     0,     0,     0,  1218,   160,     0,     0,     0,
       0,   276,  1224,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298,   136,     0,   242,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,     0,
      10,     0,   636,     0,     0,     0,     0,     0,     0,     0,
     322,   161,     0,     0,     0,     0,    87,   273,   274,   275,
       0,     0,     0,   662,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   276,   184,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,   816,     0,
       0,     0,     0,   817,     0,   818,   819,   820,   821,   822,
     823,   824,    31,     0,    33,     0,     0,     0,     0,     0,
     715,     0,   717,     0,     0,     0,     0,     0,     0,   719,
    -656,  -656,  -656,  -656,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,     0,     0,   594,   825,   826,   730,
     827,     0,   160,     0,     0,     0,     0,   741,     0,     0,
     742,     0,   743,     0,   403,   446,     0,     0,     0,   954,
       0,     0,     0,     0,   446,     4,     5,     6,     7,     8,
       0,     0,   136,     0,     9,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,     0,   356,     0,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,    87,     0,    11,    12,     0,     0,   608,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,   810,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,   844,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
     446,     0,     0,    55,     0,    56,    57,    58,   446,     0,
     810,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,   184,     0,   136,    71,    72,    73,    74,    75,   884,
      76,    77,     0,    78,    79,    80,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,     0,
      85,    86,     0,    87,    88,     0,    89,    90,     0,   908,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,   938,     0,     0,     0,   939,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   951,     0,     0,     0,    10,    11,    12,     0,
     446,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    50,    51,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,   446,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,    84,     0,    85,    86,   720,    87,    88,   275,    89,
      90,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,   276,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,     0,     0,    10,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
     446,     0,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    50,    51,    52,     0,     0,     0,    53,    54,    55,
       0,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,     0,    76,    77,     0,    78,
      79,    80,    81,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,    84,     0,    85,    86,   815,    87,
      88,     0,    89,    90,     4,     5,     6,     7,     8,     0,
       0,     0,   276,     9,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,     0,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    50,    51,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,    85,
      86,     9,    87,    88,     0,    89,    90,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     0,   298,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,     0,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     136,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,    84,     0,    85,    86,   431,
      87,    88,     0,    89,    90,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,     0,     0,     0,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,    53,    54,    55,     0,    56,    57,    58,     0,    60,
      61,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   136,    71,    72,    73,    74,    75,     0,
      76,    77,     0,    78,    79,    80,    81,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,     0,
      85,    86,   562,    87,    88,     0,    89,    90,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,   774,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,    85,    86,     9,    87,    88,     0,    89,
      90,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,     0,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,   881,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,    53,    54,    55,     0,    56,    57,    58,     0,
      60,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   136,    71,    72,    73,    74,    75,
       0,    76,    77,     0,    78,    79,    80,    81,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,    85,    86,     9,    87,    88,     0,    89,    90,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,     0,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     0,     0,     0,     0,     0,    84,     0,    85,
      86,  1111,    87,    88,     0,    89,    90,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,    29,    30,    31,    32,    33,     0,    34,
       0,     0,     0,    35,    36,    37,    38,     0,    39,     0,
      40,  1193,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,     0,    48,    49,     0,    50,     0,    52,
       0,     0,     0,    53,    54,    55,     0,    56,    57,    58,
       0,    60,    61,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,     0,   136,    71,    72,    73,    74,
      75,     0,    76,    77,     0,    78,    79,    80,    81,     0,
      82,     0,     0,     0,    83,     4,     5,     6,     7,     8,
      84,     0,    85,    86,     9,    87,    88,     0,    89,    90,
    -656,  -656,  -656,  -656,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,     0,     0,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,    53,    54,    55,     0,    56,    57,    58,     0,    60,
      61,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   136,    71,    72,    73,    74,    75,     0,
      76,    77,     0,    78,    79,    80,    81,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,     0,
      85,    86,  1206,    87,    88,     0,    89,    90,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,    84,     0,    85,    86,  1209,    87,    88,     0,    89,
      90,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,  1211,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,     0,    48,    49,
       0,    50,     0,    52,     0,     0,     0,    53,    54,    55,
       0,    56,    57,    58,     0,    60,    61,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,   136,
      71,    72,    73,    74,    75,     0,    76,    77,     0,    78,
      79,    80,    81,     0,    82,     0,     0,     0,    83,     4,
       5,     6,     7,     8,    84,     0,    85,    86,     9,    87,
      88,     0,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,     0,    48,    49,     0,    50,
       0,    52,     0,     0,     0,    53,    54,    55,     0,    56,
      57,    58,     0,    60,    61,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,   136,    71,    72,
      73,    74,    75,     0,    76,    77,     0,    78,    79,    80,
      81,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,    84,     0,    85,    86,  1213,    87,    88,     0,
      89,    90,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,     0,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     136,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,    84,     0,    85,    86,  1214,
      87,    88,     0,    89,    90,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,    53,    54,    55,     0,    56,    57,    58,     0,    60,
      61,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   136,    71,    72,    73,    74,    75,     0,
      76,    77,     0,    78,    79,    80,    81,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,     0,
      85,    86,  1225,    87,    88,     0,    89,    90,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,    84,     0,    85,    86,  1251,    87,    88,     0,    89,
      90,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,     0,    48,    49,
       0,    50,     0,    52,     0,     0,     0,    53,    54,    55,
       0,    56,    57,    58,     0,    60,    61,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,   136,
      71,    72,    73,    74,    75,     0,    76,    77,     0,    78,
      79,    80,    81,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,    84,     0,    85,    86,  1255,    87,
      88,     0,    89,    90,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,     0,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,    85,
      86,     9,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,   535,     0,     0,     0,   335,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,   320,   321,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,   322,     0,     0,
     136,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,    85,    86,     9,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,   675,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   136,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,    85,    86,     9,    87,    88,
       0,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,  1103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,    85,    86,     9,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,  1149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
      31,     0,    33,     0,    55,     0,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   136,    71,    72,    73,    74,    75,
     160,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,   711,    83,     4,     5,     6,     7,     8,    84,
       0,    85,    86,     9,    87,    88,     0,    89,    90,     0,
     136,     0,     0,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,   161,     0,     0,     0,    13,
      87,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,    85,
      86,     9,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
     491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,   816,     0,     0,     0,     0,   817,     0,   818,
     819,   820,   821,   822,   823,   824,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,    33,     0,
     134,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   135,    63,    64,    65,    66,    67,    68,     0,
       0,   825,   826,     0,   827,    69,     0,     0,     0,     0,
     136,    71,    72,    73,   492,    75,   168,    76,    77,     0,
      78,    79,    80,  1094,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,     0,     9,
      87,    88,     0,    89,    90,     0,   136,     0,     0,    73,
       0,    75,    10,    76,    77,     0,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,   169,     0,     0,     0,    13,    87,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
     816,     0,     0,     0,     0,   817,     0,   818,   819,   820,
     821,   822,   823,   824,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     135,    63,    64,    65,    66,    67,    68,     0,     0,   825,
     826,     0,   827,    69,     0,     0,     0,     0,   136,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,  1095,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,   191,     0,     9,    87,    88,
       0,    89,    90,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,   816,     0,
       0,     0,     0,   817,     0,   818,   819,   820,   821,   822,
     823,   824,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   135,    63,
      64,    65,    66,    67,    68,     0,     0,   825,   826,     0,
     827,    69,     0,     0,     0,     0,   136,    71,    72,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,  1147,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,   194,     0,     9,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   135,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   136,    71,    72,    73,     0,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,   204,     0,     9,    87,    88,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   135,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
       0,     9,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   135,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     136,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,   354,     0,     0,     9,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   406,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     135,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   136,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,     0,     9,    87,    88,
       0,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   135,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,     0,     9,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,   454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   135,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   136,    71,    72,    73,     0,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,     0,     9,    87,    88,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   135,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
       0,     9,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     714,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   135,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     136,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,     0,     9,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     135,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   136,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,     0,     9,    87,    88,
       0,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   135,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   136,    71,    72,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,     0,     9,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   135,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   136,    71,    72,    73,   492,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,     0,     9,    87,    88,     0,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   907,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   135,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   136,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
       0,     9,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   135,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     136,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,     0,     9,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,   414,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     135,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   136,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,   273,   274,
     275,     0,     0,    84,     0,     0,     0,     0,    87,    88,
       0,    89,    90,     0,   276,     0,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,   273,
     274,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   276,     0,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     0,   298,
     273,   274,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,   640,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,   273,   274,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
     643,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,   699,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,   274,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   276,   751,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,   273,   274,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   276,   767,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,     0,     0,
     273,   274,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   940,   276,   885,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,   274,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,  1082,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,   273,   274,   275,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   276,  1083,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,   298,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,   886,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,   299,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,   273,   274,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
     368,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,   370,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,   381,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,   273,   274,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,   383,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298,   990,   991,   992,   993,
     994,     0,   995,   996,   997,   998,     0,     0,     0,     0,
       0,     0,   515,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   999,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,     0,     0,    31,     0,     0,     0,   584,     0,
       0,     0,   530,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,     0,     0,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,     0,     0,     0,   549,   550,     0,     0,
       0,     0,     0,     0,  1055,  1056,  1057,     0,  1058,     0,
       0,    76,    77,     0,    78,    79,    80,  1059,     0,  1060,
       0,     0,  1061,    29,    30,    31,   273,   274,   275,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,   276,     0,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   551,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
     552,     0,     0,     0,     0,   136,    71,    72,    73,     0,
     553,     0,    76,    77,     0,    78,    79,    80,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,   274,   275,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   276,   624,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,   273,   274,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,   274,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   276,   813,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   856,     0,     0,     0,
       0,     0,     0,     0,   273,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   539,
     276,   621,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,   273,   274,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298,   274,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298
};

static const yytype_int16 yycheck[] =
{
       2,   138,     2,    81,    28,     2,     2,   328,   333,     2,
     700,   734,     2,   263,    38,   308,   409,   832,    42,   835,
     124,   131,   760,    26,   176,   763,   104,   348,   902,   835,
     176,   298,   196,   197,   260,    84,   200,   170,   538,    51,
     709,   421,    44,   704,     8,    47,     8,   737,     2,     8,
      13,     8,    41,   616,    26,     8,     8,    61,    70,    61,
       8,    73,    73,     8,     8,    55,     8,    29,   201,    23,
      24,     8,     8,   177,     8,   949,     8,    26,   747,    81,
      78,     8,   219,    61,     8,     8,     8,    73,     8,   206,
     483,     8,     8,     8,     8,    61,   260,     8,    78,     8,
      61,    61,   104,   121,   121,    61,   121,   162,   121,   144,
     102,   166,   161,     0,   301,    92,    93,    94,   166,   140,
     169,   936,    73,   166,    31,   166,   137,   138,   139,   544,
      84,   121,   166,   168,   169,    90,   140,   700,   325,   137,
      41,   162,   329,   121,   134,   147,   166,    98,   169,   167,
     167,   146,   138,   139,   167,   170,   166,   137,   166,   722,
     121,   121,   379,    61,    61,   169,    73,   159,   157,   306,
      46,   861,   166,    61,   737,   392,    61,    46,   167,    90,
     182,    61,   182,   185,    61,   185,   855,   189,   266,   144,
     859,   169,    73,   303,   196,   197,   208,   169,   200,   162,
     166,   203,    61,   169,    61,   167,   170,   161,   169,   168,
     374,   168,   322,   169,   167,   169,   168,   597,   163,   168,
     168,   959,  1096,   961,   168,   237,   168,   305,   182,   307,
     167,   185,   168,   343,   168,   169,   168,   347,   371,   356,
     350,   168,   903,   806,   168,   168,   168,   167,   250,   117,
     167,   167,   167,   167,   163,   580,   157,   259,   260,   213,
     250,   263,   655,   678,   266,   680,   167,   221,   222,   223,
     146,   169,   169,   169,   228,   775,   428,   146,   166,   117,
     234,   169,   428,    90,   169,   161,   849,   956,    61,   169,
     171,   340,   169,    61,    31,   298,   250,   860,   861,    73,
     303,   303,   304,   305,    61,   307,    61,   147,   629,    13,
     169,    31,   169,   147,    25,    73,    31,   638,   166,   322,
     322,   547,    26,   540,   166,    25,   160,    93,    94,   169,
      25,    42,   549,   550,    45,   169,    73,   144,   166,    43,
     343,   343,    42,   166,   347,    45,    26,   350,   350,    93,
      94,   484,   169,    73,   144,    71,    51,  1231,    73,   361,
     166,   361,    71,    31,    73,    74,  1240,   634,   168,   521,
     168,   523,   374,   385,   507,   521,    71,   523,    61,   333,
     382,  1197,    31,   547,   548,   387,   340,   950,   168,   522,
     953,  1197,   382,    92,    93,    94,   169,   171,   615,   401,
     793,   169,  1217,    98,   170,   798,    61,   361,   410,   411,
    1148,   489,   169,   171,   169,    88,    89,    90,   535,   523,
     713,   554,    71,   744,    73,    73,   170,    61,   382,   124,
      78,   752,   148,   149,   169,   151,   152,   153,   140,   148,
     149,    73,   151,   152,   153,   609,    78,    66,    67,   166,
     166,   146,   406,   148,   149,    73,   151,   152,   153,   166,
      78,  1184,   111,    61,   106,   107,   108,   109,   110,   111,
      71,   166,    73,   690,    66,    67,   869,   694,    45,    46,
      47,    98,    49,   808,   701,   166,   140,   489,    73,   443,
     138,   139,   141,    78,   604,   144,    40,   146,   144,   148,
     149,    71,   151,   152,   153,   137,   138,   139,   162,    25,
     534,  1201,   166,    49,   516,   169,   518,   166,   682,   162,
     138,   139,   171,   168,   169,   846,   168,   175,   140,   531,
    1220,    69,    70,    71,  1097,    51,   140,   491,   121,   541,
     542,   531,   542,   864,   140,   547,   548,   148,   149,   140,
     151,   152,   153,   138,   139,    71,   174,   166,   675,  1124,
    1125,   563,   779,  1120,  1121,   121,   816,   162,   169,   168,
     171,    71,   736,    73,   144,    13,    13,   531,   148,   149,
     167,   151,   152,   153,   162,   539,   168,   167,   542,     8,
     167,   172,   166,   726,   596,   166,   596,   166,    82,   596,
     596,   604,   604,   596,   167,   167,   596,   609,   124,   168,
     148,   149,     8,   151,   152,   153,    71,   571,    13,   166,
     941,     8,    73,   166,   788,   119,   580,   581,   168,   166,
     146,   634,   148,   149,    73,   151,   152,   153,  1201,    78,
     664,   157,   596,   645,   646,   167,     8,    61,   148,   149,
     166,   151,   152,   153,   169,    71,   161,  1220,    23,    24,
      61,    26,     8,   665,   167,   665,   668,   119,   832,   169,
      13,   171,    71,     8,    73,   892,   173,   894,   668,   896,
     682,   898,    73,   933,   173,   170,   141,    78,   166,   144,
     692,   693,    25,   148,   149,   166,   151,   152,   153,   138,
     139,   173,   704,   705,   167,   173,   167,   166,   168,    23,
      24,   665,    26,   140,   668,   170,   670,   140,    51,   721,
     168,   721,   169,   102,   721,   721,    13,   891,   721,   163,
     146,   721,   148,   149,   736,   151,   152,   153,    71,   168,
      13,   169,   173,    13,   768,   166,   137,   138,   139,   148,
     149,   120,   151,   152,   153,   166,   873,   169,   760,   166,
     714,   763,   716,  1084,    13,     8,   983,   721,   379,   771,
     887,   771,   171,   166,   168,   729,   168,   167,   780,   943,
     122,   392,   946,    98,   901,   231,   788,     8,    13,   235,
     780,   124,   167,   930,   109,   110,   161,    23,    24,    71,
      26,   167,   117,   118,   169,    71,   252,    73,   254,   255,
     256,   257,   137,   146,   816,   148,   149,   771,   151,   152,
     153,   166,   159,   777,   157,   827,   780,     8,   166,    73,
     832,   167,   166,   166,    78,     8,   167,   169,   166,   154,
     169,   831,   166,   137,   167,    68,   963,   161,   213,    26,
     168,   167,   163,   970,   808,   169,   221,   222,   223,   168,
      26,   122,   167,   228,     8,   122,   170,     8,   169,   234,
      71,   167,   144,     8,   150,  1092,   148,   149,   170,   151,
     152,   153,   148,   149,   166,   151,   152,   153,    26,   891,
     167,  1108,  1109,   167,   138,   139,   167,   169,  1115,   213,
     169,   903,  1119,   169,   122,   171,     8,   221,   222,   223,
      26,   167,   167,  1130,   228,   168,   168,   919,  1135,    73,
     234,   168,    13,   925,   169,    73,  1143,   168,   166,   540,
     146,   933,   167,   298,   104,   161,    73,    13,   549,   550,
     167,   943,  1079,   169,   946,   935,   122,   148,   149,   166,
     151,   152,   153,   907,   167,   167,   167,   959,   122,   961,
      13,    13,   964,   167,   169,   967,    13,   967,   333,   971,
    1187,    71,   169,   122,   964,   340,   978,   169,   169,    51,
      73,   971,   166,  1200,   298,   167,  1103,   213,   978,    73,
    1207,    13,    90,   140,   169,   221,   222,   223,  1076,    29,
      90,   153,   228,    13,   615,   166,    73,    71,   234,     8,
     964,    13,   168,   967,   379,   168,    25,   971,    73,   333,
    1227,   167,   155,  1140,   978,   167,   340,   392,  1145,   168,
      73,   167,  1149,   167,   166,   385,   304,   749,  1155,  1156,
     169,   406,    51,   307,   121,   305,   146,   633,   148,   149,
     150,   151,   152,   153,   630,   739,  1228,   884,  1136,   777,
     390,  1246,    71,   988,  1065,   827,   166,    36,  1077,    84,
     723,   979,   298,  1190,  1076,   750,   946,   141,   443,   690,
     144,   646,   146,   694,   148,   149,   849,   151,   152,   153,
     701,   657,   406,   106,   107,   108,   109,   110,   111,  1101,
    1102,   222,  1102,    -1,  1106,    -1,    -1,   333,    -1,    -1,
      -1,  1101,    -1,  1115,   340,   124,  1106,    -1,  1120,  1121,
      -1,    -1,  1124,  1125,    -1,    -1,   491,  1244,    -1,   443,
      -1,    -1,    -1,    -1,  1136,    -1,  1253,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,  1148,  1101,  1102,    -1,
    1152,    -1,  1106,   379,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,  1152,    -1,    -1,    -1,   392,    71,   779,    -1,
      -1,    -1,    -1,    -1,   539,   540,    -1,   491,    -1,    -1,
     406,    -1,    -1,  1185,   549,   550,    -1,  1189,    -1,    -1,
    1192,    -1,  1194,  1195,  1196,  1185,    -1,    -1,  1152,  1189,
      -1,    -1,  1192,    -1,  1194,  1195,   571,    -1,  1210,    -1,
      -1,   115,    -1,   578,  1216,   580,   581,   443,    -1,    -1,
    1210,    -1,    -1,    -1,    -1,   539,    -1,    -1,    -1,    71,
      -1,  1185,    -1,    -1,    -1,  1189,    -1,    -1,  1192,    -1,
    1194,  1195,    -1,    -1,   148,   149,  1248,   151,   152,   153,
     615,    -1,  1254,   618,    -1,    -1,  1210,   571,  1248,    -1,
      -1,    -1,   166,    -1,  1254,   491,   580,   581,    -1,   634,
     112,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,   892,   124,   894,    79,   896,    -1,   898,    42,    43,
      44,    45,    46,    47,  1248,    49,    25,    -1,    -1,   141,
    1254,    -1,   144,    -1,   146,   670,   148,   149,    -1,   151,
     152,   153,    -1,   539,   540,    -1,    -1,    -1,    -1,    -1,
     634,    -1,    51,   549,   550,   690,    -1,    -1,    -1,   694,
     125,   126,   127,   128,   129,    -1,   701,    -1,    -1,    -1,
      -1,   136,    71,    -1,    -1,   571,    -1,   142,   143,   714,
      -1,   716,   578,    -1,   580,   581,   670,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   729,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   983,    -1,   739,    -1,   987,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   379,    -1,    63,   615,
      -1,    -1,   618,    -1,    -1,   124,    71,    -1,    73,   392,
     714,    -1,   716,    -1,    -1,    -1,    -1,    -1,   634,    -1,
      -1,    -1,   777,    -1,   779,   729,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   392,    42,    43,
      -1,    -1,    -1,    -1,   799,    -1,   111,   166,    -1,    -1,
     805,    -1,    -1,   808,   670,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   817,    -1,    -1,    69,    70,    71,    -1,    -1,
     825,    -1,    -1,   777,   690,    79,   141,    -1,   694,   144,
      -1,   146,    -1,   148,   149,   701,   151,   152,   153,    -1,
      -1,  1092,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,
     716,   166,    -1,    -1,   808,    -1,   171,  1108,  1109,    -1,
      -1,    -1,    -1,   729,    -1,    -1,    -1,    -1,  1119,    -1,
     124,    -1,    -1,   739,    -1,    -1,    -1,    -1,    -1,  1130,
      -1,    -1,   136,    -1,  1135,    -1,    -1,   892,    -1,   894,
      -1,   896,  1143,   898,   148,   149,    -1,   151,   152,   153,
      -1,    -1,   907,    -1,    -1,    -1,    -1,   540,    -1,    -1,
      -1,   777,  1163,   779,    -1,    -1,   549,   550,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,   799,    -1,   540,  1187,    -1,    -1,   805,
      -1,    -1,   808,    -1,   549,   550,    -1,    -1,    -1,  1200,
      -1,   817,    -1,   907,    -1,    -1,  1207,    -1,    -1,   825,
      -1,    -1,    -1,    -1,    63,    59,    60,    -1,     9,    10,
      11,    -1,    71,    -1,    73,    -1,    -1,    -1,   983,   984,
      -1,    -1,   615,   988,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
     615,    -1,   111,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   892,   121,   894,    -1,
     896,    -1,   898,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   907,   141,    -1,    -1,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   690,    -1,    -1,
      -1,   694,    -1,    -1,    -1,    -1,    -1,   166,   701,    -1,
      -1,    99,   171,   167,    -1,    -1,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,   690,    -1,  1092,    -1,   694,
      -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,
      -1,    -1,    -1,  1108,  1109,    -1,    -1,    -1,    -1,    -1,
    1115,    -1,    -1,    -1,  1119,    -1,    -1,   983,   984,    -1,
     148,   149,   988,   151,    -1,  1130,    -1,    -1,    -1,    -1,
    1135,    -1,   173,    -1,    -1,    -1,    -1,    -1,  1143,    -1,
       4,     5,   170,     7,     8,     9,   779,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,   779,    -1,    -1,    -1,    -1,    43,
      -1,    45,  1187,    -1,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1200,    -1,    -1,    -1,    -1,
      -1,    -1,  1207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,  1228,    -1,    -1,  1092,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,  1241,    -1,    -1,    -1,
      -1,    -1,  1108,  1109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1119,    -1,    -1,    -1,    -1,    -1,   892,
      -1,   894,    -1,   896,  1130,   898,    -1,    -1,    -1,  1135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   892,    -1,   894,
      99,   896,    -1,   898,    -1,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,   181,    -1,    -1,
      -1,  1187,    -1,   187,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1200,    -1,    -1,    -1,    -1,   148,
     149,  1207,   151,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     983,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,  1228,    -1,    -1,   229,    -1,    -1,    -1,   233,
      -1,    -1,    -1,    -1,   141,  1241,    -1,   144,   983,   146,
      -1,   148,   149,    -1,   151,   152,   153,   251,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,   166,
      -1,    -1,   169,    -1,   171,    -1,    -1,    -1,    -1,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,    -1,    -1,   300,   301,   302,    -1,
      -1,    -1,    -1,    -1,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    -1,    -1,    -1,  1092,
      -1,   325,   326,    -1,   328,   329,   330,    -1,    -1,    -1,
      -1,   335,    -1,    -1,    -1,  1108,  1109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,  1119,  1092,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,    -1,  1130,    -1,    -1,
      -1,    -1,  1135,  1108,  1109,    -1,    -1,    -1,    -1,    -1,
    1143,    -1,    -1,    -1,  1119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,  1130,    -1,    -1,    -1,    -1,
    1135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,  1187,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1200,    -1,    -1,
      -1,    -1,    -1,    -1,  1207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1187,    -1,    -1,     9,    10,    11,    59,    60,
     454,    -1,    -1,    -1,    -1,  1200,   111,    -1,    -1,    -1,
      -1,    25,  1207,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,   141,    -1,   492,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      41,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   166,    -1,    -1,    -1,    -1,   171,     9,    10,    11,
      -1,    -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   538,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    99,    -1,
      -1,    -1,    -1,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
     584,    -1,   586,    -1,    -1,    -1,    -1,    -1,    -1,   593,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,   170,   148,   149,   613,
     151,    -1,   111,    -1,    -1,    -1,    -1,   621,    -1,    -1,
     624,    -1,   626,    -1,   123,   629,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   638,     3,     4,     5,     6,     7,
      -1,    -1,   141,    -1,    12,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,   171,    -1,    42,    43,    -1,    -1,   170,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,   713,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,   725,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
     744,    -1,    -1,   111,    -1,   113,   114,   115,   752,    -1,
     754,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,   775,    -1,   141,   142,   143,   144,   145,   146,   783,
     148,   149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,    -1,   171,   172,    -1,   174,   175,    -1,   813,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   838,    -1,    -1,    -1,   842,    -1,
      -1,    -1,   846,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   856,    -1,    -1,    -1,    41,    42,    43,    -1,
     864,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,   941,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,   166,    -1,   168,   169,   170,   171,   172,    11,   174,
     175,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
    1084,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,    -1,   151,
     152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,   166,    -1,   168,   169,   170,   171,
     172,    -1,   174,   175,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    25,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,   168,
     169,    12,   171,   172,    -1,   174,   175,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,   166,    -1,   168,   169,   170,
     171,   172,    -1,   174,   175,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,   113,   114,   115,    -1,   117,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,    -1,   151,   152,   153,   154,    -1,   156,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,   170,   171,   172,    -1,   174,   175,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,   168,   169,    12,   171,   172,    -1,   174,
     175,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    89,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,    -1,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,   154,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,   168,   169,    12,   171,   172,    -1,   174,   175,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,    -1,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,   168,
     169,   170,   171,   172,    -1,   174,   175,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,   105,
      -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,   115,
      -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,    -1,   151,   152,   153,   154,    -1,
     156,    -1,    -1,    -1,   160,     3,     4,     5,     6,     7,
     166,    -1,   168,   169,    12,   171,   172,    -1,   174,   175,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,   113,   114,   115,    -1,   117,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,    -1,   151,   152,   153,   154,    -1,   156,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,   170,   171,   172,    -1,   174,   175,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,   166,    -1,   168,   169,   170,   171,   172,    -1,   174,
     175,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,    -1,   151,
     152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,     3,
       4,     5,     6,     7,   166,    -1,   168,   169,    12,   171,
     172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,
     114,   115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,    -1,   151,   152,   153,
     154,    -1,   156,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   166,    -1,   168,   169,   170,   171,   172,    -1,
     174,   175,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,   166,    -1,   168,   169,   170,
     171,   172,    -1,   174,   175,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,   113,   114,   115,    -1,   117,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,    -1,   151,   152,   153,   154,    -1,   156,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
     168,   169,   170,   171,   172,    -1,   174,   175,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,   166,    -1,   168,   169,   170,   171,   172,    -1,   174,
     175,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,    -1,   151,
     152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,   166,    -1,   168,   169,   170,   171,
     172,    -1,   174,   175,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,    -1,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,   168,
     169,    12,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    59,    60,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,   121,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,   168,   169,    12,
     171,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,   168,   169,    12,   171,   172,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,   168,   169,    12,   171,   172,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      71,    -1,    73,    -1,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
     111,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   123,   160,     3,     4,     5,     6,     7,   166,
      -1,   168,   169,    12,   171,   172,    -1,   174,   175,    -1,
     141,    -1,    -1,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,   166,    -1,    -1,    -1,    48,
     171,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,   168,
     169,    12,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,    -1,   106,
     107,   108,   109,   110,   111,   112,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,   148,   149,    -1,   151,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,   111,   148,   149,    -1,
     151,   152,   153,   170,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,    -1,    12,
     171,   172,    -1,   174,   175,    -1,   141,    -1,    -1,   144,
      -1,   146,    41,   148,   149,    -1,   151,   152,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,   166,    -1,    -1,    -1,    48,   171,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,   148,
     149,    -1,   151,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,   170,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,   168,    -1,    12,   171,   172,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,   104,    -1,   106,   107,   108,   109,   110,
     111,   112,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,   148,   149,    -1,
     151,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,   170,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,   168,    -1,    12,   171,   172,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,   168,    -1,    12,   171,   172,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
      -1,    12,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,   167,    -1,    -1,    12,
     171,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,    -1,    12,   171,   172,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,    -1,    12,   171,   172,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,    -1,    12,   171,   172,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
      -1,    12,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,    -1,    12,
     171,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,    -1,    12,   171,   172,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,    -1,    12,   171,   172,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,    -1,    12,   171,   172,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
      -1,    12,   171,   172,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,    -1,    12,
     171,   172,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     9,    10,
      11,    -1,    -1,   166,    -1,    -1,    -1,    -1,   171,   172,
      -1,   174,   175,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   170,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     170,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   170,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   170,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   170,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   170,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   170,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   168,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   168,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     168,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   168,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   168,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   168,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    -1,    71,    -1,    -1,    -1,   122,    -1,
      -1,    -1,   167,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,   145,    -1,
      -1,   148,   149,    -1,   151,   152,   153,   154,    -1,   156,
      -1,    -1,   159,    69,    70,    71,     9,    10,    11,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
     146,    -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   122,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   122,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   177,   178,     0,     3,     4,     5,     6,     7,    12,
      41,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   105,   109,   110,   111,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   126,   127,   128,   129,   136,
     141,   142,   143,   144,   145,   146,   148,   149,   151,   152,
     153,   154,   156,   160,   166,   168,   169,   171,   172,   174,
     175,   179,   182,   185,   186,   187,   188,   189,   190,   193,
     204,   205,   208,   213,   219,   275,   279,   280,   281,   282,
     283,   286,   287,   289,   290,   293,   303,   304,   305,   310,
     313,   329,   334,   336,   337,   338,   339,   340,   341,   342,
     343,   345,   358,   360,   111,   123,   141,   182,   204,   282,
     336,   282,   166,   282,   282,   282,   327,   328,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     111,   166,   186,   304,   305,   336,   336,   282,   111,   166,
     186,   304,   305,   306,   335,   341,   346,   347,   166,   276,
     307,   166,   276,   277,   282,   195,   276,   166,   166,   166,
     276,   168,   282,   182,   168,   282,    25,    51,   124,   146,
     166,   182,   361,   368,   168,   282,   169,   282,   144,   183,
     184,   185,    73,   171,   243,   244,   117,   117,    73,   204,
     245,   166,   166,   166,   166,   182,   217,   362,   166,   166,
      73,    78,   137,   138,   139,   355,   356,   144,   169,   185,
     185,    95,   282,   218,   362,   146,   275,   282,   283,   336,
     191,   169,    78,   308,   355,    78,   355,   355,    26,   144,
     162,   363,   166,     8,   168,    31,   203,   146,   216,   362,
     168,   168,   168,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   168,
      61,    61,   169,   140,   118,   154,   204,   219,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      59,    60,   121,   331,   332,    61,   169,   333,   166,    61,
     169,   171,   342,   166,   203,    13,   282,    40,   182,   326,
     166,   275,   336,   140,   275,   336,   363,   140,   166,   309,
     121,   331,   332,   333,   167,   282,    26,   193,     8,   168,
     193,   194,   277,   278,   282,   182,   231,   197,   168,   168,
     168,   182,   368,   368,   162,    98,   364,   368,   363,    13,
     182,   168,   191,   168,   185,     8,   168,    90,   169,   336,
       8,   168,    13,   203,     8,   168,   336,   359,   359,   336,
     167,   162,   211,   123,   336,   348,    31,   282,   349,   350,
      61,   121,   137,   356,    72,   282,   336,    78,   137,   356,
     185,   181,   168,   169,   168,   214,   294,   296,   167,   167,
     167,   170,   192,   193,   205,   208,   213,   282,   172,   174,
     175,   182,   364,    31,   241,   242,   282,   361,   166,   362,
     209,   282,   282,   282,    26,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   306,   282,   344,
     344,   282,   351,   352,   182,   341,   342,   217,   218,   203,
     216,    31,   145,   279,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   169,   182,   341,   344,
     282,   241,   344,   282,   348,   167,   166,   325,     8,   315,
     275,   167,   182,   167,   167,   341,   241,   169,   182,   341,
     167,   191,   235,   282,    82,    26,   193,   229,   168,    90,
      13,     8,   167,    26,   169,   232,   368,   166,     8,    42,
      43,   124,   136,   146,   186,   187,   189,   288,   304,   310,
     311,   312,   170,    90,   184,   182,   282,   244,   311,   166,
      73,     8,   167,   167,   167,   168,   182,   367,   119,   222,
     166,     8,   167,   336,   122,   167,     8,   315,    73,    74,
     182,   357,   182,    61,   170,   170,   178,   180,   169,   161,
      46,   146,   161,   298,   121,   331,   332,   333,   170,     8,
     163,   336,   167,     8,   316,    13,   284,   206,   119,   220,
     282,    26,   173,   173,   122,   170,     8,   315,   363,   166,
     212,   215,   362,   210,    63,   336,   282,   363,   166,   173,
     170,   167,   173,   170,   167,    42,    43,    69,    70,    79,
     124,   136,   182,   318,   320,   323,   324,   182,   331,   332,
     333,   167,   282,   236,    66,    67,   237,   276,   191,   278,
      31,   226,   336,   311,   182,    26,   193,   230,   168,   233,
     168,   233,     8,   163,   157,   364,   365,   368,   311,   311,
     166,    78,   140,   140,   169,   102,   200,   201,   182,   170,
     285,    13,   336,   168,     8,    90,   163,   223,   304,   169,
     348,   123,   336,    13,    31,   282,    31,   282,   173,   282,
     170,   178,   246,   297,    13,   169,   182,   341,   368,    31,
     282,   311,   157,   239,   240,   329,   330,   166,   304,   120,
     221,   282,   282,   282,   166,   241,   222,   169,   207,   220,
     306,   170,   166,   241,    13,    69,    70,   182,   319,   319,
     166,    78,   137,     8,   315,   167,   325,   170,    66,    67,
     238,   276,   193,   168,    83,   168,   336,   122,   225,    13,
     191,   233,    92,    93,    94,   233,   170,   368,     8,   167,
     167,   311,   314,   317,   182,   182,   311,   353,   354,   166,
     159,   239,   311,   367,   182,     8,   246,   167,   166,   279,
     282,   336,   336,   122,   173,   170,    99,   104,   106,   107,
     108,   109,   110,   111,   112,   148,   149,   151,   170,   247,
     269,   270,   271,   272,   274,   329,   147,   160,   169,   293,
     300,   147,   169,   299,   282,   363,   166,   336,   167,     8,
     316,   368,   369,   239,   223,   169,   122,   241,   167,   169,
     246,   166,   221,   309,   166,   241,   167,   320,   321,   322,
     137,   320,   276,    26,    68,   193,   168,   278,   226,   167,
     311,    89,    92,   168,   282,    26,   168,   234,   170,   163,
     157,    26,   122,   167,     8,   315,   122,   170,     8,   315,
     304,   169,   167,     8,   304,   170,   348,    31,   282,   170,
     361,   224,   304,   112,   124,   146,   152,   256,   257,   258,
     304,   150,   262,   263,   115,   166,   182,   264,   265,   248,
     204,   272,   368,     8,   168,   270,   271,    46,   282,   282,
     170,   166,   241,    26,   366,   157,   330,    31,    73,   167,
     246,   282,   167,   246,   170,   239,   169,   241,   167,   122,
     167,     8,   315,    26,   191,   168,   167,   198,   168,   168,
     234,   191,   368,   311,   311,   311,   311,    73,   191,   366,
     367,   167,   336,    13,     8,   168,   169,   169,     8,   168,
       3,     4,     5,     6,     7,     9,    10,    11,    12,    49,
      62,    63,    64,    65,    66,    67,    68,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   123,   124,
     125,   126,   127,   128,   129,   141,   142,   143,   145,   154,
     156,   159,   182,   301,   302,     8,   168,   146,   150,   182,
     265,   266,   267,   168,    73,   273,   203,   249,   361,   204,
     146,   295,   170,   170,   166,   241,   167,   368,   104,   291,
     369,    73,    13,   366,   170,   170,   167,   246,   167,   320,
     320,   191,   196,    26,   193,   228,   191,   167,   122,   122,
     167,   170,   291,   311,   304,   252,   259,   310,   257,    13,
      26,    43,   260,   263,     8,    29,   167,    25,    42,    45,
      13,     8,   168,   362,   273,    13,   203,   241,   167,   166,
     169,    31,    73,    13,   311,   169,   366,   170,   122,    26,
     193,   227,   191,   311,   311,   169,   169,   170,   182,   189,
     253,   254,   255,     8,   170,   311,   302,   302,    51,   261,
     266,   266,    25,    42,    45,   311,    73,   166,   168,   311,
     362,   167,    31,    73,   292,   191,    73,    13,   311,   191,
     169,   320,   191,    87,   191,   191,   140,    90,   310,   153,
      13,   250,   166,    73,     8,   316,   170,    13,   311,   170,
     191,    85,   168,   170,   170,   182,   270,   271,   311,   239,
     251,    31,    73,   167,   311,   170,   168,   199,   155,   182,
     168,   167,   239,    73,   102,   200,   202,   224,   168,   366,
     167,   166,   168,   168,   169,   268,   366,   304,   191,   268,
      73,   170,   167,   169,   191,   170
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, _p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).line0   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).char0 = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).line1    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).char1  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).line0   = (Current).line1   =		\
	    YYRHSLOC (Rhs, 0).line1;				\
	  (Current).char0 = (Current).char1 =		\
	    YYRHSLOC (Rhs, 0).char1;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).line0, (Loc).char0,	\
	      (Loc).line1,  (Loc).char1)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, _p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (_p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, _p)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , _p);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, _p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, _p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (HPHP::HPHP_PARSER_NS::Parser *_p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (HPHP::HPHP_PARSER_NS::Parser *_p)
#else
int
yyparse (_p)
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.line0   = yylloc.line1   = 1;
  yylloc.char0 = yylloc.char1 = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	struct yyalloc *yyptr =
	  (struct yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        memset(yyptr, 0, YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE_RESET (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 863 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelInfo();
                                         _p->saveParseTree((yyval));;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 869 "../../../hphp/util/parser/hphp.y"
    { _p->addStatement((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 870 "../../../hphp/util/parser/hphp.y"
    { _p->onStatementListStart((yyval));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 873 "../../../hphp/util/parser/hphp.y"
    { _p->nns((yyvsp[(1) - (1)]).num() == T_DECLARE);
                                         (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 875 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 876 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 877 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 878 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 879 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text());
                                         (yyval).reset();;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 881 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text());;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 882 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(5) - (6)]);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 883 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart("");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 884 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(4) - (5)]);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 885 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval).reset();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 886 "../../../hphp/util/parser/hphp.y"
    { _p->nns();
                                         _p->finishStatement((yyval), (yyvsp[(1) - (2)])); (yyval) = 1;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 891 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 892 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 893 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 894 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 895 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 896 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 901 "../../../hphp/util/parser/hphp.y"
    { ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 902 "../../../hphp/util/parser/hphp.y"
    { ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 905 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(1) - (1)]).text(),"");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 906 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(2) - (2)]).text(),"");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 907 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(1) - (3)]).text(),(yyvsp[(3) - (3)]).text());;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 909 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(2) - (4)]).text(),(yyvsp[(4) - (4)]).text());;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 913 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 915 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(2) - (3)]) + (yyvsp[(3) - (3)]);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 918 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 1;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 919 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 0;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 921 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         (yyval) = 0;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 925 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (1)]).num())
                                           (yyvsp[(1) - (1)]).setText(_p->resolve((yyvsp[(1) - (1)]).text(),0));
                                         (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 931 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (2)]).num())
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),0));
                                         (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 937 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (2)]).num())
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),1));
                                         (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 943 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (5)]).setText(_p->nsDecl((yyvsp[(3) - (5)]).text()));
                                          on_constant(_p,(yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 945 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (4)]).setText(_p->nsDecl((yyvsp[(2) - (4)]).text()));
                                          on_constant(_p,(yyval),  0,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 951 "../../../hphp/util/parser/hphp.y"
    { _p->addStatement((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 952 "../../../hphp/util/parser/hphp.y"
    { _p->onStatementListStart((yyval));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 955 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 956 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 957 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 958 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 961 "../../../hphp/util/parser/hphp.y"
    { _p->onBlock((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 965 "../../../hphp/util/parser/hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 970 "../../../hphp/util/parser/hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(6) - (8)]));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 971 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 972 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onWhile((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 975 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 977 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onDo((yyval),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 980 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 981 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onFor((yyval),(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 983 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 984 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onSwitch((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 986 "../../../hphp/util/parser/hphp.y"
    { _p->onBreak((yyval), NULL);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 987 "../../../hphp/util/parser/hphp.y"
    { _p->onBreak((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 988 "../../../hphp/util/parser/hphp.y"
    { _p->onContinue((yyval), NULL);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 989 "../../../hphp/util/parser/hphp.y"
    { _p->onContinue((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 990 "../../../hphp/util/parser/hphp.y"
    { _p->onReturn((yyval), NULL);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 991 "../../../hphp/util/parser/hphp.y"
    { _p->onReturn((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 992 "../../../hphp/util/parser/hphp.y"
    { _p->onYieldBreak((yyval));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 993 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobal((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 994 "../../../hphp/util/parser/hphp.y"
    { _p->onStatic((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 995 "../../../hphp/util/parser/hphp.y"
    { _p->onEcho((yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 996 "../../../hphp/util/parser/hphp.y"
    { _p->onUnset((yyval), (yyvsp[(3) - (5)]));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 997 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 998 "../../../hphp/util/parser/hphp.y"
    { _p->onEcho((yyval), (yyvsp[(1) - (1)]), 1);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1001 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1002 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),(yyvsp[(9) - (9)]));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1005 "../../../hphp/util/parser/hphp.y"
    { _p->onBlock((yyval), (yyvsp[(5) - (5)])); (yyval) = T_DECLARE;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1013 "../../../hphp/util/parser/hphp.y"
    { _p->onTry((yyval),(yyvsp[(3) - (14)]),(yyvsp[(7) - (14)]),(yyvsp[(8) - (14)]),(yyvsp[(11) - (14)]),(yyvsp[(13) - (14)]),(yyvsp[(14) - (14)]));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1016 "../../../hphp/util/parser/hphp.y"
    { _p->onTry((yyval), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1017 "../../../hphp/util/parser/hphp.y"
    { _p->onThrow((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1018 "../../../hphp/util/parser/hphp.y"
    { _p->onGoto((yyval), (yyvsp[(2) - (3)]), true);
                                         _p->addGoto((yyvsp[(2) - (3)]).text(),
                                                     _p->getLocation(),
                                                     &(yyval)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1022 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1023 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1024 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1025 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1026 "../../../hphp/util/parser/hphp.y"
    { _p->onLabel((yyval), (yyvsp[(1) - (2)]));
                                         _p->addLabel((yyvsp[(1) - (2)]).text(),
                                                      _p->getLocation(),
                                                      &(yyval)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1038 "../../../hphp/util/parser/hphp.y"
    { _p->onCatch((yyval), (yyvsp[(1) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(8) - (9)]));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1039 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1043 "../../../hphp/util/parser/hphp.y"
    { finally_statement(_p);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1045 "../../../hphp/util/parser/hphp.y"
    { _p->onFinally((yyval), (yyvsp[(4) - (5)]));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1050 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1054 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 1;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1055 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1059 "../../../hphp/util/parser/hphp.y"
    { _p->pushFuncLocation();;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1064 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onFunctionStart((yyvsp[(3) - (3)]));
                                         _p->pushLabelInfo();;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1069 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onFunction((yyval),0,t,(yyvsp[(2) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(10) - (11)]),0);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1074 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(4) - (4)]).setText(_p->nsDecl((yyvsp[(4) - (4)]).text()));
                                         _p->onFunctionStart((yyvsp[(4) - (4)]));
                                         _p->pushLabelInfo();;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1079 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onFunction((yyval),0,t,(yyvsp[(3) - (12)]),(yyvsp[(4) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(11) - (12)]),&(yyvsp[(1) - (12)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1087 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart((yyvsp[(1) - (2)]).num(),(yyvsp[(2) - (2)]));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1090 "../../../hphp/util/parser/hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(7) - (8)]));
                                         } else {
                                           stmts = (yyvsp[(7) - (8)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(1) - (8)]).num(),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),
                                                     stmts,0);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1105 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart((yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1108 "../../../hphp/util/parser/hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(8) - (9)]));
                                         } else {
                                           stmts = (yyvsp[(8) - (9)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(2) - (9)]).num(),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),
                                                     stmts,&(yyvsp[(1) - (9)]));
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1122 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(2) - (2)]));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1125 "../../../hphp/util/parser/hphp.y"
    { _p->onInterface((yyval),(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(6) - (7)]),0);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1130 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(3) - (3)]));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1133 "../../../hphp/util/parser/hphp.y"
    { _p->onInterface((yyval),(yyvsp[(3) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]),&(yyvsp[(1) - (8)]));
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1140 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(2) - (2)]));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1142 "../../../hphp/util/parser/hphp.y"
    { Token t_ext, t_imp;
                                         t_ext.reset(); t_imp.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(2) - (6)]),t_ext,t_imp,
                                                     (yyvsp[(5) - (6)]), 0);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1150 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(3) - (3)]));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1152 "../../../hphp/util/parser/hphp.y"
    { Token t_ext, t_imp;
                                         t_ext.reset(); t_imp.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(3) - (7)]),t_ext,t_imp,
                                                     (yyvsp[(6) - (7)]), &(yyvsp[(1) - (7)]));
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1160 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1161 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); _p->pushTypeScope();
                                         _p->pushClass(true); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1165 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1168 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1171 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_CLASS;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1172 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_ABSTRACT;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1173 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1177 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1178 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1181 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1182 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1185 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1186 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1189 "../../../hphp/util/parser/hphp.y"
    { _p->onInterfaceName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1191 "../../../hphp/util/parser/hphp.y"
    { _p->onInterfaceName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1194 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1196 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1200 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1201 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1204 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1205 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1209 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1211 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1214 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1216 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1219 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1221 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1224 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1226 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1236 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1237 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1238 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1239 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1244 "../../../hphp/util/parser/hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1246 "../../../hphp/util/parser/hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (4)]),NULL,(yyvsp[(4) - (4)]));;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1247 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1250 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1251 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1256 "../../../hphp/util/parser/hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1257 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1262 "../../../hphp/util/parser/hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1263 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1266 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1267 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1270 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (3)]);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1271 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1276 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1278 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1279 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1280 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1285 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),0,NULL,&(yyvsp[(1) - (3)]));;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1287 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),1,NULL,&(yyvsp[(1) - (4)]));;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1290 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]),1,&(yyvsp[(6) - (6)]),&(yyvsp[(1) - (6)]));;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1293 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),0,&(yyvsp[(5) - (5)]),&(yyvsp[(1) - (5)]));;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1296 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]),0,NULL,&(yyvsp[(3) - (5)]));;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1299 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(6) - (6)]),1,NULL,&(yyvsp[(3) - (6)]));;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1303 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(6) - (8)]),1,&(yyvsp[(8) - (8)]),&(yyvsp[(3) - (8)]));;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1307 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),0,&(yyvsp[(7) - (7)]),&(yyvsp[(3) - (7)]));;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1312 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1313 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1316 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(1) - (1)]),0);;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1317 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(2) - (2)]),1);;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1319 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1321 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1325 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobalVar((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1326 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobalVar((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1329 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1330 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1331 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 1;;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1335 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1337 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1338 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1339 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1344 "../../../hphp/util/parser/hphp.y"
    { _p->onClassStatement((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1345 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1348 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (1)]));;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1349 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1352 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (2)]));;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1353 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),&(yyvsp[(2) - (5)]));;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1355 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1359 "../../../hphp/util/parser/hphp.y"
    { _p->onMethodStart((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
                                         _p->pushLabelInfo();;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1364 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onMethod((yyval),(yyvsp[(1) - (10)]),t,(yyvsp[(3) - (10)]),(yyvsp[(4) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]),0);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1371 "../../../hphp/util/parser/hphp.y"
    { _p->onMethodStart((yyvsp[(5) - (6)]), (yyvsp[(2) - (6)]));
                                         _p->pushLabelInfo();;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1376 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onMethod((yyval),(yyvsp[(2) - (11)]),t,(yyvsp[(4) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(11) - (11)]),&(yyvsp[(1) - (11)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1381 "../../../hphp/util/parser/hphp.y"
    { _p->xhpSetAttributes((yyvsp[(2) - (3)]));;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1383 "../../../hphp/util/parser/hphp.y"
    { xhp_category_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1385 "../../../hphp/util/parser/hphp.y"
    { xhp_children_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1386 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitUse((yyval),(yyvsp[(2) - (3)]),t); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1389 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitUse((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1392 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1393 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1394 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1400 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitPrecRule((yyval),(yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1404 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),
                                                                    (yyvsp[(4) - (5)]));;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1407 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),
                                                                    t);;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1414 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitAliasRuleStart((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1415 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleStart((yyval),t,(yyvsp[(1) - (1)]));;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1420 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute_list(_p,(yyval),
                                         _p->xhpGetAttributes(),(yyvsp[(1) - (1)]));;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1423 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute_list(_p,(yyval), &(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1430 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute(_p,(yyval),(yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
                                         (yyval) = 1;;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1432 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 0;;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1436 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 4;;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1437 "../../../hphp/util/parser/hphp.y"
    { /* This case handles all types other
                                            than "array", "var" and "enum".
                                            For now we just use type code 5;
                                            later xhp_attribute() will fix up
                                            the type code as appropriate. */
                                         (yyval) = 5; (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1443 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 6;;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1445 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 7;;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1449 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1451 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1455 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1456 "../../../hphp/util/parser/hphp.y"
    { scalar_null(_p, (yyval));;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1460 "../../../hphp/util/parser/hphp.y"
    { scalar_num(_p, (yyval), "1");;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1461 "../../../hphp/util/parser/hphp.y"
    { scalar_num(_p, (yyval), "0");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1465 "../../../hphp/util/parser/hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),0,&(yyvsp[(1) - (1)]),t,0);;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1468 "../../../hphp/util/parser/hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]),t,0);;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1473 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1478 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 2;;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1479 "../../../hphp/util/parser/hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1;;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1481 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 0;;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1485 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1486 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 1);;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1487 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 2);;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1488 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 3);;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1492 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1493 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (1)]),0,  0);;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1494 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),1,  0);;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1495 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),2,  0);;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1496 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),3,  0);;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1498 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),4,&(yyvsp[(3) - (3)]));;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1500 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),5,&(yyvsp[(3) - (3)]));;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1504 "../../../hphp/util/parser/hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1; else
                                         if ((yyvsp[(1) - (1)]).same("pcdata")) (yyval) = 2;;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1507 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel();  (yyval) = (yyvsp[(1) - (1)]); (yyval) = 3;;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1508 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(0); (yyval) = (yyvsp[(1) - (1)]); (yyval) = 4;;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1512 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1513 "../../../hphp/util/parser/hphp.y"
    { _p->finishStatement((yyval), (yyvsp[(2) - (3)])); (yyval) = 1;;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1516 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1517 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1520 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1521 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1524 "../../../hphp/util/parser/hphp.y"
    { _p->onMemberModifier((yyval),NULL,(yyvsp[(1) - (1)]));;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1526 "../../../hphp/util/parser/hphp.y"
    { _p->onMemberModifier((yyval),&(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1529 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PUBLIC;;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1530 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PROTECTED;;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1531 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PRIVATE;;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1532 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_STATIC;;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1533 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_ABSTRACT;;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1534 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1538 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1540 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1541 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1542 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1546 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConstant((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1547 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConstant((yyval),0,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1552 "../../../hphp/util/parser/hphp.y"
    { _p->onNewObject((yyval), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1553 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1557 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1561 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1562 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1566 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1567 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1571 "../../../hphp/util/parser/hphp.y"
    { _p->onYield((yyval), (yyvsp[(2) - (2)]));;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1575 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0, true);;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1580 "../../../hphp/util/parser/hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]), true);;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1584 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1585 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1586 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1590 "../../../hphp/util/parser/hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]));;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1591 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1592 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), 1);;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1595 "../../../hphp/util/parser/hphp.y"
    { _p->onAssignNew((yyval),(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]),(yyvsp[(6) - (6)]));;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1596 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_CLONE,1);;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1597 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_PLUS_EQUAL);;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1598 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MINUS_EQUAL);;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1599 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MUL_EQUAL);;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1600 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_DIV_EQUAL);;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1601 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_CONCAT_EQUAL);;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1602 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MOD_EQUAL);;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1603 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_AND_EQUAL);;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1604 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_OR_EQUAL);;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1605 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_XOR_EQUAL);;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1606 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL_EQUAL);;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1607 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR_EQUAL);;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1608 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_INC,0);;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1609 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INC,1);;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1610 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_DEC,0);;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1611 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DEC,1);;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1612 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_OR);;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1613 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_AND);;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1614 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_OR);;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1615 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_AND);;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1616 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_XOR);;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1617 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'|');;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1618 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'&');;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1619 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'^');;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1620 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'.');;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1621 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'+');;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1622 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'-');;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1623 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'*');;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1624 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'/');;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1625 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'%');;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1626 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL);;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1627 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR);;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1628 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1629 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1630 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'!',1);;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1631 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'~',1);;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1632 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_IDENTICAL);;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1633 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_IDENTICAL);;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1634 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_EQUAL);;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1635 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_EQUAL);;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1636 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'<');;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1637 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_SMALLER_OR_EQUAL);;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1639 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'>');;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1640 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_GREATER_OR_EQUAL);;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1643 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_INSTANCEOF);;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1644 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1645 "../../../hphp/util/parser/hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1646 "../../../hphp/util/parser/hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (4)]),   0, (yyvsp[(4) - (4)]));;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1647 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1648 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INT_CAST,1);;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1649 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DOUBLE_CAST,1);;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1650 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_STRING_CAST,1);;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1651 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_ARRAY_CAST,1);;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1652 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_OBJECT_CAST,1);;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1653 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_BOOL_CAST,1);;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1654 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_UNSET_CAST,1);;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1655 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_EXIT,1);;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1656 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'@',1);;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1657 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1658 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1659 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'`',(yyvsp[(2) - (3)]));;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1660 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_PRINT,1);;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1662 "../../../hphp/util/parser/hphp.y"
    { Token t; _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1666 "../../../hphp/util/parser/hphp.y"
    { Token u; u.reset();
                                         _p->onClosure((yyval),u,(yyvsp[(2) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(10) - (11)]),0);
                                         _p->popLabelInfo();;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1670 "../../../hphp/util/parser/hphp.y"
    { Token t; _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1674 "../../../hphp/util/parser/hphp.y"
    { Token u; u.reset();
                                         _p->onClosure((yyval),u,(yyvsp[(3) - (12)]),(yyvsp[(6) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(11) - (12)]),1);
                                         _p->popLabelInfo();;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1677 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1678 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1679 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1683 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1688 "../../../hphp/util/parser/hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1695 "../../../hphp/util/parser/hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1702 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1704 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1708 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1709 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1710 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1717 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1718 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1722 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1723 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1724 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1725 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1732 "../../../hphp/util/parser/hphp.y"
    { xhp_tag(_p,(yyval),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]));;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1735 "../../../hphp/util/parser/hphp.y"
    { Token t1; _p->onArray(t1,(yyvsp[(1) - (2)]));
                                         Token t2; _p->onArray(t2,(yyvsp[(2) - (2)]));
                                         _p->onCallParam((yyvsp[(1) - (2)]),NULL,t1,0);
                                         _p->onCallParam((yyval), &(yyvsp[(1) - (2)]),t2,0);
                                         (yyval).setText("");;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1742 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyvsp[(4) - (6)]),(yyvsp[(1) - (6)]));
                                         _p->onArray((yyvsp[(5) - (6)]),(yyvsp[(3) - (6)]));
                                         _p->onCallParam((yyvsp[(2) - (6)]),NULL,(yyvsp[(4) - (6)]),0);
                                         _p->onCallParam((yyval), &(yyvsp[(2) - (6)]),(yyvsp[(5) - (6)]),0);
                                         (yyval).setText((yyvsp[(6) - (6)]).text());;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1749 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); (yyval).setText("");;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1750 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1755 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),&(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),0);;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1756 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1759 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (2)]),0,(yyvsp[(2) - (2)]),0);;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1760 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1763 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1767 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpDecode();
                                         _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1770 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1773 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();
                                         if ((yyvsp[(1) - (1)]).htmlTrim()) {
                                           (yyvsp[(1) - (1)]).xhpDecode();
                                           _p->onScalar((yyval),
                                           T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));
                                         }
                                       ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1780 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1781 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1785 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1787 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + ":" + (yyvsp[(3) - (3)]);;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1789 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + "-" + (yyvsp[(3) - (3)]);;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1792 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1793 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1794 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1795 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1796 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1797 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1798 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1799 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1800 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1801 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1802 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1803 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1804 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1805 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1806 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1807 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1808 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1809 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1810 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1811 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1812 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1813 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1814 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1815 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1816 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1817 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1818 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1819 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1820 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1821 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1822 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1823 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1824 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1825 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1826 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1827 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1828 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1829 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1830 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1831 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1832 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1833 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1834 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1835 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1836 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1837 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1838 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1839 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1840 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1841 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1842 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1843 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1844 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1845 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1846 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1847 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1848 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1849 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1850 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1851 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1852 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1853 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1854 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1855 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1856 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1857 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1858 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1859 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1860 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1861 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1862 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1863 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1864 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1869 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1873 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1874 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1877 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1878 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1879 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),
                                         Parser::StaticClassExprName);;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1883 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1884 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1885 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::ExprName);;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1889 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1890 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1891 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1895 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1896 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), 0);;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1897 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1901 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1902 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1906 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1907 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1908 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1910 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LINE,     (yyvsp[(1) - (1)]));;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1911 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_FILE,     (yyvsp[(1) - (1)]));;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1912 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DIR,      (yyvsp[(1) - (1)]));;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1913 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CLASS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1914 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_TRAIT_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1915 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_METHOD_C, (yyvsp[(1) - (1)]));;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1916 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_FUNC_C,   (yyvsp[(1) - (1)]));;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1917 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_NS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 1920 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 1922 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 1926 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 1927 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 1928 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 1929 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 1931 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 1932 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 1933 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 1938 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 1940 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (3)]).xhpLabel();
                                         _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 1944 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 1945 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 1946 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 1947 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 1948 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'"',(yyvsp[(2) - (3)]));;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 1949 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'\'',(yyvsp[(2) - (3)]));;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 1951 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),T_START_HEREDOC,
                                                          (yyvsp[(2) - (3)]));;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 1956 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 1957 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 1960 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 1961 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 1964 "../../../hphp/util/parser/hphp.y"
    { only_in_hphp_syntax(_p); (yyval).reset();;}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 1965 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 1970 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 1972 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 1974 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 1975 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 1979 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 1980 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 1981 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 1985 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 1987 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 1990 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),T_LNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 1991 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),T_DNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 1992 "../../../hphp/util/parser/hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 1995 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 1996 "../../../hphp/util/parser/hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 1997 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 1998 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2000 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2004 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 2005 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2010 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2012 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2014 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 2015 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 2019 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2020 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2024 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 2025 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 2028 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY);;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 2029 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onArray((yyval),t,T_ARRAY);;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 2035 "../../../hphp/util/parser/hphp.y"
    { _p->onUserAttribute((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 2037 "../../../hphp/util/parser/hphp.y"
    { _p->onUserAttribute((yyval),  0,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 2040 "../../../hphp/util/parser/hphp.y"
    { user_attribute_check(_p);;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 2042 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 2045 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 2048 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 2049 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 2053 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 2055 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2059 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 2060 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2064 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 2065 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 2069 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 2070 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 2075 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 2076 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 2080 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 2081 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 2082 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 2083 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 2084 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 2085 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 2086 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 2089 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 2091 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 2092 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 2096 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 2097 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 2098 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 2099 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 2101 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 2103 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 2105 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 2106 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 2110 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 2111 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 2112 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 2118 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (7)]),(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]));;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 2121 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 2124 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(7) - (8)]));;}
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 2127 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(8) - (9)]));;}
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 2130 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]));;}
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 2133 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(9) - (10)]));;}
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 2140 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]),&(yyvsp[(1) - (7)]));;}
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 2144 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),&(yyvsp[(1) - (6)]));;}
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 2148 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 2150 "../../../hphp/util/parser/hphp.y"
    { _p->onIndirectRef((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 2155 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 2156 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 2157 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 2160 "../../../hphp/util/parser/hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 2161 "../../../hphp/util/parser/hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(3) - (4)]), 0);;}
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 2164 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 2165 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 2169 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 1;;}
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 2170 "../../../hphp/util/parser/hphp.y"
    { (yyval)++;;}
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 2174 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 2175 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 2176 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 2177 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 2180 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 2181 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 2185 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 2187 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 2189 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 2190 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 2194 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 2195 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 2197 "../../../hphp/util/parser/hphp.y"
    { _p->onAListSub((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 2198 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),NULL,NULL);;}
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 2199 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),NULL,&(yyvsp[(1) - (1)]));;}
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 2200 "../../../hphp/util/parser/hphp.y"
    { _p->onAListSub((yyval),NULL,(yyvsp[(3) - (4)]));;}
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 2205 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 2206 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 2210 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 2211 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 2212 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 2213 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 2216 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (6)]),&(yyvsp[(3) - (6)]),(yyvsp[(6) - (6)]),1);;}
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 2218 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),  0,(yyvsp[(4) - (4)]),1);;}
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 2219 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 2220 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 2225 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 2226 "../../../hphp/util/parser/hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 2230 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 2231 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 2232 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 2233 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 2238 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 2239 "../../../hphp/util/parser/hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 2244 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 2246 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 2248 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 2249 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 2253 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), -1);;}
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 2255 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 0);;}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 2256 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), -1);;}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 2258 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (2)]), 0);
                                         _p->addEncap((yyval), &(yyval), (yyvsp[(2) - (2)]), -1); ;}
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 2263 "../../../hphp/util/parser/hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 2265 "../../../hphp/util/parser/hphp.y"
    { _p->encapRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 2267 "../../../hphp/util/parser/hphp.y"
    { _p->encapObjProp((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 2269 "../../../hphp/util/parser/hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(2) - (3)]), 1);;}
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 2271 "../../../hphp/util/parser/hphp.y"
    { _p->encapArray((yyval), (yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]));;}
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 2272 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 2275 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_STRING;;}
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 2276 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_NUM_STRING;;}
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 2277 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_VARIABLE;;}
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 2281 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_ISSET,1);;}
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 2282 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EMPTY,1);;}
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 2283 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE,1);;}
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 2284 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE_ONCE,1);;}
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 2285 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EVAL,1);;}
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 2286 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE,1);;}
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 2287 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE_ONCE,1);;}
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 2291 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 2292 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 2297 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 2305 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 2306 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 2312 "../../../hphp/util/parser/hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 2316 "../../../hphp/util/parser/hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (4)]);
                                         only_in_strict_mode(_p); ;}
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 2323 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 2324 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 2333 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 2334 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 2335 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 2336 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 2340 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 2341 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 2345 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (3)]).text()); ;}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 2346 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (1)]).text()); ;}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 2348 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (5)]).text()); ;}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 2349 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (3)]).text()); ;}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 2357 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 2358 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 2359 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);
                                         /* if the type annotation is a bound
                                            typevar we have to strip it */
                                         if (_p->scanner().isStrictMode() &&
                                             (_p->isTypeVar((yyval).text()) ||
                                              !(yyval).text().compare("mixed") ||
                                              !(yyval).text().compare("this")
                                             )) {
                                           (yyval).reset();
                                         }
                                       ;}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 2370 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText("array"); ;}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 2372 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         (yyval).setText("array"); ;}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 2375 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         (yyval).setText("array"); ;}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 2377 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 2380 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 2381 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 2385 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 2386 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 10199 "hphp.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, _p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, _p, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, _p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, _p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, _p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, _p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
  YYSTACK_CLEANUP;
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 2389 "../../../hphp/util/parser/hphp.y"

bool Parser::parseImpl() {
  return yyparse(this) == 0;
}

