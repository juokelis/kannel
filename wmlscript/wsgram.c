/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ws_yy_parse
#define yylex           ws_yy_lex
#define yyerror         ws_yy_error
#define yydebug         ws_yy_debug
#define yynerrs         ws_yy_nerrs

/* First part of user prologue.  */
#line 1 "wmlscript/wsgram.y"

/*
 *
 * wsgram.y
 *
 * Author: Markku Rossi <mtr@iki.fi>
 *
 * Copyright (c) 1999-2000 WAPIT OY LTD.
 *		 All rights reserved.
 *
 * Bison grammar for the WMLScript compiler.
 *
 */

#include "wmlscript/wsint.h"
#include "wmlscript/wsgram.h"

/* The required yyerror() function.  This is actually not used but to
   report the internal parser errors.  All other errors are reported
   by using the `wserror.h' functions. */
extern void
ws_yy_error(YYLTYPE *locp, WsCompiler *compiler, char *msg);

#line 100 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_WS_YY_Y_TAB_H_INCLUDED
# define YY_WS_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ws_yy_debug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tINVALID = 258,                /* tINVALID  */
    tTRUE = 259,                   /* tTRUE  */
    tFALSE = 260,                  /* tFALSE  */
    tINTEGER = 261,                /* tINTEGER  */
    tFLOAT = 262,                  /* tFLOAT  */
    tSTRING = 263,                 /* tSTRING  */
    tIDENTIFIER = 264,             /* tIDENTIFIER  */
    tACCESS = 265,                 /* tACCESS  */
    tAGENT = 266,                  /* tAGENT  */
    tBREAK = 267,                  /* tBREAK  */
    tCONTINUE = 268,               /* tCONTINUE  */
    tIDIV = 269,                   /* tIDIV  */
    tIDIVA = 270,                  /* tIDIVA  */
    tDOMAIN = 271,                 /* tDOMAIN  */
    tELSE = 272,                   /* tELSE  */
    tEQUIV = 273,                  /* tEQUIV  */
    tEXTERN = 274,                 /* tEXTERN  */
    tFOR = 275,                    /* tFOR  */
    tFUNCTION = 276,               /* tFUNCTION  */
    tHEADER = 277,                 /* tHEADER  */
    tHTTP = 278,                   /* tHTTP  */
    tIF = 279,                     /* tIF  */
    tISVALID = 280,                /* tISVALID  */
    tMETA = 281,                   /* tMETA  */
    tNAME = 282,                   /* tNAME  */
    tPATH = 283,                   /* tPATH  */
    tRETURN = 284,                 /* tRETURN  */
    tTYPEOF = 285,                 /* tTYPEOF  */
    tUSE = 286,                    /* tUSE  */
    tUSER = 287,                   /* tUSER  */
    tVAR = 288,                    /* tVAR  */
    tWHILE = 289,                  /* tWHILE  */
    tURL = 290,                    /* tURL  */
    tDELETE = 291,                 /* tDELETE  */
    tIN = 292,                     /* tIN  */
    tLIB = 293,                    /* tLIB  */
    tNEW = 294,                    /* tNEW  */
    tNULL = 295,                   /* tNULL  */
    tTHIS = 296,                   /* tTHIS  */
    tVOID = 297,                   /* tVOID  */
    tWITH = 298,                   /* tWITH  */
    tCASE = 299,                   /* tCASE  */
    tCATCH = 300,                  /* tCATCH  */
    tCLASS = 301,                  /* tCLASS  */
    tCONST = 302,                  /* tCONST  */
    tDEBUGGER = 303,               /* tDEBUGGER  */
    tDEFAULT = 304,                /* tDEFAULT  */
    tDO = 305,                     /* tDO  */
    tENUM = 306,                   /* tENUM  */
    tEXPORT = 307,                 /* tEXPORT  */
    tEXTENDS = 308,                /* tEXTENDS  */
    tFINALLY = 309,                /* tFINALLY  */
    tIMPORT = 310,                 /* tIMPORT  */
    tPRIVATE = 311,                /* tPRIVATE  */
    tPUBLIC = 312,                 /* tPUBLIC  */
    tSIZEOF = 313,                 /* tSIZEOF  */
    tSTRUCT = 314,                 /* tSTRUCT  */
    tSUPER = 315,                  /* tSUPER  */
    tSWITCH = 316,                 /* tSWITCH  */
    tTHROW = 317,                  /* tTHROW  */
    tTRY = 318,                    /* tTRY  */
    tEQ = 319,                     /* tEQ  */
    tLE = 320,                     /* tLE  */
    tGE = 321,                     /* tGE  */
    tNE = 322,                     /* tNE  */
    tAND = 323,                    /* tAND  */
    tOR = 324,                     /* tOR  */
    tPLUSPLUS = 325,               /* tPLUSPLUS  */
    tMINUSMINUS = 326,             /* tMINUSMINUS  */
    tLSHIFT = 327,                 /* tLSHIFT  */
    tRSSHIFT = 328,                /* tRSSHIFT  */
    tRSZSHIFT = 329,               /* tRSZSHIFT  */
    tADDA = 330,                   /* tADDA  */
    tSUBA = 331,                   /* tSUBA  */
    tMULA = 332,                   /* tMULA  */
    tDIVA = 333,                   /* tDIVA  */
    tANDA = 334,                   /* tANDA  */
    tORA = 335,                    /* tORA  */
    tXORA = 336,                   /* tXORA  */
    tREMA = 337,                   /* tREMA  */
    tLSHIFTA = 338,                /* tLSHIFTA  */
    tRSSHIFTA = 339,               /* tRSSHIFTA  */
    tRSZSHIFTA = 340               /* tRSZSHIFTA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define tINVALID 258
#define tTRUE 259
#define tFALSE 260
#define tINTEGER 261
#define tFLOAT 262
#define tSTRING 263
#define tIDENTIFIER 264
#define tACCESS 265
#define tAGENT 266
#define tBREAK 267
#define tCONTINUE 268
#define tIDIV 269
#define tIDIVA 270
#define tDOMAIN 271
#define tELSE 272
#define tEQUIV 273
#define tEXTERN 274
#define tFOR 275
#define tFUNCTION 276
#define tHEADER 277
#define tHTTP 278
#define tIF 279
#define tISVALID 280
#define tMETA 281
#define tNAME 282
#define tPATH 283
#define tRETURN 284
#define tTYPEOF 285
#define tUSE 286
#define tUSER 287
#define tVAR 288
#define tWHILE 289
#define tURL 290
#define tDELETE 291
#define tIN 292
#define tLIB 293
#define tNEW 294
#define tNULL 295
#define tTHIS 296
#define tVOID 297
#define tWITH 298
#define tCASE 299
#define tCATCH 300
#define tCLASS 301
#define tCONST 302
#define tDEBUGGER 303
#define tDEFAULT 304
#define tDO 305
#define tENUM 306
#define tEXPORT 307
#define tEXTENDS 308
#define tFINALLY 309
#define tIMPORT 310
#define tPRIVATE 311
#define tPUBLIC 312
#define tSIZEOF 313
#define tSTRUCT 314
#define tSUPER 315
#define tSWITCH 316
#define tTHROW 317
#define tTRY 318
#define tEQ 319
#define tLE 320
#define tGE 321
#define tNE 322
#define tAND 323
#define tOR 324
#define tPLUSPLUS 325
#define tMINUSMINUS 326
#define tLSHIFT 327
#define tRSSHIFT 328
#define tRSZSHIFT 329
#define tADDA 330
#define tSUBA 331
#define tMULA 332
#define tDIVA 333
#define tANDA 334
#define tORA 335
#define tXORA 336
#define tREMA 337
#define tLSHIFTA 338
#define tRSSHIFTA 339
#define tRSZSHIFTA 340

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "wmlscript/wsgram.y"

    WsUInt32 integer;
    WsFloat vfloat;
    char *identifier;
    WsUtf8String *string;

    WsBool boolean;
    WsList *list;
    WsFormalParm *parm;
    WsVarDec *vardec;

    WsPragmaMetaBody *meta_body;

    WsStatement *stmt;
    WsExpression *expr;

#line 340 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int ws_yy_parse (WsCompiler *pctx);

#endif /* !YY_WS_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tINVALID = 3,                   /* tINVALID  */
  YYSYMBOL_tTRUE = 4,                      /* tTRUE  */
  YYSYMBOL_tFALSE = 5,                     /* tFALSE  */
  YYSYMBOL_tINTEGER = 6,                   /* tINTEGER  */
  YYSYMBOL_tFLOAT = 7,                     /* tFLOAT  */
  YYSYMBOL_tSTRING = 8,                    /* tSTRING  */
  YYSYMBOL_tIDENTIFIER = 9,                /* tIDENTIFIER  */
  YYSYMBOL_tACCESS = 10,                   /* tACCESS  */
  YYSYMBOL_tAGENT = 11,                    /* tAGENT  */
  YYSYMBOL_tBREAK = 12,                    /* tBREAK  */
  YYSYMBOL_tCONTINUE = 13,                 /* tCONTINUE  */
  YYSYMBOL_tIDIV = 14,                     /* tIDIV  */
  YYSYMBOL_tIDIVA = 15,                    /* tIDIVA  */
  YYSYMBOL_tDOMAIN = 16,                   /* tDOMAIN  */
  YYSYMBOL_tELSE = 17,                     /* tELSE  */
  YYSYMBOL_tEQUIV = 18,                    /* tEQUIV  */
  YYSYMBOL_tEXTERN = 19,                   /* tEXTERN  */
  YYSYMBOL_tFOR = 20,                      /* tFOR  */
  YYSYMBOL_tFUNCTION = 21,                 /* tFUNCTION  */
  YYSYMBOL_tHEADER = 22,                   /* tHEADER  */
  YYSYMBOL_tHTTP = 23,                     /* tHTTP  */
  YYSYMBOL_tIF = 24,                       /* tIF  */
  YYSYMBOL_tISVALID = 25,                  /* tISVALID  */
  YYSYMBOL_tMETA = 26,                     /* tMETA  */
  YYSYMBOL_tNAME = 27,                     /* tNAME  */
  YYSYMBOL_tPATH = 28,                     /* tPATH  */
  YYSYMBOL_tRETURN = 29,                   /* tRETURN  */
  YYSYMBOL_tTYPEOF = 30,                   /* tTYPEOF  */
  YYSYMBOL_tUSE = 31,                      /* tUSE  */
  YYSYMBOL_tUSER = 32,                     /* tUSER  */
  YYSYMBOL_tVAR = 33,                      /* tVAR  */
  YYSYMBOL_tWHILE = 34,                    /* tWHILE  */
  YYSYMBOL_tURL = 35,                      /* tURL  */
  YYSYMBOL_tDELETE = 36,                   /* tDELETE  */
  YYSYMBOL_tIN = 37,                       /* tIN  */
  YYSYMBOL_tLIB = 38,                      /* tLIB  */
  YYSYMBOL_tNEW = 39,                      /* tNEW  */
  YYSYMBOL_tNULL = 40,                     /* tNULL  */
  YYSYMBOL_tTHIS = 41,                     /* tTHIS  */
  YYSYMBOL_tVOID = 42,                     /* tVOID  */
  YYSYMBOL_tWITH = 43,                     /* tWITH  */
  YYSYMBOL_tCASE = 44,                     /* tCASE  */
  YYSYMBOL_tCATCH = 45,                    /* tCATCH  */
  YYSYMBOL_tCLASS = 46,                    /* tCLASS  */
  YYSYMBOL_tCONST = 47,                    /* tCONST  */
  YYSYMBOL_tDEBUGGER = 48,                 /* tDEBUGGER  */
  YYSYMBOL_tDEFAULT = 49,                  /* tDEFAULT  */
  YYSYMBOL_tDO = 50,                       /* tDO  */
  YYSYMBOL_tENUM = 51,                     /* tENUM  */
  YYSYMBOL_tEXPORT = 52,                   /* tEXPORT  */
  YYSYMBOL_tEXTENDS = 53,                  /* tEXTENDS  */
  YYSYMBOL_tFINALLY = 54,                  /* tFINALLY  */
  YYSYMBOL_tIMPORT = 55,                   /* tIMPORT  */
  YYSYMBOL_tPRIVATE = 56,                  /* tPRIVATE  */
  YYSYMBOL_tPUBLIC = 57,                   /* tPUBLIC  */
  YYSYMBOL_tSIZEOF = 58,                   /* tSIZEOF  */
  YYSYMBOL_tSTRUCT = 59,                   /* tSTRUCT  */
  YYSYMBOL_tSUPER = 60,                    /* tSUPER  */
  YYSYMBOL_tSWITCH = 61,                   /* tSWITCH  */
  YYSYMBOL_tTHROW = 62,                    /* tTHROW  */
  YYSYMBOL_tTRY = 63,                      /* tTRY  */
  YYSYMBOL_tEQ = 64,                       /* tEQ  */
  YYSYMBOL_tLE = 65,                       /* tLE  */
  YYSYMBOL_tGE = 66,                       /* tGE  */
  YYSYMBOL_tNE = 67,                       /* tNE  */
  YYSYMBOL_tAND = 68,                      /* tAND  */
  YYSYMBOL_tOR = 69,                       /* tOR  */
  YYSYMBOL_tPLUSPLUS = 70,                 /* tPLUSPLUS  */
  YYSYMBOL_tMINUSMINUS = 71,               /* tMINUSMINUS  */
  YYSYMBOL_tLSHIFT = 72,                   /* tLSHIFT  */
  YYSYMBOL_tRSSHIFT = 73,                  /* tRSSHIFT  */
  YYSYMBOL_tRSZSHIFT = 74,                 /* tRSZSHIFT  */
  YYSYMBOL_tADDA = 75,                     /* tADDA  */
  YYSYMBOL_tSUBA = 76,                     /* tSUBA  */
  YYSYMBOL_tMULA = 77,                     /* tMULA  */
  YYSYMBOL_tDIVA = 78,                     /* tDIVA  */
  YYSYMBOL_tANDA = 79,                     /* tANDA  */
  YYSYMBOL_tORA = 80,                      /* tORA  */
  YYSYMBOL_tXORA = 81,                     /* tXORA  */
  YYSYMBOL_tREMA = 82,                     /* tREMA  */
  YYSYMBOL_tLSHIFTA = 83,                  /* tLSHIFTA  */
  YYSYMBOL_tRSSHIFTA = 84,                 /* tRSSHIFTA  */
  YYSYMBOL_tRSZSHIFTA = 85,                /* tRSZSHIFTA  */
  YYSYMBOL_86_ = 86,                       /* ';'  */
  YYSYMBOL_87_ = 87,                       /* '('  */
  YYSYMBOL_88_ = 88,                       /* ')'  */
  YYSYMBOL_89_ = 89,                       /* ','  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_92_ = 92,                       /* '='  */
  YYSYMBOL_93_ = 93,                       /* '?'  */
  YYSYMBOL_94_ = 94,                       /* ':'  */
  YYSYMBOL_95_ = 95,                       /* '|'  */
  YYSYMBOL_96_ = 96,                       /* '^'  */
  YYSYMBOL_97_ = 97,                       /* '&'  */
  YYSYMBOL_98_ = 98,                       /* '<'  */
  YYSYMBOL_99_ = 99,                       /* '>'  */
  YYSYMBOL_100_ = 100,                     /* '+'  */
  YYSYMBOL_101_ = 101,                     /* '-'  */
  YYSYMBOL_102_ = 102,                     /* '*'  */
  YYSYMBOL_103_ = 103,                     /* '/'  */
  YYSYMBOL_104_ = 104,                     /* '%'  */
  YYSYMBOL_105_ = 105,                     /* '~'  */
  YYSYMBOL_106_ = 106,                     /* '!'  */
  YYSYMBOL_107_ = 107,                     /* '#'  */
  YYSYMBOL_108_ = 108,                     /* '.'  */
  YYSYMBOL_YYACCEPT = 109,                 /* $accept  */
  YYSYMBOL_CompilationUnit = 110,          /* CompilationUnit  */
  YYSYMBOL_Pragmas = 111,                  /* Pragmas  */
  YYSYMBOL_Pragma = 112,                   /* Pragma  */
  YYSYMBOL_PragmaDeclaration = 113,        /* PragmaDeclaration  */
  YYSYMBOL_ExternalCompilationUnitPragma = 114, /* ExternalCompilationUnitPragma  */
  YYSYMBOL_AccessControlPragma = 115,      /* AccessControlPragma  */
  YYSYMBOL_AccessControlSpecifier = 116,   /* AccessControlSpecifier  */
  YYSYMBOL_MetaPragma = 117,               /* MetaPragma  */
  YYSYMBOL_MetaSpecifier = 118,            /* MetaSpecifier  */
  YYSYMBOL_MetaName = 119,                 /* MetaName  */
  YYSYMBOL_MetaHttpEquiv = 120,            /* MetaHttpEquiv  */
  YYSYMBOL_MetaUserAgent = 121,            /* MetaUserAgent  */
  YYSYMBOL_MetaBody = 122,                 /* MetaBody  */
  YYSYMBOL_MetaPropertyName = 123,         /* MetaPropertyName  */
  YYSYMBOL_MetaContent = 124,              /* MetaContent  */
  YYSYMBOL_MetaScheme = 125,               /* MetaScheme  */
  YYSYMBOL_FunctionDeclarations = 126,     /* FunctionDeclarations  */
  YYSYMBOL_FunctionDeclaration = 127,      /* FunctionDeclaration  */
  YYSYMBOL_ExternOpt = 128,                /* ExternOpt  */
  YYSYMBOL_FormalParameterListOpt = 129,   /* FormalParameterListOpt  */
  YYSYMBOL_SemicolonOpt = 130,             /* SemicolonOpt  */
  YYSYMBOL_FormalParameterList = 131,      /* FormalParameterList  */
  YYSYMBOL_Statement = 132,                /* Statement  */
  YYSYMBOL_Block = 133,                    /* Block  */
  YYSYMBOL_StatementListOpt = 134,         /* StatementListOpt  */
  YYSYMBOL_StatementList = 135,            /* StatementList  */
  YYSYMBOL_VariableStatement = 136,        /* VariableStatement  */
  YYSYMBOL_VariableDeclarationList = 137,  /* VariableDeclarationList  */
  YYSYMBOL_VariableDeclaration = 138,      /* VariableDeclaration  */
  YYSYMBOL_VariableInitializedOpt = 139,   /* VariableInitializedOpt  */
  YYSYMBOL_IfStatement = 140,              /* IfStatement  */
  YYSYMBOL_IterationStatement = 141,       /* IterationStatement  */
  YYSYMBOL_ForStatement = 142,             /* ForStatement  */
  YYSYMBOL_ReturnStatement = 143,          /* ReturnStatement  */
  YYSYMBOL_ExpressionOpt = 144,            /* ExpressionOpt  */
  YYSYMBOL_Expression = 145,               /* Expression  */
  YYSYMBOL_AssignmentExpression = 146,     /* AssignmentExpression  */
  YYSYMBOL_ConditionalExpression = 147,    /* ConditionalExpression  */
  YYSYMBOL_LogicalORExpression = 148,      /* LogicalORExpression  */
  YYSYMBOL_LogicalANDExpression = 149,     /* LogicalANDExpression  */
  YYSYMBOL_BitwiseORExpression = 150,      /* BitwiseORExpression  */
  YYSYMBOL_BitwiseXORExpression = 151,     /* BitwiseXORExpression  */
  YYSYMBOL_BitwiseANDExpression = 152,     /* BitwiseANDExpression  */
  YYSYMBOL_EqualityExpression = 153,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 154,     /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 155,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 156,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 157, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 158,          /* UnaryExpression  */
  YYSYMBOL_PostfixExpression = 159,        /* PostfixExpression  */
  YYSYMBOL_CallExpression = 160,           /* CallExpression  */
  YYSYMBOL_PrimaryExpression = 161,        /* PrimaryExpression  */
  YYSYMBOL_Arguments = 162,                /* Arguments  */
  YYSYMBOL_ArgumentList = 163              /* ArgumentList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   340


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,   107,     2,   104,    97,     2,
      87,    88,   102,   100,    89,   101,   108,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    86,
      98,    92,    99,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    95,    91,   105,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   117,   117,   118,   119,   126,   127,   131,   132,   137,
     138,   139,   143,   148,   152,   162,   173,   196,   200,   201,
     202,   206,   224,   244,   279,   281,   285,   286,   287,   292,
     293,   297,   312,   313,   318,   319,   322,   324,   328,   346,
     367,   375,   376,   378,   380,   381,   382,   384,   386,   389,
     397,   406,   407,   411,   416,   421,   423,   428,   433,   438,
     454,   455,   460,   462,   467,   469,   473,   476,   482,   489,
     490,   495,   496,   501,   502,   504,   506,   508,   510,   512,
     514,   516,   518,   520,   522,   524,   526,   531,   532,   537,
     538,   543,   544,   549,   550,   555,   556,   561,   562,   567,
     568,   570,   575,   576,   578,   580,   582,   587,   588,   590,
     592,   597,   598,   600,   605,   606,   608,   610,   612,   617,
     618,   620,   622,   624,   626,   642,   644,   646,   651,   652,
     654,   659,   660,   670,   672,   677,   679,   681,   683,   685,
     687,   689,   691,   696,   698,   703,   708
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tINVALID", "tTRUE",
  "tFALSE", "tINTEGER", "tFLOAT", "tSTRING", "tIDENTIFIER", "tACCESS",
  "tAGENT", "tBREAK", "tCONTINUE", "tIDIV", "tIDIVA", "tDOMAIN", "tELSE",
  "tEQUIV", "tEXTERN", "tFOR", "tFUNCTION", "tHEADER", "tHTTP", "tIF",
  "tISVALID", "tMETA", "tNAME", "tPATH", "tRETURN", "tTYPEOF", "tUSE",
  "tUSER", "tVAR", "tWHILE", "tURL", "tDELETE", "tIN", "tLIB", "tNEW",
  "tNULL", "tTHIS", "tVOID", "tWITH", "tCASE", "tCATCH", "tCLASS",
  "tCONST", "tDEBUGGER", "tDEFAULT", "tDO", "tENUM", "tEXPORT", "tEXTENDS",
  "tFINALLY", "tIMPORT", "tPRIVATE", "tPUBLIC", "tSIZEOF", "tSTRUCT",
  "tSUPER", "tSWITCH", "tTHROW", "tTRY", "tEQ", "tLE", "tGE", "tNE",
  "tAND", "tOR", "tPLUSPLUS", "tMINUSMINUS", "tLSHIFT", "tRSSHIFT",
  "tRSZSHIFT", "tADDA", "tSUBA", "tMULA", "tDIVA", "tANDA", "tORA",
  "tXORA", "tREMA", "tLSHIFTA", "tRSSHIFTA", "tRSZSHIFTA", "';'", "'('",
  "')'", "','", "'{'", "'}'", "'='", "'?'", "':'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'!'", "'#'",
  "'.'", "$accept", "CompilationUnit", "Pragmas", "Pragma",
  "PragmaDeclaration", "ExternalCompilationUnitPragma",
  "AccessControlPragma", "AccessControlSpecifier", "MetaPragma",
  "MetaSpecifier", "MetaName", "MetaHttpEquiv", "MetaUserAgent",
  "MetaBody", "MetaPropertyName", "MetaContent", "MetaScheme",
  "FunctionDeclarations", "FunctionDeclaration", "ExternOpt",
  "FormalParameterListOpt", "SemicolonOpt", "FormalParameterList",
  "Statement", "Block", "StatementListOpt", "StatementList",
  "VariableStatement", "VariableDeclarationList", "VariableDeclaration",
  "VariableInitializedOpt", "IfStatement", "IterationStatement",
  "ForStatement", "ReturnStatement", "ExpressionOpt", "Expression",
  "AssignmentExpression", "ConditionalExpression", "LogicalORExpression",
  "LogicalANDExpression", "BitwiseORExpression", "BitwiseXORExpression",
  "BitwiseANDExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PostfixExpression", "CallExpression",
  "PrimaryExpression", "Arguments", "ArgumentList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    59,    40,    41,    44,
     123,   125,    61,    63,    58,   124,    94,    38,    60,    62,
      43,    45,    42,    47,    37,   126,    33,    35,    46
};
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,    39,  -135,    28,    68,    63,  -135,    38,  -135,    62,
      37,    54,    13,   -43,  -135,  -135,  -135,  -135,  -135,  -135,
      38,  -135,    57,    67,    87,  -135,    92,   108,   109,  -135,
    -135,  -135,  -135,   121,  -135,    47,   123,  -135,   108,  -135,
    -135,   141,   108,  -135,   155,   164,  -135,  -135,   166,  -135,
    -135,    89,   107,  -135,  -135,  -135,     1,   188,  -135,   132,
     112,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   340,   115,
     120,   124,   125,   296,   308,   296,    35,   126,   198,   201,
    -135,   308,   296,   296,   296,   296,  -135,  -135,   129,   175,
    -135,  -135,  -135,  -135,  -135,   -83,  -135,  -135,   -48,   146,
     122,   119,   127,    12,   -25,    45,     5,    44,  -135,  -135,
    -135,  -135,  -135,  -135,   308,  -135,  -135,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   222,   308,
     207,   212,  -135,  -135,  -135,   264,   308,   -38,  -135,   148,
     147,  -135,  -135,   143,    -1,  -135,   308,  -135,  -135,    43,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,   308,   296,   308,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,    66,  -135,   152,   152,   231,   156,    70,
    -135,   296,  -135,  -135,   231,    82,  -135,  -135,   146,   149,
     122,   119,   127,    12,   -25,   -25,    45,    45,    45,    45,
       5,     5,     5,    44,    44,  -135,  -135,  -135,  -135,  -135,
     308,  -135,  -135,    25,   308,    22,  -135,  -135,    22,   308,
    -135,   308,   158,   224,  -135,  -135,   162,   308,    22,   308,
     161,  -135,   163,    22,    22,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    33,     0,     0,     0,     5,     3,    29,     0,
       0,     0,     0,     0,     9,    10,    11,     1,     8,     6,
       2,    30,     0,     0,     0,    13,     0,     0,     0,    17,
      18,    19,    20,     0,     7,     0,    14,    15,     0,    26,
      21,     0,     0,    12,    34,     0,    22,    27,    24,    23,
      38,     0,    35,    16,    28,    25,     0,     0,    50,     0,
      36,    39,   136,   137,   138,   139,   140,   141,   135,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,    53,    40,     0,     0,
      41,    44,    45,    65,    48,     0,    71,    73,    87,    89,
      91,    93,    95,    97,    99,   102,   107,   111,   114,   119,
     128,   131,    37,    31,     0,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,    47,    46,    69,     0,   135,   121,     0,
      70,   120,    56,    60,     0,    57,     0,   122,   123,     0,
     124,   125,   126,   127,    49,    54,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      78,    79,    75,    76,    83,    85,    84,    77,    80,    81,
      82,   143,   145,     0,    74,     0,     0,     0,     0,     0,
      68,     0,    59,    55,     0,     0,   142,    72,    90,     0,
      92,    94,    96,    98,   100,   101,   105,   106,   103,   104,
     108,   109,   110,   112,   113,   117,   115,   116,   118,   144,
       0,   133,   134,     0,    69,     0,    61,    58,     0,     0,
     146,    69,     0,    63,    64,    88,     0,    69,     0,    69,
       0,    62,     0,     0,     0,    66,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,   245,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,    29,  -135,  -135,  -135,   248,    17,  -135,
    -135,  -135,  -135,   -85,   199,  -135,  -135,  -135,    60,    50,
    -135,  -135,  -135,  -135,  -135,  -134,   -74,  -109,    55,  -135,
     100,    99,   102,    98,   101,   -22,   -65,   -46,    20,    14,
    -135,  -135,  -135,   -10,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    13,    14,    15,    25,    16,    29,
      30,    31,    32,    40,    41,    48,    55,     7,     8,     9,
      51,   113,    52,    86,    87,    88,    89,    90,   144,   145,
     202,    91,    92,    93,    94,   139,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   132,   193
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,   198,    58,   156,   155,   179,   157,   149,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   192,
     194,   158,    33,    58,    21,    62,    63,    64,    65,    66,
      67,    68,   115,   116,    69,    70,   142,    21,    10,    -4,
     166,   167,    71,    34,   143,   159,    72,    73,   207,   128,
     209,    74,    75,    23,    11,    76,    77,     2,   175,   -32,
       1,   140,   199,    12,    18,    24,    35,    46,    17,   130,
     131,    49,   205,   168,   169,    36,   164,    26,     2,   165,
     -32,    27,     2,    22,   -32,   203,    28,   138,   204,   141,
       3,    59,    78,    79,     3,    37,   150,   151,   152,   153,
     242,   216,   217,   218,   219,   173,   174,   246,    80,    81,
      38,   241,    59,   250,   204,   252,    39,   170,   171,   172,
      42,   240,    82,    83,   220,   221,   222,    84,    85,    43,
     245,   206,   157,    58,    44,    62,    63,    64,    65,    66,
      67,    68,   214,   215,    69,    70,   176,   177,   178,    47,
     243,    45,    71,   244,   229,   230,    72,    73,   235,   157,
     140,    74,    75,   251,    50,    76,    77,   140,   255,   256,
     238,   157,    53,   140,    54,   140,    58,    56,    62,    63,
      64,    65,    66,    67,    68,   231,   232,    69,    70,   225,
     226,   227,   228,   223,   224,    71,    57,    61,   112,    72,
      73,   133,    78,    79,    74,    75,   134,   147,    76,    77,
     148,   135,   136,   146,   160,   162,   195,   161,    80,    81,
     154,   196,    59,   -51,   163,    62,    63,    64,    65,    66,
      67,    68,    82,    83,   200,   201,   157,    84,    85,   128,
     143,   248,   234,   239,   247,    78,    79,    73,   249,   253,
      19,   254,    75,    20,   237,    60,   236,   233,   208,   210,
     212,    80,    81,   211,   213,    59,   -52,    62,    63,    64,
      65,    66,    67,    68,     0,    82,    83,     0,     0,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,    78,    79,    75,     0,     0,   197,     0,    62,
      63,    64,    65,    66,    67,   137,     0,     0,     0,    81,
     191,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,    73,    82,    83,     0,     0,    75,    84,    85,     0,
       0,     0,     0,    73,    78,    79,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    83,    78,    79,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    82,    83,     0,     0,
       0,    84,    85,     0,     0,     0,     0,     0,    82,    83,
     115,   116,     0,    84,    85,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131
};

static const yytype_int16 yycheck[] =
{
      74,   135,     1,    86,    89,   114,    89,    81,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    69,     9,     1,     7,     3,     4,     5,     6,     7,
       8,     9,    70,    71,    12,    13,     1,    20,    10,     0,
      65,    66,    20,    86,     9,    93,    24,    25,   157,    87,
     159,    29,    30,    16,    26,    33,    34,    19,    14,    21,
       1,   135,   136,    35,     1,    28,     9,    38,     0,   107,
     108,    42,   146,    98,    99,     8,    64,    23,    19,    67,
      21,    27,    19,    21,    21,    86,    32,    73,    89,    75,
      31,    90,    70,    71,    31,     8,    82,    83,    84,    85,
     234,   166,   167,   168,   169,   100,   101,   241,    86,    87,
      18,    86,    90,   247,    89,   249,     8,    72,    73,    74,
      11,   230,   100,   101,   170,   171,   172,   105,   106,     8,
     239,    88,    89,     1,    87,     3,     4,     5,     6,     7,
       8,     9,   164,   165,    12,    13,   102,   103,   104,     8,
     235,    28,    20,   238,    88,    89,    24,    25,    88,    89,
     234,    29,    30,   248,     9,    33,    34,   241,   253,   254,
      88,    89,     8,   247,     8,   249,     1,    88,     3,     4,
       5,     6,     7,     8,     9,   195,   196,    12,    13,   175,
     176,   177,   178,   173,   174,    20,    89,     9,    86,    24,
      25,    86,    70,    71,    29,    30,    86,     9,    33,    34,
       9,    87,    87,    87,    68,    96,     9,    95,    86,    87,
      91,     9,    90,    91,    97,     3,     4,     5,     6,     7,
       8,     9,   100,   101,    86,    92,    89,   105,   106,    87,
       9,    17,    86,    94,    86,    70,    71,    25,    86,    88,
       5,    88,    30,     5,   204,    56,   201,   197,   158,   160,
     162,    86,    87,   161,   163,    90,    91,     3,     4,     5,
       6,     7,     8,     9,    -1,   100,   101,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    70,    71,    30,    -1,    -1,    33,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    25,   100,   101,    -1,    -1,    30,   105,   106,    -1,
      -1,    -1,    -1,    25,    70,    71,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    70,    71,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,   100,   101,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,    -1,    -1,   100,   101,
      70,    71,    -1,   105,   106,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    19,    31,   110,   111,   112,   126,   127,   128,
      10,    26,    35,   113,   114,   115,   117,     0,     1,   112,
     126,   127,    21,    16,    28,   116,    23,    27,    32,   118,
     119,   120,   121,     9,    86,     9,     8,     8,    18,     8,
     122,   123,    11,     8,    87,    28,   122,     8,   124,   122,
       9,   129,   131,     8,     8,   125,    88,    89,     1,    90,
     133,     9,     3,     4,     5,     6,     7,     8,     9,    12,
      13,    20,    24,    25,    29,    30,    33,    34,    70,    71,
      86,    87,   100,   101,   105,   106,   132,   133,   134,   135,
     136,   140,   141,   142,   143,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    86,   130,    15,    70,    71,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    87,    92,
     107,   108,   162,    86,    86,    87,    87,     9,   158,   144,
     145,   158,     1,     9,   137,   138,    87,     9,     9,   145,
     158,   158,   158,   158,    91,   132,    86,    89,    69,    93,
      68,    95,    96,    97,    64,    67,    65,    66,    98,    99,
      72,    73,    74,   100,   101,    14,   102,   103,   104,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,    88,   146,   163,   146,     9,     9,    33,   144,   145,
      86,    92,   139,    86,    89,   145,    88,   146,   149,   146,
     150,   151,   152,   153,   154,   154,   155,   155,   155,   155,
     156,   156,   156,   157,   157,   158,   158,   158,   158,    88,
      89,   162,   162,   137,    86,    88,   147,   138,    88,    94,
     146,    86,   144,   132,   132,   146,   144,    86,    17,    86,
     144,   132,   144,    88,    88,   132,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   115,   116,   116,   116,   117,   118,   118,
     118,   119,   120,   121,   122,   122,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   159,
     159,   160,   160,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     3,     2,     2,     2,     4,     2,     1,     1,
       1,     2,     3,     3,     2,     3,     1,     1,     1,     1,
       2,     8,     0,     1,     0,     1,     0,     1,     1,     3,
       1,     1,     1,     2,     1,     1,     2,     2,     1,     3,
       1,     0,     1,     1,     2,     3,     2,     1,     3,     2,
       0,     2,     7,     5,     5,     1,     9,    10,     3,     0,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, pctx, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, pctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, WsCompiler *pctx)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (pctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, WsCompiler *pctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, pctx);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, WsCompiler *pctx)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), pctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, pctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, WsCompiler *pctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (pctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (WsCompiler *pctx)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* CompilationUnit: error  */
