/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    AUTO = 258,                    /* AUTO  */
    ENUM = 259,                    /* ENUM  */
    RESTRICT = 260,                /* RESTRICT  */
    UNSIGNED = 261,                /* UNSIGNED  */
    BREAK = 262,                   /* BREAK  */
    EXTERN = 263,                  /* EXTERN  */
    RETURN = 264,                  /* RETURN  */
    VOID = 265,                    /* VOID  */
    CASE = 266,                    /* CASE  */
    FLOAT = 267,                   /* FLOAT  */
    SHORT = 268,                   /* SHORT  */
    VOLATILE = 269,                /* VOLATILE  */
    CHAR = 270,                    /* CHAR  */
    FOR = 271,                     /* FOR  */
    SIGNED = 272,                  /* SIGNED  */
    WHILE = 273,                   /* WHILE  */
    CONST = 274,                   /* CONST  */
    GOTO = 275,                    /* GOTO  */
    SIZEOF = 276,                  /* SIZEOF  */
    BOOL = 277,                    /* BOOL  */
    CONTINUE = 278,                /* CONTINUE  */
    IF = 279,                      /* IF  */
    STATIC = 280,                  /* STATIC  */
    COMPLEX = 281,                 /* COMPLEX  */
    DEFAULT = 282,                 /* DEFAULT  */
    INLINE = 283,                  /* INLINE  */
    STRUCT = 284,                  /* STRUCT  */
    IMAGINARY = 285,               /* IMAGINARY  */
    DO = 286,                      /* DO  */
    INT = 287,                     /* INT  */
    SWITCH = 288,                  /* SWITCH  */
    DOUBLE = 289,                  /* DOUBLE  */
    LONG = 290,                    /* LONG  */
    TYPEDEF = 291,                 /* TYPEDEF  */
    ELSE = 292,                    /* ELSE  */
    REGISTER = 293,                /* REGISTER  */
    UNION = 294,                   /* UNION  */
    LP = 295,                      /* LP  */
    RP = 296,                      /* RP  */
    LCP = 297,                     /* LCP  */
    RCP = 298,                     /* RCP  */
    LBP = 299,                     /* LBP  */
    RBP = 300,                     /* RBP  */
    SEMICOLON = 301,               /* SEMICOLON  */
    COMMA = 302,                   /* COMMA  */
    DOT = 303,                     /* DOT  */
    TERNARY_QM = 304,              /* TERNARY_QM  */
    TERNARY_SEP = 305,             /* TERNARY_SEP  */
    HASH = 306,                    /* HASH  */
    ARROW = 307,                   /* ARROW  */
    SPREAD_OP = 308,               /* SPREAD_OP  */
    LOGICAL_AND = 309,             /* LOGICAL_AND  */
    LOGICAL_OR = 310,              /* LOGICAL_OR  */
    LOGICAL_NOT = 311,             /* LOGICAL_NOT  */
    PLUS_FIX = 312,                /* PLUS_FIX  */
    SUB_FIX = 313,                 /* SUB_FIX  */
    LOGICAL_RIGHT_SHIFT = 314,     /* LOGICAL_RIGHT_SHIFT  */
    LOGICAL_LEFT_SHIFT = 315,      /* LOGICAL_LEFT_SHIFT  */
    PLUS = 316,                    /* PLUS  */
    SUB = 317,                     /* SUB  */
    STAR = 318,                    /* STAR  */
    DIV = 319,                     /* DIV  */
    MOD = 320,                     /* MOD  */
    BITWISE_AND = 321,             /* BITWISE_AND  */
    BITWISE_OR = 322,              /* BITWISE_OR  */
    BITWISE_XOR = 323,             /* BITWISE_XOR  */
    BITWISE_NOT = 324,             /* BITWISE_NOT  */
    ASS_EQ = 325,                  /* ASS_EQ  */
    MUL_EQ = 326,                  /* MUL_EQ  */
    DIV_EQ = 327,                  /* DIV_EQ  */
    MOD_EQ = 328,                  /* MOD_EQ  */
    PLUS_EQ = 329,                 /* PLUS_EQ  */
    SUB_EQ = 330,                  /* SUB_EQ  */
    SLR_EQ = 331,                  /* SLR_EQ  */
    SLL_EQ = 332,                  /* SLL_EQ  */
    AND_EQ = 333,                  /* AND_EQ  */
    XOR_EQ = 334,                  /* XOR_EQ  */
    OR_EQ = 335,                   /* OR_EQ  */
    REL_GT = 336,                  /* REL_GT  */
    REL_LT = 337,                  /* REL_LT  */
    REL_LTE = 338,                 /* REL_LTE  */
    REL_GTE = 339,                 /* REL_GTE  */
    REL_EQ = 340,                  /* REL_EQ  */
    REL_NEQ = 341,                 /* REL_NEQ  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    STRING_LITERAL = 343,          /* STRING_LITERAL  */
    CONSTANT = 344                 /* CONSTANT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define ENUM 259
#define RESTRICT 260
#define UNSIGNED 261
#define BREAK 262
#define EXTERN 263
#define RETURN 264
#define VOID 265
#define CASE 266
#define FLOAT 267
#define SHORT 268
#define VOLATILE 269
#define CHAR 270
#define FOR 271
#define SIGNED 272
#define WHILE 273
#define CONST 274
#define GOTO 275
#define SIZEOF 276
#define BOOL 277
#define CONTINUE 278
#define IF 279
#define STATIC 280
#define COMPLEX 281
#define DEFAULT 282
#define INLINE 283
#define STRUCT 284
#define IMAGINARY 285
#define DO 286
#define INT 287
#define SWITCH 288
#define DOUBLE 289
#define LONG 290
#define TYPEDEF 291
#define ELSE 292
#define REGISTER 293
#define UNION 294
#define LP 295
#define RP 296
#define LCP 297
#define RCP 298
#define LBP 299
#define RBP 300
#define SEMICOLON 301
#define COMMA 302
#define DOT 303
#define TERNARY_QM 304
#define TERNARY_SEP 305
#define HASH 306
#define ARROW 307
#define SPREAD_OP 308
#define LOGICAL_AND 309
#define LOGICAL_OR 310
#define LOGICAL_NOT 311
#define PLUS_FIX 312
#define SUB_FIX 313
#define LOGICAL_RIGHT_SHIFT 314
#define LOGICAL_LEFT_SHIFT 315
#define PLUS 316
#define SUB 317
#define STAR 318
#define DIV 319
#define MOD 320
#define BITWISE_AND 321
#define BITWISE_OR 322
#define BITWISE_XOR 323
#define BITWISE_NOT 324
#define ASS_EQ 325
#define MUL_EQ 326
#define DIV_EQ 327
#define MOD_EQ 328
#define PLUS_EQ 329
#define SUB_EQ 330
#define SLR_EQ 331
#define SLL_EQ 332
#define AND_EQ 333
#define XOR_EQ 334
#define OR_EQ 335
#define REL_GT 336
#define REL_LT 337
#define REL_LTE 338
#define REL_GTE 339
#define REL_EQ 340
#define REL_NEQ 341
#define IDENTIFIER 342
#define STRING_LITERAL 343
#define CONSTANT 344

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "tinyC2_22CS30063_22CS30066.y"

    parsetree tree;

#line 249 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
