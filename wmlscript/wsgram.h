/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 254 "y.tab.h"

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