#line 120 "wmlscript/wsgram.y"
                { ws_error_syntax(pctx, (yylsp[0]).first_line); }
#line 1846 "y.tab.c"
    break;

  case 8: /* Pragma: error  */
#line 133 "wmlscript/wsgram.y"
                { ws_error_syntax(pctx, (yylsp[0]).first_line); }
#line 1852 "y.tab.c"
    break;

  case 12: /* ExternalCompilationUnitPragma: tURL tIDENTIFIER tSTRING  */
#line 144 "wmlscript/wsgram.y"
                { ws_pragma_use(pctx, (yylsp[-1]).first_line, (yyvsp[-1].identifier), (yyvsp[0].string)); }
#line 1858 "y.tab.c"
    break;

  case 14: /* AccessControlSpecifier: tDOMAIN tSTRING  */
#line 153 "wmlscript/wsgram.y"
                {
		    WsCompiler *compiler = (WsCompiler *) pctx;

		    /* Pass this to the byte-code */
		    if (!ws_bc_add_pragma_access_domain(compiler->bc, (yyvsp[0].string)->data,
						        (yyvsp[0].string)->len))
		        ws_error_memory(pctx);
		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1872 "y.tab.c"
    break;

  case 15: /* AccessControlSpecifier: tPATH tSTRING  */
#line 163 "wmlscript/wsgram.y"
                {
		    WsCompiler *compiler = (WsCompiler *) pctx;

		    /* Pass this to the byte-code */
		    if (!ws_bc_add_pragma_access_path(compiler->bc, (yyvsp[0].string)->data,
						      (yyvsp[0].string)->len))
		        ws_error_memory(pctx);

		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1887 "y.tab.c"
    break;

  case 16: /* AccessControlSpecifier: tDOMAIN tSTRING tPATH tSTRING  */
#line 174 "wmlscript/wsgram.y"
                {
		    WsCompiler *compiler = (WsCompiler *) pctx;
		    WsBool success = WS_TRUE;

		    /* Pass these to the byte-code */
		    if (!ws_bc_add_pragma_access_domain(compiler->bc, (yyvsp[-2].string)->data,
						        (yyvsp[-2].string)->len))
		        success = WS_FALSE;

		    if (!ws_bc_add_pragma_access_path(compiler->bc, (yyvsp[0].string)->data,
						      (yyvsp[0].string)->len))
		        success = WS_FALSE;

		    if (!success)
		        ws_error_memory(pctx);

		    ws_lexer_free_utf8(compiler, (yyvsp[-2].string));
		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1911 "y.tab.c"
    break;

  case 21: /* MetaName: tNAME MetaBody  */
#line 207 "wmlscript/wsgram.y"
                {
		    WsCompiler *compiler = (WsCompiler *) pctx;

		    /* Meta information for the origin servers.  Show it
                     * to the user if requested. */
		    if (compiler->params.meta_name_cb)
		        (*compiler->params.meta_name_cb)(
					(yyvsp[0].meta_body)->property_name, (yyvsp[0].meta_body)->content,
					(yyvsp[0].meta_body)->scheme,
					compiler->params.meta_name_cb_context);

		    /* We do not need the MetaBody anymore. */
		    ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));
		}
#line 1930 "y.tab.c"
    break;

  case 22: /* MetaHttpEquiv: tHTTP tEQUIV MetaBody  */
#line 225 "wmlscript/wsgram.y"
                {
		    WsCompiler *compiler = (WsCompiler *) pctx;

		    /* Meta information HTTP header that should be
                     * included to an HTTP response header.  Show it to
                     * the user if requested. */
		    if (compiler->params.meta_http_equiv_cb)
		        (*compiler->params.meta_http_equiv_cb)(
				(yyvsp[0].meta_body)->property_name,
				(yyvsp[0].meta_body)->content,
				(yyvsp[0].meta_body)->scheme,
				compiler->params.meta_http_equiv_cb_context);

		    /* We do not need the MetaBody anymore. */
		    ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));
		}
#line 1951 "y.tab.c"
    break;

  case 23: /* MetaUserAgent: tUSER tAGENT MetaBody  */
#line 245 "wmlscript/wsgram.y"
                {
		    WsBool success;
		    WsCompiler *compiler = (WsCompiler *) pctx;

		    /* Pass this pragma to the byte-code */
		    if ((yyvsp[0].meta_body)) {
		        if ((yyvsp[0].meta_body)->scheme)
		  	    success
			  = ws_bc_add_pragma_user_agent_property_and_scheme(
						compiler->bc,
						(yyvsp[0].meta_body)->property_name->data,
						(yyvsp[0].meta_body)->property_name->len,
						(yyvsp[0].meta_body)->content->data,
						(yyvsp[0].meta_body)->content->len,
						(yyvsp[0].meta_body)->scheme->data,
						(yyvsp[0].meta_body)->scheme->len);
		        else
		  	    success = ws_bc_add_pragma_user_agent_property(
						compiler->bc,
						(yyvsp[0].meta_body)->property_name->data,
						(yyvsp[0].meta_body)->property_name->len,
						(yyvsp[0].meta_body)->content->data,
						(yyvsp[0].meta_body)->content->len);

		        /* Free the MetaBody. */
		        ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));

		        if (!success)
		  	    ws_error_memory(pctx);
		    }
		}
#line 1987 "y.tab.c"
    break;

  case 24: /* MetaBody: MetaPropertyName MetaContent  */
#line 280 "wmlscript/wsgram.y"
                { (yyval.meta_body) = ws_pragma_meta_body(pctx, (yyvsp[-1].string), (yyvsp[0].string), NULL); }
#line 1993 "y.tab.c"
    break;

  case 25: /* MetaBody: MetaPropertyName MetaContent MetaScheme  */
#line 282 "wmlscript/wsgram.y"
                { (yyval.meta_body) = ws_pragma_meta_body(pctx, (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].string)); }
#line 1999 "y.tab.c"
    break;

  case 31: /* FunctionDeclaration: ExternOpt tFUNCTION tIDENTIFIER '(' FormalParameterListOpt ')' Block SemicolonOpt  */
#line 299 "wmlscript/wsgram.y"
                {
		    char *name = ws_strdup((yyvsp[-5].identifier));

		    ws_lexer_free_block(pctx, (yyvsp[-5].identifier));

		    if (name)
		        ws_function(pctx, (yyvsp[-7].boolean), name, (yylsp[-5]).first_line, (yyvsp[-3].list), (yyvsp[-1].list));
		    else
		        ws_error_memory(pctx);
		}
#line 2014 "y.tab.c"
    break;

  case 32: /* ExternOpt: %empty  */
#line 312 "wmlscript/wsgram.y"
                        { (yyval.boolean) = WS_FALSE; }
#line 2020 "y.tab.c"
    break;

  case 33: /* ExternOpt: tEXTERN  */
#line 313 "wmlscript/wsgram.y"
                        { (yyval.boolean) = WS_TRUE;  }
#line 2026 "y.tab.c"
    break;

  case 34: /* FormalParameterListOpt: %empty  */
#line 318 "wmlscript/wsgram.y"
                { (yyval.list) = ws_list_new(pctx); }
#line 2032 "y.tab.c"
    break;

  case 38: /* FormalParameterList: tIDENTIFIER  */
#line 329 "wmlscript/wsgram.y"
                {
                    char *id;
                    WsFormalParm *parm;

		    id = ws_f_strdup(((WsCompiler *) pctx)->pool_stree, (yyvsp[0].identifier));
                    parm = ws_formal_parameter(pctx, (yylsp[0]).first_line, id);

		    ws_lexer_free_block(pctx, (yyvsp[0].identifier));

		    if (id == NULL || parm == NULL) {
		        ws_error_memory(pctx);
		        (yyval.list) = NULL;
		    } else {
		        (yyval.list) = ws_list_new(pctx);
		        ws_list_append(pctx, (yyval.list), parm);
		    }
		}
#line 2054 "y.tab.c"
    break;

  case 39: /* FormalParameterList: FormalParameterList ',' tIDENTIFIER  */
#line 347 "wmlscript/wsgram.y"
                {
                    char *id;
                    WsFormalParm *parm;

		    id = ws_f_strdup(((WsCompiler *) pctx)->pool_stree, (yyvsp[0].identifier));
                    parm = ws_formal_parameter(pctx, (yylsp[-2]).first_line, id);

		    ws_lexer_free_block(pctx, (yyvsp[0].identifier));

		    if (id == NULL || parm == NULL) {
		        ws_error_memory(pctx);
		        (yyval.list) = NULL;
		    } else
		        ws_list_append(pctx, (yyvsp[-2].list), parm);
		}
#line 2074 "y.tab.c"
    break;

  case 40: /* Statement: Block  */
#line 368 "wmlscript/wsgram.y"
                {
		    if ((yyvsp[0].list))
		        (yyval.stmt) = ws_stmt_block(pctx, (yyvsp[0].list)->first_line, (yyvsp[0].list)->last_line,
				           (yyvsp[0].list));
		    else
		        (yyval.stmt) = NULL;
		}
#line 2086 "y.tab.c"
    break;

  case 42: /* Statement: ';'  */
#line 377 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_empty(pctx, (yylsp[0]).first_line); }
#line 2092 "y.tab.c"
    break;

  case 43: /* Statement: Expression ';'  */
#line 379 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_expr(pctx, (yyvsp[-1].expr)->line, (yyvsp[-1].expr)); }
#line 2098 "y.tab.c"
    break;

  case 46: /* Statement: tCONTINUE ';'  */
#line 383 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_continue(pctx, (yylsp[-1]).first_line); }
#line 2104 "y.tab.c"
    break;

  case 47: /* Statement: tBREAK ';'  */
#line 385 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_break(pctx, (yylsp[-1]).first_line); }
#line 2110 "y.tab.c"
    break;

  case 49: /* Block: '{' StatementListOpt '}'  */
#line 390 "wmlscript/wsgram.y"
                {
		    (yyval.list) = (yyvsp[-1].list);
		    if ((yyval.list)) {
		        (yyval.list)->first_line = (yylsp[-2]).first_line;
		        (yyval.list)->last_line = (yylsp[0]).first_line;
		    }
		}
#line 2122 "y.tab.c"
    break;

  case 50: /* Block: error  */
#line 398 "wmlscript/wsgram.y"
                {
		    ws_error_syntax(pctx, (yylsp[0]).first_line);
		    (yyval.list) = NULL;
		}
#line 2131 "y.tab.c"
    break;

  case 51: /* StatementListOpt: %empty  */
#line 406 "wmlscript/wsgram.y"
                { (yyval.list) = ws_list_new(pctx); }
#line 2137 "y.tab.c"
    break;

  case 53: /* StatementList: Statement  */
#line 412 "wmlscript/wsgram.y"
                {
		    (yyval.list) = ws_list_new(pctx);
		    ws_list_append(pctx, (yyval.list), (yyvsp[0].stmt));
		}
#line 2146 "y.tab.c"
    break;

  case 54: /* StatementList: StatementList Statement  */
#line 417 "wmlscript/wsgram.y"
                { ws_list_append(pctx, (yyvsp[-1].list), (yyvsp[0].stmt)); }
#line 2152 "y.tab.c"
    break;

  case 55: /* VariableStatement: tVAR VariableDeclarationList ';'  */
#line 422 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_variable(pctx, (yylsp[-2]).first_line, (yyvsp[-1].list)); }
#line 2158 "y.tab.c"
    break;

  case 56: /* VariableStatement: tVAR error  */
#line 424 "wmlscript/wsgram.y"
                { ws_error_syntax(pctx, (yylsp[0]).first_line); }
#line 2164 "y.tab.c"
    break;

  case 57: /* VariableDeclarationList: VariableDeclaration  */
#line 429 "wmlscript/wsgram.y"
                {
		    (yyval.list) = ws_list_new(pctx);
		    ws_list_append(pctx, (yyval.list), (yyvsp[0].vardec));
		}
#line 2173 "y.tab.c"
    break;

  case 58: /* VariableDeclarationList: VariableDeclarationList ',' VariableDeclaration  */
#line 434 "wmlscript/wsgram.y"
                { ws_list_append(pctx, (yyvsp[-2].list), (yyvsp[0].vardec)); }
#line 2179 "y.tab.c"
    break;

  case 59: /* VariableDeclaration: tIDENTIFIER VariableInitializedOpt  */
#line 439 "wmlscript/wsgram.y"
                {
		    char *id = ws_f_strdup(((WsCompiler *) pctx)->pool_stree,
					   (yyvsp[-1].identifier));

		    ws_lexer_free_block(pctx, (yyvsp[-1].identifier));
		    if (id == NULL) {
		        ws_error_memory(pctx);
		        (yyval.vardec) = NULL;
		    } else
		        (yyval.vardec) = ws_variable_declaration(pctx, id, (yyvsp[0].expr));
		}
#line 2195 "y.tab.c"
    break;

  case 60: /* VariableInitializedOpt: %empty  */
#line 454 "wmlscript/wsgram.y"
                { (yyval.expr) = NULL; }
#line 2201 "y.tab.c"
    break;

  case 61: /* VariableInitializedOpt: '=' ConditionalExpression  */
#line 456 "wmlscript/wsgram.y"
                { (yyval.expr) = (yyvsp[0].expr); }
#line 2207 "y.tab.c"
    break;

  case 62: /* IfStatement: tIF '(' Expression ')' Statement tELSE Statement  */
#line 461 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_if(pctx, (yylsp[-6]).first_line, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 2213 "y.tab.c"
    break;

  case 63: /* IfStatement: tIF '(' Expression ')' Statement  */
#line 463 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_if(pctx, (yylsp[-4]).first_line, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL); }
#line 2219 "y.tab.c"
    break;

  case 64: /* IterationStatement: tWHILE '(' Expression ')' Statement  */
#line 468 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_while(pctx, (yylsp[-4]).first_line, (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2225 "y.tab.c"
    break;

  case 66: /* ForStatement: tFOR '(' ExpressionOpt ';' ExpressionOpt ';' ExpressionOpt ')' Statement  */
#line 475 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_for(pctx, (yylsp[-8]).first_line, NULL, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2231 "y.tab.c"
    break;

  case 67: /* ForStatement: tFOR '(' tVAR VariableDeclarationList ';' ExpressionOpt ';' ExpressionOpt ')' Statement  */
#line 478 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_for(pctx, (yylsp[-9]).first_line, (yyvsp[-6].list), NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2237 "y.tab.c"
    break;

  case 68: /* ReturnStatement: tRETURN ExpressionOpt ';'  */
#line 483 "wmlscript/wsgram.y"
                { (yyval.stmt) = ws_stmt_return(pctx, (yylsp[-2]).first_line, (yyvsp[-1].expr)); }
#line 2243 "y.tab.c"
    break;

  case 69: /* ExpressionOpt: %empty  */
#line 489 "wmlscript/wsgram.y"
                        { (yyval.expr) = NULL; }
#line 2249 "y.tab.c"
    break;

  case 72: /* Expression: Expression ',' AssignmentExpression  */
#line 497 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_comma(pctx, (yylsp[-1]).first_line, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2255 "y.tab.c"
    break;

  case 74: /* AssignmentExpression: tIDENTIFIER '=' AssignmentExpression  */
#line 503 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), '=', (yyvsp[0].expr)); }
#line 2261 "y.tab.c"
    break;

  case 75: /* AssignmentExpression: tIDENTIFIER tMULA AssignmentExpression  */
#line 505 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tMULA, (yyvsp[0].expr)); }
#line 2267 "y.tab.c"
    break;

  case 76: /* AssignmentExpression: tIDENTIFIER tDIVA AssignmentExpression  */
#line 507 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tDIVA, (yyvsp[0].expr)); }
#line 2273 "y.tab.c"
    break;

  case 77: /* AssignmentExpression: tIDENTIFIER tREMA AssignmentExpression  */
#line 509 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tREMA, (yyvsp[0].expr)); }
#line 2279 "y.tab.c"
    break;

  case 78: /* AssignmentExpression: tIDENTIFIER tADDA AssignmentExpression  */
#line 511 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tADDA, (yyvsp[0].expr)); }
#line 2285 "y.tab.c"
    break;

  case 79: /* AssignmentExpression: tIDENTIFIER tSUBA AssignmentExpression  */
#line 513 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tSUBA, (yyvsp[0].expr)); }
#line 2291 "y.tab.c"
    break;

  case 80: /* AssignmentExpression: tIDENTIFIER tLSHIFTA AssignmentExpression  */
#line 515 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tLSHIFTA, (yyvsp[0].expr)); }
#line 2297 "y.tab.c"
    break;

  case 81: /* AssignmentExpression: tIDENTIFIER tRSSHIFTA AssignmentExpression  */
#line 517 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tRSSHIFTA, (yyvsp[0].expr)); }
#line 2303 "y.tab.c"
    break;

  case 82: /* AssignmentExpression: tIDENTIFIER tRSZSHIFTA AssignmentExpression  */
#line 519 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tRSZSHIFTA, (yyvsp[0].expr)); }
#line 2309 "y.tab.c"
    break;

  case 83: /* AssignmentExpression: tIDENTIFIER tANDA AssignmentExpression  */
#line 521 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tANDA, (yyvsp[0].expr)); }
#line 2315 "y.tab.c"
    break;

  case 84: /* AssignmentExpression: tIDENTIFIER tXORA AssignmentExpression  */
#line 523 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tXORA, (yyvsp[0].expr)); }
#line 2321 "y.tab.c"
    break;

  case 85: /* AssignmentExpression: tIDENTIFIER tORA AssignmentExpression  */
#line 525 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tORA, (yyvsp[0].expr)); }
#line 2327 "y.tab.c"
    break;

  case 86: /* AssignmentExpression: tIDENTIFIER tIDIVA AssignmentExpression  */
#line 527 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_assign(pctx, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tIDIVA, (yyvsp[0].expr)); }
#line 2333 "y.tab.c"
    break;

  case 88: /* ConditionalExpression: LogicalORExpression '?' AssignmentExpression ':' AssignmentExpression  */
#line 533 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_conditional(pctx, (yylsp[-3]).first_line, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2339 "y.tab.c"
    break;

  case 90: /* LogicalORExpression: LogicalORExpression tOR LogicalANDExpression  */
#line 539 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_logical(pctx, (yylsp[-1]).first_line, WS_ASM_SCOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2345 "y.tab.c"
    break;

  case 92: /* LogicalANDExpression: LogicalANDExpression tAND BitwiseORExpression  */
#line 545 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_logical(pctx, (yylsp[-1]).first_line, WS_ASM_SCAND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2351 "y.tab.c"
    break;

  case 94: /* BitwiseORExpression: BitwiseORExpression '|' BitwiseXORExpression  */
#line 551 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2357 "y.tab.c"
    break;

  case 96: /* BitwiseXORExpression: BitwiseXORExpression '^' BitwiseANDExpression  */
#line 557 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_XOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2363 "y.tab.c"
    break;

  case 98: /* BitwiseANDExpression: BitwiseANDExpression '&' EqualityExpression  */
#line 563 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2369 "y.tab.c"
    break;

  case 100: /* EqualityExpression: EqualityExpression tEQ RelationalExpression  */
#line 569 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2375 "y.tab.c"
    break;

  case 101: /* EqualityExpression: EqualityExpression tNE RelationalExpression  */
#line 571 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_NE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2381 "y.tab.c"
    break;

  case 103: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 577 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2387 "y.tab.c"
    break;

  case 104: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 579 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2393 "y.tab.c"
    break;

  case 105: /* RelationalExpression: RelationalExpression tLE ShiftExpression  */
#line 581 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_LE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2399 "y.tab.c"
    break;

  case 106: /* RelationalExpression: RelationalExpression tGE ShiftExpression  */
#line 583 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_GE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2405 "y.tab.c"
    break;

  case 108: /* ShiftExpression: ShiftExpression tLSHIFT AdditiveExpression  */
#line 589 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2411 "y.tab.c"
    break;

  case 109: /* ShiftExpression: ShiftExpression tRSSHIFT AdditiveExpression  */
#line 591 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_RSSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2417 "y.tab.c"
    break;

  case 110: /* ShiftExpression: ShiftExpression tRSZSHIFT AdditiveExpression  */
#line 593 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_B_RSZSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2423 "y.tab.c"
    break;

  case 112: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 599 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_ADD, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2429 "y.tab.c"
    break;

  case 113: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 601 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2435 "y.tab.c"
    break;

  case 115: /* MultiplicativeExpression: MultiplicativeExpression '*' UnaryExpression  */
#line 607 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_MUL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2441 "y.tab.c"
    break;

  case 116: /* MultiplicativeExpression: MultiplicativeExpression '/' UnaryExpression  */
#line 609 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_DIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2447 "y.tab.c"
    break;

  case 117: /* MultiplicativeExpression: MultiplicativeExpression tIDIV UnaryExpression  */
#line 611 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_IDIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2453 "y.tab.c"
    break;

  case 118: /* MultiplicativeExpression: MultiplicativeExpression '%' UnaryExpression  */
#line 613 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_REM, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2459 "y.tab.c"
    break;

  case 120: /* UnaryExpression: tTYPEOF UnaryExpression  */
#line 619 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary(pctx, (yylsp[-1]).first_line, WS_ASM_TYPEOF, (yyvsp[0].expr)); }
#line 2465 "y.tab.c"
    break;

  case 121: /* UnaryExpression: tISVALID UnaryExpression  */
#line 621 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary(pctx, (yylsp[-1]).first_line, WS_ASM_ISVALID, (yyvsp[0].expr)); }
#line 2471 "y.tab.c"
    break;

  case 122: /* UnaryExpression: tPLUSPLUS tIDENTIFIER  */
#line 623 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary_var(pctx, (yylsp[-1]).first_line, WS_TRUE, (yyvsp[0].identifier)); }
#line 2477 "y.tab.c"
    break;

  case 123: /* UnaryExpression: tMINUSMINUS tIDENTIFIER  */
#line 625 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary_var(pctx, (yylsp[-1]).first_line, WS_FALSE, (yyvsp[0].identifier)); }
#line 2483 "y.tab.c"
    break;

  case 124: /* UnaryExpression: '+' UnaryExpression  */
#line 627 "wmlscript/wsgram.y"
                {
                    /* There is no direct way to compile unary `+'.
                     * It doesn't do anything except require type conversion
		     * (section 7.2, 7.3.2), and we do that by converting
		     * it to a binary expression: `UnaryExpression - 0'.
                     * Using `--UnaryExpression' would not be correct because
                     * it might overflow if UnaryExpression is the smallest
                     * possible integer value (see 6.2.7.1).
                     * Using `UnaryExpression + 0' would not be correct
                     * because binary `+' accepts strings, which makes the
		     * type conversion different.
                     */
                    (yyval.expr) = ws_expr_binary(pctx, (yylsp[-1]).first_line, WS_ASM_SUB, (yyvsp[0].expr),
                              ws_expr_const_integer(pctx, (yylsp[-1]).first_line, 0));
		}
#line 2503 "y.tab.c"
    break;

  case 125: /* UnaryExpression: '-' UnaryExpression  */
#line 643 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary(pctx, (yylsp[-1]).first_line, WS_ASM_UMINUS, (yyvsp[0].expr)); }
#line 2509 "y.tab.c"
    break;

  case 126: /* UnaryExpression: '~' UnaryExpression  */
#line 645 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary(pctx, (yylsp[-1]).first_line, WS_ASM_B_NOT, (yyvsp[0].expr)); }
#line 2515 "y.tab.c"
    break;

  case 127: /* UnaryExpression: '!' UnaryExpression  */
#line 647 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_unary(pctx, (yylsp[-1]).first_line, WS_ASM_NOT, (yyvsp[0].expr)); }
#line 2521 "y.tab.c"
    break;

  case 129: /* PostfixExpression: tIDENTIFIER tPLUSPLUS  */
#line 653 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_postfix_var(pctx, (yylsp[-1]).first_line, WS_TRUE, (yyvsp[-1].identifier)); }
#line 2527 "y.tab.c"
    break;

  case 130: /* PostfixExpression: tIDENTIFIER tMINUSMINUS  */
#line 655 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_postfix_var(pctx, (yylsp[-1]).first_line, WS_FALSE, (yyvsp[-1].identifier)); }
#line 2533 "y.tab.c"
    break;

  case 132: /* CallExpression: tIDENTIFIER Arguments  */
#line 661 "wmlscript/wsgram.y"
                {
		    WsFunctionHash *f = ws_function_hash(pctx, (yyvsp[-1].identifier));

		    /* Add an usage count for the local script function. */
		    if (f)
		      f->usage_count++;

		    (yyval.expr) = ws_expr_call(pctx, (yylsp[-1]).first_line, ' ', NULL, (yyvsp[-1].identifier), (yyvsp[0].list));
		}
#line 2547 "y.tab.c"
    break;

  case 133: /* CallExpression: tIDENTIFIER '#' tIDENTIFIER Arguments  */
#line 671 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_call(pctx, (yylsp[-1]).first_line, '#', (yyvsp[-3].identifier), (yyvsp[-1].identifier), (yyvsp[0].list)); }
#line 2553 "y.tab.c"
    break;

  case 134: /* CallExpression: tIDENTIFIER '.' tIDENTIFIER Arguments  */
#line 673 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_call(pctx, (yylsp[-1]).first_line, '.', (yyvsp[-3].identifier), (yyvsp[-1].identifier), (yyvsp[0].list)); }
#line 2559 "y.tab.c"
    break;

  case 135: /* PrimaryExpression: tIDENTIFIER  */
#line 678 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_symbol(pctx, (yylsp[0]).first_line, (yyvsp[0].identifier)); }
#line 2565 "y.tab.c"
    break;

  case 136: /* PrimaryExpression: tINVALID  */
#line 680 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_invalid(pctx, (yylsp[0]).first_line); }
#line 2571 "y.tab.c"
    break;

  case 137: /* PrimaryExpression: tTRUE  */
#line 682 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_true(pctx, (yylsp[0]).first_line); }
#line 2577 "y.tab.c"
    break;

  case 138: /* PrimaryExpression: tFALSE  */
#line 684 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_false(pctx, (yylsp[0]).first_line); }
#line 2583 "y.tab.c"
    break;

  case 139: /* PrimaryExpression: tINTEGER  */
#line 686 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_integer(pctx, (yylsp[0]).first_line, (yyvsp[0].integer)); }
#line 2589 "y.tab.c"
    break;

  case 140: /* PrimaryExpression: tFLOAT  */
#line 688 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_float(pctx, (yylsp[0]).first_line, (yyvsp[0].vfloat)); }
#line 2595 "y.tab.c"
    break;

  case 141: /* PrimaryExpression: tSTRING  */
#line 690 "wmlscript/wsgram.y"
                { (yyval.expr) = ws_expr_const_string(pctx, (yylsp[0]).first_line, (yyvsp[0].string)); }
#line 2601 "y.tab.c"
    break;

  case 142: /* PrimaryExpression: '(' Expression ')'  */
#line 692 "wmlscript/wsgram.y"
                { (yyval.expr) = (yyvsp[-1].expr); }
#line 2607 "y.tab.c"
    break;

  case 143: /* Arguments: '(' ')'  */
#line 697 "wmlscript/wsgram.y"
                { (yyval.list) = ws_list_new(pctx); }
#line 2613 "y.tab.c"
    break;

  case 144: /* Arguments: '(' ArgumentList ')'  */
#line 699 "wmlscript/wsgram.y"
                { (yyval.list) = (yyvsp[-1].list); }
#line 2619 "y.tab.c"
    break;

  case 145: /* ArgumentList: AssignmentExpression  */
#line 704 "wmlscript/wsgram.y"
                {
		    (yyval.list) = ws_list_new(pctx);
		    ws_list_append(pctx, (yyval.list), (yyvsp[0].expr));
		}
#line 2628 "y.tab.c"
    break;

  case 146: /* ArgumentList: ArgumentList ',' AssignmentExpression  */
#line 709 "wmlscript/wsgram.y"
                { ws_list_append(pctx, (yyvsp[-2].list), (yyvsp[0].expr)); }
#line 2634 "y.tab.c"
    break;


#line 2638 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, pctx, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, pctx);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, pctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, pctx, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, pctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, pctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 712 "wmlscript/wsgram.y"


void
ws_yy_error(YYLTYPE *locp, WsCompiler *compiler, char *msg)
{
#if WS_DEBUG
  fprintf(stderr, "*** %s:%ld: wsc: %s - this msg will be removed ***\n",
	  compiler->input_name, compiler->linenum, msg);
#endif /* WS_DEBUG */
}
