/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 8 "tinyC2_22CS30063_22CS30066.y"

    #include "tinyC2_22CS30063_22CS30066.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(char *);
    int yylex();

#line 80 "y.tab.c"

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
#line 17 "tinyC2_22CS30063_22CS30066.y"

    parsetree tree;

#line 315 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_ENUM = 4,                       /* ENUM  */
  YYSYMBOL_RESTRICT = 5,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 6,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_EXTERN = 8,                     /* EXTERN  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_CASE = 11,                      /* CASE  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_SHORT = 13,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 14,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SIGNED = 17,                    /* SIGNED  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_CONST = 19,                     /* CONST  */
  YYSYMBOL_GOTO = 20,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 21,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 22,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_STATIC = 25,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 26,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 28,                    /* INLINE  */
  YYSYMBOL_STRUCT = 29,                    /* STRUCT  */
  YYSYMBOL_IMAGINARY = 30,                 /* IMAGINARY  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_INT = 32,                       /* INT  */
  YYSYMBOL_SWITCH = 33,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 34,                    /* DOUBLE  */
  YYSYMBOL_LONG = 35,                      /* LONG  */
  YYSYMBOL_TYPEDEF = 36,                   /* TYPEDEF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_REGISTER = 38,                  /* REGISTER  */
  YYSYMBOL_UNION = 39,                     /* UNION  */
  YYSYMBOL_LP = 40,                        /* LP  */
  YYSYMBOL_RP = 41,                        /* RP  */
  YYSYMBOL_LCP = 42,                       /* LCP  */
  YYSYMBOL_RCP = 43,                       /* RCP  */
  YYSYMBOL_LBP = 44,                       /* LBP  */
  YYSYMBOL_RBP = 45,                       /* RBP  */
  YYSYMBOL_SEMICOLON = 46,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 47,                     /* COMMA  */
  YYSYMBOL_DOT = 48,                       /* DOT  */
  YYSYMBOL_TERNARY_QM = 49,                /* TERNARY_QM  */
  YYSYMBOL_TERNARY_SEP = 50,               /* TERNARY_SEP  */
  YYSYMBOL_HASH = 51,                      /* HASH  */
  YYSYMBOL_ARROW = 52,                     /* ARROW  */
  YYSYMBOL_SPREAD_OP = 53,                 /* SPREAD_OP  */
  YYSYMBOL_LOGICAL_AND = 54,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 55,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_NOT = 56,               /* LOGICAL_NOT  */
  YYSYMBOL_PLUS_FIX = 57,                  /* PLUS_FIX  */
  YYSYMBOL_SUB_FIX = 58,                   /* SUB_FIX  */
  YYSYMBOL_LOGICAL_RIGHT_SHIFT = 59,       /* LOGICAL_RIGHT_SHIFT  */
  YYSYMBOL_LOGICAL_LEFT_SHIFT = 60,        /* LOGICAL_LEFT_SHIFT  */
  YYSYMBOL_PLUS = 61,                      /* PLUS  */
  YYSYMBOL_SUB = 62,                       /* SUB  */
  YYSYMBOL_STAR = 63,                      /* STAR  */
  YYSYMBOL_DIV = 64,                       /* DIV  */
  YYSYMBOL_MOD = 65,                       /* MOD  */
  YYSYMBOL_BITWISE_AND = 66,               /* BITWISE_AND  */
  YYSYMBOL_BITWISE_OR = 67,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_XOR = 68,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_NOT = 69,               /* BITWISE_NOT  */
  YYSYMBOL_ASS_EQ = 70,                    /* ASS_EQ  */
  YYSYMBOL_MUL_EQ = 71,                    /* MUL_EQ  */
  YYSYMBOL_DIV_EQ = 72,                    /* DIV_EQ  */
  YYSYMBOL_MOD_EQ = 73,                    /* MOD_EQ  */
  YYSYMBOL_PLUS_EQ = 74,                   /* PLUS_EQ  */
  YYSYMBOL_SUB_EQ = 75,                    /* SUB_EQ  */
  YYSYMBOL_SLR_EQ = 76,                    /* SLR_EQ  */
  YYSYMBOL_SLL_EQ = 77,                    /* SLL_EQ  */
  YYSYMBOL_AND_EQ = 78,                    /* AND_EQ  */
  YYSYMBOL_XOR_EQ = 79,                    /* XOR_EQ  */
  YYSYMBOL_OR_EQ = 80,                     /* OR_EQ  */
  YYSYMBOL_REL_GT = 81,                    /* REL_GT  */
  YYSYMBOL_REL_LT = 82,                    /* REL_LT  */
  YYSYMBOL_REL_LTE = 83,                   /* REL_LTE  */
  YYSYMBOL_REL_GTE = 84,                   /* REL_GTE  */
  YYSYMBOL_REL_EQ = 85,                    /* REL_EQ  */
  YYSYMBOL_REL_NEQ = 86,                   /* REL_NEQ  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 88,            /* STRING_LITERAL  */
  YYSYMBOL_CONSTANT = 89,                  /* CONSTANT  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_Start = 91,                     /* Start  */
  YYSYMBOL_primary_expression = 92,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 93,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 94,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 95, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 96,          /* unary_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_cast_expression = 98,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 99, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 100,      /* additive_expression  */
  YYSYMBOL_shift_expression = 101,         /* shift_expression  */
  YYSYMBOL_relational_expression = 102,    /* relational_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_AND_expression = 104,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 105,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 106,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 107,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 108,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 109,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_assignment_expression_opt = 111, /* assignment_expression_opt  */
  YYSYMBOL_assignment_operator = 112,      /* assignment_operator  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_expression_opt = 114,           /* expression_opt  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 117,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 118, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 119,     /* init_declarator_list  */
  YYSYMBOL_init_declarator_list_opt = 120, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator = 121,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 122,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 123,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 124, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 125, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 126,           /* type_qualifier  */
  YYSYMBOL_fuction_specifier = 127,        /* fuction_specifier  */
  YYSYMBOL_declarator = 128,               /* declarator  */
  YYSYMBOL_direct_declarator = 129,        /* direct_declarator  */
  YYSYMBOL_pointer = 130,                  /* pointer  */
  YYSYMBOL_pointer_opt = 131,              /* pointer_opt  */
  YYSYMBOL_type_qualifier_list = 132,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 133,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 134,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 135,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 136,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 137,          /* identifier_list  */
  YYSYMBOL_identifier_list_opt = 138,      /* identifier_list_opt  */
  YYSYMBOL_type_name = 139,                /* type_name  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_designation = 142,              /* designation  */
  YYSYMBOL_designation_opt = 143,          /* designation_opt  */
  YYSYMBOL_designator_list = 144,          /* designator_list  */
  YYSYMBOL_designator = 145,               /* designator  */
  YYSYMBOL_statement = 146,                /* statement  */
  YYSYMBOL_labeled_statement = 147,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 148,       /* compound_statement  */
  YYSYMBOL_block_item_list = 149,          /* block_item_list  */
  YYSYMBOL_block_item_list_opt = 150,      /* block_item_list_opt  */
  YYSYMBOL_block_item = 151,               /* block_item  */
  YYSYMBOL_expression_statement = 152,     /* expression_statement  */
  YYSYMBOL_selection_statement = 153,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 154,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 155,           /* jump_statement  */
  YYSYMBOL_translation_unit = 156,         /* translation_unit  */
  YYSYMBOL_external_declaration = 157,     /* external_declaration  */
  YYSYMBOL_function_definition = 158,      /* function_definition  */
  YYSYMBOL_declaration_list = 159,         /* declaration_list  */
  YYSYMBOL_declaration_list_opt = 160      /* declaration_list_opt  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1020

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   344


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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    50,    56,    57,    58,    59,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    75,    76,    80,
      81,    85,    86,    87,    88,    89,    90,    94,    95,    96,
      97,    98,    99,   103,   104,   108,   109,   110,   111,   115,
     116,   117,   121,   122,   123,   127,   128,   129,   130,   131,
     135,   136,   137,   141,   142,   146,   147,   151,   152,   155,
     156,   160,   161,   165,   166,   170,   171,   175,   176,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     194,   195,   199,   200,   204,   209,   213,   214,   215,   216,
     220,   221,   225,   226,   230,   231,   235,   236,   240,   241,
     242,   243,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   262,   263,   267,   268,   272,   273,
     274,   278,   282,   286,   287,   288,   289,   290,   291,   292,
     293,   297,   298,   302,   303,   307,   308,   312,   313,   317,
     318,   322,   323,   327,   328,   332,   333,   337,   338,   342,
     346,   347,   348,   352,   353,   357,   361,   362,   366,   367,
     371,   372,   377,   378,   379,   380,   381,   382,   386,   387,
     388,   392,   396,   397,   401,   402,   406,   407,   411,   415,
     416,   417,   421,   422,   423,   424,   428,   429,   430,   431,
     437,   438,   442,   443,   447,   451,   452,   456,   457
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "ENUM",
  "RESTRICT", "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE",
  "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST",
  "GOTO", "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX",
  "DEFAULT", "INLINE", "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH",
  "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER", "UNION", "LP", "RP",
  "LCP", "RCP", "LBP", "RBP", "SEMICOLON", "COMMA", "DOT", "TERNARY_QM",
  "TERNARY_SEP", "HASH", "ARROW", "SPREAD_OP", "LOGICAL_AND", "LOGICAL_OR",
  "LOGICAL_NOT", "PLUS_FIX", "SUB_FIX", "LOGICAL_RIGHT_SHIFT",
  "LOGICAL_LEFT_SHIFT", "PLUS", "SUB", "STAR", "DIV", "MOD", "BITWISE_AND",
  "BITWISE_OR", "BITWISE_XOR", "BITWISE_NOT", "ASS_EQ", "MUL_EQ", "DIV_EQ",
  "MOD_EQ", "PLUS_EQ", "SUB_EQ", "SLR_EQ", "SLL_EQ", "AND_EQ", "XOR_EQ",
  "OR_EQ", "REL_GT", "REL_LT", "REL_LTE", "REL_GTE", "REL_EQ", "REL_NEQ",
  "IDENTIFIER", "STRING_LITERAL", "CONSTANT", "$accept", "Start",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression",
  "assignment_expression_opt", "assignment_operator", "expression",
  "expression_opt", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator_list_opt", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "fuction_specifier",
  "declarator", "direct_declarator", "pointer", "pointer_opt",
  "type_qualifier_list", "type_qualifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "identifier_list_opt", "type_name", "initializer", "initializer_list",
  "designation", "designation_opt", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     982,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,    41,  -183,   -15,   982,   982,   982,   982,   982,  -183,
    -183,  -183,    62,    -3,    20,  -183,   904,  -183,   -26,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,    62,    -4,    -4,  -183,
     659,  -183,   -15,   982,    27,    -4,  -183,   -25,  -183,  -183,
    -183,    22,   731,   502,    92,  -183,   745,   745,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,    93,   115,   783,
    -183,    98,   117,   137,    88,   114,    28,    33,    37,    70,
      13,  -183,  -183,  -183,  -183,   248,  -183,   105,   589,    18,
     502,  -183,  -183,    39,   209,  -183,   209,   111,   783,    42,
      95,  -183,   659,   -31,  -183,   502,  -183,  -183,   783,   783,
      71,    86,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,   783,  -183,  -183,   783,   783,
     783,   783,   783,   783,   783,   783,   783,   783,   783,   783,
     783,   783,   783,   783,   783,   783,   783,   121,   783,   783,
     136,   165,   126,   179,   187,   182,   621,   193,   184,   189,
     194,  -183,  -183,  -183,  -183,   335,   199,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,    -5,   204,   200,  -183,   201,   205,
      62,    60,   817,   208,  -183,   783,  -183,  -183,  -183,   693,
    -183,   232,  -183,  -183,    34,  -183,  -183,  -183,   243,   203,
     244,  -183,   -27,  -183,  -183,  -183,  -183,  -183,  -183,    98,
      98,   117,   117,   137,   137,   137,   137,    88,    88,   114,
      28,    33,    37,   -40,    70,  -183,   241,   239,   422,   783,
     246,  -183,   783,   621,   275,   783,   621,  -183,  -183,  -183,
    -183,  -183,   945,   207,  -183,   783,   783,   250,  -183,   251,
     255,  -183,    92,  -183,  -183,  -183,   659,   255,   783,  -183,
    -183,   783,  -183,   621,   252,   783,    48,  -183,    55,  -183,
     259,    56,  -183,  -183,  -183,  -183,   256,   257,  -183,  -183,
     106,  -183,  -183,  -183,  -183,   783,   254,   621,   621,   783,
     621,  -183,  -183,  -183,    91,   261,   783,  -183,   266,    84,
    -183,  -183,   783,   267,   621,   269,   271,   621,  -183,  -183,
     621,  -183,  -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   100,   119,   110,    98,   102,   107,   104,   120,   103,
     109,   118,   111,    99,   112,   121,   113,   105,   108,   106,
     101,     0,   193,   134,    91,    91,    91,    91,     2,   190,
     192,     1,   138,    94,     0,    92,    96,   133,     0,    90,
      87,    86,    88,    89,   191,   135,   137,   131,   134,    85,
       0,   195,   134,   197,     0,   134,   123,   122,   136,   132,
      93,    96,     0,     0,   157,    32,     0,     0,    29,    30,
      28,    27,    31,     4,     6,     5,     8,    21,    33,     0,
      35,    39,    42,    45,    50,    53,    55,    57,    59,    61,
      63,    65,   150,    97,   196,    83,   194,     0,   148,   138,
       0,    25,    80,     0,   117,   149,   117,     0,     0,     0,
       0,   156,     0,     0,   158,     0,    22,    23,    20,     0,
       0,     0,    13,    14,    69,    70,    71,    72,    73,    74,
      79,    78,    75,    76,    77,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     4,    82,
       0,   176,   177,   162,   163,    83,     0,   172,   164,   165,
     166,   167,   124,   145,   134,     0,   139,   141,   147,     0,
     138,   137,    68,     0,     7,     0,   116,   114,   115,     0,
      84,     0,   161,   151,   157,   153,   155,   159,     0,    19,
       0,    17,     0,    11,    12,    66,    36,    37,    38,    40,
      41,    44,    43,    47,    46,    48,    49,    51,    52,    54,
      56,    58,    60,     0,    62,   188,     0,     0,    83,     0,
       0,   187,     0,    83,     0,     0,    83,   178,   173,   171,
     143,   129,     0,     0,   130,     0,     0,    28,    67,     0,
      26,    81,   157,    34,   160,   152,     0,     0,     0,    10,
       9,     0,   189,    83,     0,    83,     0,   186,     0,   170,
       0,     0,   168,   140,   142,   146,     0,     0,   128,   125,
       0,   154,    18,    64,   169,    83,     0,    83,    83,     0,
      83,   126,   127,    15,   157,     0,    83,   182,   179,     0,
     181,    16,    83,     0,    83,     0,     0,    83,   180,   183,
      83,   185,   184
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,  -183,  -183,   -33,  -183,   -67,    61,
      73,    64,    80,   162,   164,   166,   167,   168,  -183,  -103,
     -48,  -183,  -183,   -62,  -147,   159,   -32,     0,   129,  -183,
    -183,   272,  -183,   -55,   -52,   216,   -16,  -183,   -20,  -183,
     276,  -183,   226,   -90,  -183,  -183,    74,  -183,  -183,   -60,
    -106,    65,  -183,  -182,  -183,   215,  -116,  -183,   277,  -183,
    -183,   154,  -183,  -183,  -183,  -183,  -183,   302,  -183,  -183,
    -183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    76,    77,   209,   210,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     102,   259,   135,   169,   170,   201,    22,    52,    40,    33,
      34,    35,    24,    25,   105,   197,    26,    27,    61,    57,
      37,    38,    46,    47,   185,   186,   187,   188,   189,   107,
      93,   110,   111,   112,   113,   114,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    28,    29,    30,    53,
      54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   103,    92,    36,    51,   200,   205,   195,   104,   192,
     271,   236,   137,   108,    55,    98,    45,   109,   270,    99,
     195,    94,   266,     2,    39,    39,    39,    39,    23,   101,
      58,   -95,     8,   116,   117,    97,  -144,    11,   103,   206,
     193,    31,  -144,   190,    48,   104,   136,   106,    32,   104,
     244,   104,   196,   103,   196,   208,   200,   212,    32,    32,
     104,    56,   155,   171,    92,     2,    49,     2,   156,    95,
     211,   216,   217,   218,     8,   136,     8,   265,   108,    11,
     194,    11,   109,    45,   106,   256,   195,   215,   106,   297,
     106,   274,    50,   233,   151,   195,   298,   300,   184,   106,
     255,   152,   195,   195,   153,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   266,   136,   154,   315,   136,   279,   296,   202,
     282,   195,   263,   118,   311,   108,   108,   119,   203,   109,
     109,   120,   204,   171,   258,   121,   182,   261,   305,   303,
     122,   123,   199,   304,    41,    42,    43,   294,   213,   313,
     291,   138,   139,   140,   250,   316,   136,   235,   293,   145,
     146,   147,   148,   214,    45,    58,   238,   276,   141,   142,
     278,   307,   308,   281,   310,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   143,   144,   318,   149,
     150,   321,   219,   220,   322,   239,   275,   286,   287,   223,
     224,   225,   226,   240,     2,     3,   221,   222,    92,     5,
     292,     6,     7,     8,     9,   241,    10,   242,    11,   227,
     228,    12,   243,   245,   246,    14,   195,   309,   136,    16,
     247,    17,   249,    18,    19,   251,   254,   252,   253,   260,
     268,     1,   184,     2,     3,   157,     4,   158,     5,   159,
       6,     7,     8,     9,   160,    10,   161,    11,   162,    62,
      12,   163,   164,    13,    14,   165,    15,   264,    16,   166,
      17,   167,    18,    19,   267,   269,    20,   272,    63,   273,
      95,  -175,   277,   280,   285,   288,   289,   262,   295,   299,
     306,   301,   302,   314,    65,    66,    67,   312,   317,    68,
      69,    70,   320,   229,    71,   319,   230,    72,   237,   231,
      60,   232,   198,    59,   234,   191,   284,   290,   207,   248,
      44,    96,     0,     0,     0,   168,    74,    75,     1,     0,
       2,     3,   157,     4,   158,     5,   159,     6,     7,     8,
       9,   160,    10,   161,    11,   162,    62,    12,   163,   164,
      13,    14,   165,    15,     0,    16,   166,    17,   167,    18,
      19,     0,     0,    20,     0,    63,     0,    95,  -174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,    67,     0,     0,    68,    69,    70,     0,
       0,    71,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,    74,    75,     1,     0,     2,     3,     0,
       4,     0,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,    62,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,    18,    19,     0,     0,
      20,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,     0,     0,    68,    69,    70,     0,     0,    71,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,    73,
      74,    75,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,    62,    12,     0,     0,     0,    14,     0,
       0,     0,    16,     0,    17,     0,    18,    19,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,     0,     0,    68,    69,    70,     0,     0,    71,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,     1,     0,     2,     3,     0,     4,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
       0,    12,     0,     0,    13,    14,     0,    15,     0,    16,
       0,    17,     0,    18,    19,     0,     0,    20,   157,     0,
     158,     0,   159,     0,     0,     0,     0,   160,     0,   161,
       0,   162,    62,     0,   163,   164,     0,     0,   165,     0,
       0,     0,   166,     0,   167,     0,     0,     0,     0,     0,
       0,    63,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,    65,    66,    67,
      62,     0,    68,    69,    70,     0,     0,    71,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,     0,     0,     0,     0,     0,     0,   168,    74,
      75,     0,     0,     0,    62,    65,    66,    67,     0,     0,
      68,    69,    70,     0,     0,    71,     0,     0,    72,     0,
       0,     0,     0,    63,     0,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    65,
      66,    67,    62,     0,    68,    69,    70,     0,     0,    71,
       0,     0,    72,     0,     0,     0,    62,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,     0,     0,   115,     0,    65,    66,    67,
       0,     0,    68,    69,    70,     0,     0,    71,     0,     0,
      72,    65,    66,    67,    62,     0,    68,    69,    70,     0,
       0,    71,     0,     0,    72,     0,     0,     0,    73,    74,
      75,     0,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,     0,     0,     0,    62,    65,
      66,    67,     0,     0,    68,    69,    70,     0,     0,    71,
       0,     0,    72,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    65,    66,    67,     0,     0,    68,    69,
     257,     0,     0,    71,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,     1,     0,     2,
       3,     0,     4,     0,     5,     0,     6,     7,     8,     9,
       0,    10,     0,    11,     0,     0,    12,     0,     0,    13,
      14,     0,    15,     0,    16,     0,    17,     0,    18,    19,
       0,     0,    20,     0,     0,     0,  -198,     0,     1,     0,
       2,     3,     0,     4,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
      13,    14,     0,    15,    50,    16,     0,    17,     0,    18,
      19,     0,     0,    20,     0,     1,     0,     2,     3,     0,
       4,     0,     5,     0,     6,     7,     8,     9,   283,    10,
       0,    11,     0,     0,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,    18,    19,     0,     0,
      20
};

static const yytype_int16 yycheck[] =
{
       0,    63,    50,    23,    36,   108,   112,    47,    63,    99,
      50,   158,    79,    44,    40,    40,    32,    48,    45,    44,
      47,    53,   204,     5,    24,    25,    26,    27,    28,    62,
      46,    46,    14,    66,    67,    55,    41,    19,   100,    70,
     100,     0,    47,    25,    47,   100,    79,    63,    63,   104,
     166,   106,   104,   115,   106,   115,   159,   119,    63,    63,
     115,    87,    49,    95,   112,     5,    46,     5,    55,    42,
     118,   138,   139,   140,    14,   108,    14,    43,    44,    19,
      41,    19,    48,    99,   100,    25,    47,   135,   104,    41,
     106,   238,    70,   155,    66,    47,    41,    41,    98,   115,
     190,    68,    47,    47,    67,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   304,   156,    54,    41,   159,   243,   275,    87,
     246,    47,   199,    40,    43,    44,    44,    44,    43,    48,
      48,    48,    47,   175,   192,    52,    41,   195,   295,    43,
      57,    58,    41,    47,    25,    26,    27,   273,    87,   306,
     266,    63,    64,    65,   184,   312,   199,    46,   271,    81,
      82,    83,    84,    87,   190,   191,    40,   239,    61,    62,
     242,   297,   298,   245,   300,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    59,    60,   314,    85,
      86,   317,   141,   142,   320,    40,   238,   255,   256,   145,
     146,   147,   148,    87,     5,     6,   143,   144,   266,    10,
     268,    12,    13,    14,    15,    46,    17,    40,    19,   149,
     150,    22,    50,    40,    50,    26,    47,   299,   271,    30,
      46,    32,    43,    34,    35,    41,    41,    47,    47,    41,
      47,     3,   252,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    45,    30,    31,
      32,    33,    34,    35,    41,    41,    38,    46,    40,    50,
      42,    43,    46,    18,    87,    45,    45,    42,    46,    40,
      46,    45,    45,    37,    56,    57,    58,    46,    41,    61,
      62,    63,    41,   151,    66,    46,   152,    69,   159,   153,
      48,   154,   106,    47,   156,    99,   252,   262,   113,   175,
      28,    54,    -1,    -1,    -1,    87,    88,    89,     3,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,     3,    -1,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    87,
      88,    89,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,     3,    -1,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    38,     7,    -1,
       9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,
      -1,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    56,    57,    58,
      21,    -1,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    -1,    -1,    -1,    21,    56,    57,    58,    -1,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    56,
      57,    58,    21,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    -1,    -1,    40,    -1,    56,    57,    58,
      -1,    -1,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      69,    56,    57,    58,    21,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    87,    88,
      89,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    -1,    -1,    -1,    21,    56,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    56,    57,    58,    -1,    -1,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,     3,    -1,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    -1,     3,    -1,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    26,    -1,    28,    70,    30,    -1,    32,    -1,    34,
      35,    -1,    -1,    38,    -1,     3,    -1,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    53,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    13,    14,    15,
      17,    19,    22,    25,    26,    28,    30,    32,    34,    35,
      38,    91,   116,   117,   122,   123,   126,   127,   156,   157,
     158,     0,    63,   119,   120,   121,   128,   130,   131,   117,
     118,   118,   118,   118,   157,   126,   132,   133,    47,    46,
      70,   116,   117,   159,   160,    40,    87,   129,   126,   130,
     121,   128,    21,    40,    42,    56,    57,    58,    61,    62,
      63,    66,    69,    87,    88,    89,    92,    93,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   140,   116,    42,   148,   128,    40,    44,
      40,    96,   110,   113,   123,   124,   126,   139,    44,    48,
     141,   142,   143,   144,   145,    40,    96,    96,    40,    44,
      48,    52,    57,    58,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   112,    96,    98,    63,    64,
      65,    61,    62,    59,    60,    81,    82,    83,    84,    85,
      86,    66,    68,    67,    54,    49,    55,     7,     9,    11,
      16,    18,    20,    23,    24,    27,    31,    33,    87,   113,
     114,   116,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    41,    87,   117,   134,   135,   136,   137,   138,
      25,   132,   133,   139,    41,    47,   124,   125,   125,    41,
     109,   115,    87,    43,    47,   140,    70,   145,   139,    94,
      95,   110,   113,    87,    87,   110,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   102,   103,
     104,   105,   106,   113,   107,    46,   114,   115,    40,    40,
      87,    46,    40,    50,   146,    40,    50,    46,   151,    43,
     128,    41,    47,    47,    41,   133,    25,    63,   110,   111,
      41,   110,    42,    98,    45,    43,   143,    41,    47,    41,
      45,    50,    46,    50,   114,   116,   113,    46,   113,   146,
      18,   113,   146,    53,   136,    87,   110,   110,    45,    45,
     141,   140,   110,   109,   146,    46,   114,    41,    41,    40,
      41,    45,    45,    43,    47,   114,    46,   146,   146,   113,
     146,    43,    46,   114,    37,    41,   114,    41,   146,    46,
      41,   146,   146
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   102,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   115,   116,   117,   117,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   127,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     140,   140,   140,   141,   141,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   153,   154,   154,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       0,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     0,     1,     3,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     1,     1,
       1,     1,     2,     1,     3,     5,     6,     6,     5,     4,
       4,     2,     3,     1,     0,     1,     2,     1,     0,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     0,     1,
       1,     3,     4,     2,     4,     2,     1,     0,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     2,     1,     0,     1,     1,     2,     5,
       7,     5,     5,     7,     9,     8,     3,     2,     2,     3,
       1,     2,     1,     1,     4,     1,     2,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Start: translation_unit  */
#line 49 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("START SYMBOL"); add_child((yyval.tree), (yyvsp[0].tree)); printf("The Parse Tree:\n"); print_tree((yyval.tree),0);}
#line 1855 "y.tab.c"
    break;

  case 3: /* Start: %empty  */
#line 50 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("START SYMBOL"); add_child((yyval.tree), create_node("(empty transition)")); printf("The Parse Tree:\n"); print_tree((yyval.tree),0);}
#line 1861 "y.tab.c"
    break;

  case 4: /* primary_expression: IDENTIFIER  */
#line 56 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("primary_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1867 "y.tab.c"
    break;

  case 5: /* primary_expression: CONSTANT  */
#line 57 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("primary_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1873 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 58 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("primary_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1879 "y.tab.c"
    break;

  case 7: /* primary_expression: LP expression RP  */
#line 59 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("primary_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1885 "y.tab.c"
    break;

  case 8: /* postfix_expression: primary_expression  */
#line 63 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1891 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LBP expression RBP  */
#line 64 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1897 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LP argument_expression_list_opt RP  */
#line 65 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1903 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 66 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1909 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 67 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1915 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression PLUS_FIX  */
#line 68 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1921 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression SUB_FIX  */
#line 69 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1927 "y.tab.c"
    break;

  case 15: /* postfix_expression: LP type_name RP LCP initializer_list RCP  */
#line 70 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1933 "y.tab.c"
    break;

  case 16: /* postfix_expression: LP type_name RP LCP initializer_list COMMA RCP  */
#line 71 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("postfix_expression"); add_child((yyval.tree), (yyvsp[-6].tree)); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1939 "y.tab.c"
    break;

  case 17: /* argument_expression_list: assignment_expression  */
#line 75 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("argument_expression_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1945 "y.tab.c"
    break;

  case 18: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 76 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("argument_expression_list"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1951 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 80 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("argument_expression_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1957 "y.tab.c"
    break;

  case 20: /* argument_expression_list_opt: %empty  */
#line 81 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("argument_expression_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 1963 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 85 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1969 "y.tab.c"
    break;

  case 22: /* unary_expression: PLUS_FIX unary_expression  */
#line 86 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1975 "y.tab.c"
    break;

  case 23: /* unary_expression: SUB_FIX unary_expression  */
#line 87 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1981 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 88 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1987 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 89 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1993 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF LP type_name RP  */
#line 90 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_expression"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 1999 "y.tab.c"
    break;

  case 27: /* unary_operator: BITWISE_AND  */
#line 94 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2005 "y.tab.c"
    break;

  case 28: /* unary_operator: STAR  */
#line 95 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2011 "y.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 96 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2017 "y.tab.c"
    break;

  case 30: /* unary_operator: SUB  */
#line 97 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2023 "y.tab.c"
    break;

  case 31: /* unary_operator: BITWISE_NOT  */
#line 98 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2029 "y.tab.c"
    break;

  case 32: /* unary_operator: LOGICAL_NOT  */
#line 99 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("unary_operator"); add_child((yyval.tree),(yyvsp[0].tree));}
#line 2035 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 103 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("cast_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2041 "y.tab.c"
    break;

  case 34: /* cast_expression: LP type_name RP cast_expression  */
#line 104 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("cast_expression"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2047 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 108 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("multiplicative_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2053 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 109 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("multiplicative_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2059 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 110 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("multiplicative_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2065 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 111 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("multiplicative_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2071 "y.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 115 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("additive_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2077 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 116 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("additive_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2083 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 117 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("additive_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2089 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 121 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("shift_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2095 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LOGICAL_LEFT_SHIFT additive_expression  */
#line 122 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("shift_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2101 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LOGICAL_RIGHT_SHIFT additive_expression  */
#line 123 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("shift_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2107 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 127 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("relational_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2113 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression REL_LT shift_expression  */
#line 128 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("relational_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2119 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression REL_GT shift_expression  */
#line 129 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("relational_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2125 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression REL_LTE shift_expression  */
#line 130 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("relational_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2131 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression REL_GTE shift_expression  */
#line 131 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("relational_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2137 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 135 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("equality_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2143 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression REL_EQ relational_expression  */
#line 136 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("equality_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2149 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression REL_NEQ relational_expression  */
#line 137 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("equality_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2155 "y.tab.c"
    break;

  case 53: /* AND_expression: equality_expression  */
#line 141 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("AND_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2161 "y.tab.c"
    break;

  case 54: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 142 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("AND_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2167 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: AND_expression  */
#line 146 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("exclusive_OR_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2173 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 147 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("exclusive_OR_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2179 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 151 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("inclusive_OR_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2185 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 152 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("inclusive_OR_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2191 "y.tab.c"
    break;

  case 59: /* logical_AND_expression: inclusive_OR_expression  */
#line 155 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("logical_AND_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2197 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: logical_AND_expression LOGICAL_AND inclusive_OR_expression  */
#line 156 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("logical_AND_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2203 "y.tab.c"
    break;

  case 61: /* logical_OR_expression: logical_AND_expression  */
#line 160 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("logical_OR_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2209 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_OR_expression LOGICAL_OR logical_AND_expression  */
#line 161 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("logical_OR_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2215 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_OR_expression  */
#line 165 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("conditional_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2221 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression TERNARY_QM expression TERNARY_SEP conditional_expression  */
#line 166 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("conditional_expression"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2227 "y.tab.c"
    break;

  case 65: /* assignment_expression: conditional_expression  */
#line 170 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("assignment_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2233 "y.tab.c"
    break;

  case 66: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 171 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("assignment_expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2239 "y.tab.c"
    break;

  case 67: /* assignment_expression_opt: assignment_expression  */
#line 175 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("assignment_expression_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2245 "y.tab.c"
    break;

  case 68: /* assignment_expression_opt: %empty  */
#line 176 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("assignment_expression_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2251 "y.tab.c"
    break;

  case 69: /* assignment_operator: ASS_EQ  */
#line 180 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2257 "y.tab.c"
    break;

  case 70: /* assignment_operator: MUL_EQ  */
#line 181 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2263 "y.tab.c"
    break;

  case 71: /* assignment_operator: DIV_EQ  */
#line 182 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2269 "y.tab.c"
    break;

  case 72: /* assignment_operator: MOD_EQ  */
#line 183 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2275 "y.tab.c"
    break;

  case 73: /* assignment_operator: PLUS_EQ  */
#line 184 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2281 "y.tab.c"
    break;

  case 74: /* assignment_operator: SUB_EQ  */
#line 185 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2287 "y.tab.c"
    break;

  case 75: /* assignment_operator: AND_EQ  */
#line 186 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2293 "y.tab.c"
    break;

  case 76: /* assignment_operator: XOR_EQ  */
#line 187 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2299 "y.tab.c"
    break;

  case 77: /* assignment_operator: OR_EQ  */
#line 188 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2305 "y.tab.c"
    break;

  case 78: /* assignment_operator: SLL_EQ  */
#line 189 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2311 "y.tab.c"
    break;

  case 79: /* assignment_operator: SLR_EQ  */
#line 190 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("assignment_operator"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2317 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 194 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2323 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 195 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("expression"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2329 "y.tab.c"
    break;

  case 82: /* expression_opt: expression  */
#line 199 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("expression_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2335 "y.tab.c"
    break;

  case 83: /* expression_opt: %empty  */
#line 200 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("expression_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2341 "y.tab.c"
    break;

  case 84: /* constant_expression: conditional_expression  */
#line 204 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("constant_expression"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2347 "y.tab.c"
    break;

  case 85: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 209 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2353 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 213 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2359 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 214 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2365 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 215 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2371 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: fuction_specifier declaration_specifiers_opt  */
#line 216 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2377 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: declaration_specifiers  */
#line 220 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2383 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 221 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declaration_specifiers_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2389 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 225 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2395 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 226 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator_list"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2401 "y.tab.c"
    break;

  case 94: /* init_declarator_list_opt: init_declarator_list  */
#line 230 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2407 "y.tab.c"
    break;

  case 95: /* init_declarator_list_opt: %empty  */
#line 231 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2413 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 235 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2419 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator ASS_EQ initializer  */
#line 236 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("init_declarator"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2425 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 240 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("storage class specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2431 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 241 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("storage class specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2437 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: AUTO  */
#line 242 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("storage class specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2443 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: REGISTER  */
#line 243 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("storage class specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2449 "y.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 247 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2455 "y.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 248 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2461 "y.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 249 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2467 "y.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 250 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2473 "y.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 251 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2479 "y.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 252 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2485 "y.tab.c"
    break;

  case 108: /* type_specifier: DOUBLE  */
#line 253 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2491 "y.tab.c"
    break;

  case 109: /* type_specifier: SIGNED  */
#line 254 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2497 "y.tab.c"
    break;

  case 110: /* type_specifier: UNSIGNED  */
#line 255 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2503 "y.tab.c"
    break;

  case 111: /* type_specifier: BOOL  */
#line 256 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2509 "y.tab.c"
    break;

  case 112: /* type_specifier: COMPLEX  */
#line 257 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2515 "y.tab.c"
    break;

  case 113: /* type_specifier: IMAGINARY  */
#line 258 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2521 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 262 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("specifier_qualifier_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2527 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 263 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("specifier_qualifier_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2533 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 267 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("specifier_qualifier_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2539 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 268 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("specifier_qualifier_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2545 "y.tab.c"
    break;

  case 118: /* type_qualifier: CONST  */
#line 272 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type qualifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2551 "y.tab.c"
    break;

  case 119: /* type_qualifier: RESTRICT  */
#line 273 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type qualifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2557 "y.tab.c"
    break;

  case 120: /* type_qualifier: VOLATILE  */
#line 274 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type qualifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2563 "y.tab.c"
    break;

  case 121: /* fuction_specifier: INLINE  */
#line 278 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("function specifier"); add_child((yyval.tree),(yyvsp[0].tree)); }
#line 2569 "y.tab.c"
    break;

  case 122: /* declarator: pointer_opt direct_declarator  */
#line 282 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("declarator"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2575 "y.tab.c"
    break;

  case 123: /* direct_declarator: IDENTIFIER  */
#line 286 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2581 "y.tab.c"
    break;

  case 124: /* direct_declarator: LP declarator RP  */
#line 287 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2587 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator LBP type_qualifier_list_opt assignment_expression_opt RBP  */
#line 288 "tinyC2_22CS30063_22CS30066.y"
                                                                                         { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2593 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LBP STATIC type_qualifier_list_opt assignment_expression RBP  */
#line 289 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); }
#line 2599 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP  */
#line 290 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); }
#line 2605 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LBP type_qualifier_list_opt STAR RBP  */
#line 291 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); }
#line 2611 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LP parameter_type_list RP  */
#line 292 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2617 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LP identifier_list_opt RP  */
#line 293 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("direct_declarator"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2623 "y.tab.c"
    break;

  case 131: /* pointer: STAR type_qualifier_list_opt  */
#line 297 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("pointer"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2629 "y.tab.c"
    break;

  case 132: /* pointer: STAR type_qualifier_list_opt pointer  */
#line 298 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("pointer"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2635 "y.tab.c"
    break;

  case 133: /* pointer_opt: pointer  */
#line 302 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("pointer_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2641 "y.tab.c"
    break;

  case 134: /* pointer_opt: %empty  */
#line 303 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("pointer_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2647 "y.tab.c"
    break;

  case 135: /* type_qualifier_list: type_qualifier  */
#line 307 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type_qualifier_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2653 "y.tab.c"
    break;

  case 136: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 308 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type_qualifier_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2659 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 312 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type_qualifier_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2665 "y.tab.c"
    break;

  case 138: /* type_qualifier_list_opt: %empty  */
#line 313 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type_qualifier_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2671 "y.tab.c"
    break;

  case 139: /* parameter_type_list: parameter_list  */
#line 317 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_type_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2677 "y.tab.c"
    break;

  case 140: /* parameter_type_list: parameter_list COMMA SPREAD_OP  */
#line 318 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_type_list"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2683 "y.tab.c"
    break;

  case 141: /* parameter_list: parameter_declaration  */
#line 322 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2689 "y.tab.c"
    break;

  case 142: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 323 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_list"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2695 "y.tab.c"
    break;

  case 143: /* parameter_declaration: declaration_specifiers declarator  */
#line 327 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_declaration"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2701 "y.tab.c"
    break;

  case 144: /* parameter_declaration: declaration_specifiers  */
#line 328 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("parameter_declaration"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2707 "y.tab.c"
    break;

  case 145: /* identifier_list: IDENTIFIER  */
#line 332 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("identifier_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2713 "y.tab.c"
    break;

  case 146: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 333 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("identifier_list"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2719 "y.tab.c"
    break;

  case 147: /* identifier_list_opt: identifier_list  */
#line 337 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("identifier_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2725 "y.tab.c"
    break;

  case 148: /* identifier_list_opt: %empty  */
#line 338 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("identifier_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2731 "y.tab.c"
    break;

  case 149: /* type_name: specifier_qualifier_list  */
#line 342 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("type_name"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2737 "y.tab.c"
    break;

  case 150: /* initializer: assignment_expression  */
#line 346 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("initializer"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2743 "y.tab.c"
    break;

  case 151: /* initializer: LCP initializer_list RCP  */
#line 347 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("initializer"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2749 "y.tab.c"
    break;

  case 152: /* initializer: LCP initializer_list COMMA RCP  */
#line 348 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("initializer"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2755 "y.tab.c"
    break;

  case 153: /* initializer_list: designation_opt initializer  */
#line 352 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("initializer_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2761 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 353 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("initializer_list"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2767 "y.tab.c"
    break;

  case 155: /* designation: designator_list ASS_EQ  */
#line 357 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("designation"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2773 "y.tab.c"
    break;

  case 156: /* designation_opt: designation  */
#line 361 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("designation_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2779 "y.tab.c"
    break;

  case 157: /* designation_opt: %empty  */
#line 362 "tinyC2_22CS30063_22CS30066.y"
                                                                    { (yyval.tree) = create_node("designation_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2785 "y.tab.c"
    break;

  case 158: /* designator_list: designator  */
#line 366 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("designator_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2791 "y.tab.c"
    break;

  case 159: /* designator_list: designator_list designator  */
#line 367 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("designator_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2797 "y.tab.c"
    break;

  case 160: /* designator: LBP constant_expression RBP  */
#line 371 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("designator"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2803 "y.tab.c"
    break;

  case 161: /* designator: DOT IDENTIFIER  */
#line 372 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("designator"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2809 "y.tab.c"
    break;

  case 162: /* statement: labeled_statement  */
#line 377 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2815 "y.tab.c"
    break;

  case 163: /* statement: compound_statement  */
#line 378 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2821 "y.tab.c"
    break;

  case 164: /* statement: expression_statement  */
#line 379 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2827 "y.tab.c"
    break;

  case 165: /* statement: selection_statement  */
#line 380 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2833 "y.tab.c"
    break;

  case 166: /* statement: iteration_statement  */
#line 381 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2839 "y.tab.c"
    break;

  case 167: /* statement: jump_statement  */
#line 382 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("statement"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2845 "y.tab.c"
    break;

  case 168: /* labeled_statement: IDENTIFIER TERNARY_SEP statement  */
#line 386 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("labeled_statement"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2851 "y.tab.c"
    break;

  case 169: /* labeled_statement: CASE constant_expression TERNARY_SEP statement  */
#line 387 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("labeled_statement"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2857 "y.tab.c"
    break;

  case 170: /* labeled_statement: DEFAULT TERNARY_SEP statement  */
#line 388 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("labeled_statement"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2863 "y.tab.c"
    break;

  case 171: /* compound_statement: LCP block_item_list_opt RCP  */
#line 392 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("compound_statement"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2869 "y.tab.c"
    break;

  case 172: /* block_item_list: block_item  */
#line 396 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2875 "y.tab.c"
    break;

  case 173: /* block_item_list: block_item_list block_item  */
#line 397 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2881 "y.tab.c"
    break;

  case 174: /* block_item_list_opt: block_item_list  */
#line 401 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2887 "y.tab.c"
    break;

  case 175: /* block_item_list_opt: %empty  */
#line 402 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 2893 "y.tab.c"
    break;

  case 176: /* block_item: declaration  */
#line 406 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2899 "y.tab.c"
    break;

  case 177: /* block_item: statement  */
#line 407 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("block_item"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2905 "y.tab.c"
    break;

  case 178: /* expression_statement: expression_opt SEMICOLON  */
#line 411 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("expression_statement"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2911 "y.tab.c"
    break;

  case 179: /* selection_statement: IF LP expression RP statement  */
#line 415 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("selection_statement"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2917 "y.tab.c"
    break;

  case 180: /* selection_statement: IF LP expression RP statement ELSE statement  */
#line 416 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("selection_statement"); add_child((yyval.tree), (yyvsp[-6].tree)); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2923 "y.tab.c"
    break;

  case 181: /* selection_statement: SWITCH LP expression RP statement  */
#line 417 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("selection_statement"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2929 "y.tab.c"
    break;

  case 182: /* iteration_statement: WHILE LP expression RP statement  */
#line 421 "tinyC2_22CS30063_22CS30066.y"
                                                                                                { (yyval.tree) = create_node("iteration_statement"); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2935 "y.tab.c"
    break;

  case 183: /* iteration_statement: DO statement WHILE LP expression RP SEMICOLON  */
#line 422 "tinyC2_22CS30063_22CS30066.y"
                                                                                                { (yyval.tree) = create_node("iteration_statement"); add_child((yyval.tree), (yyvsp[-6].tree)); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); }
#line 2941 "y.tab.c"
    break;

  case 184: /* iteration_statement: FOR LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement  */
#line 423 "tinyC2_22CS30063_22CS30066.y"
                                                                                                { (yyval.tree) = create_node("iteration_statement"); add_child((yyval.tree), (yyvsp[-8].tree)); add_child((yyval.tree), (yyvsp[-7].tree)); add_child((yyval.tree), (yyvsp[-6].tree)); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); }
#line 2947 "y.tab.c"
    break;

  case 185: /* iteration_statement: FOR LP declaration expression_opt SEMICOLON expression_opt RP statement  */
#line 424 "tinyC2_22CS30063_22CS30066.y"
                                                                                                { (yyval.tree) = create_node("iteration_statement"); add_child((yyval.tree), (yyvsp[-7].tree)); add_child((yyval.tree), (yyvsp[-6].tree)); add_child((yyval.tree), (yyvsp[-5].tree)); add_child((yyval.tree), (yyvsp[-4].tree)); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); }
#line 2953 "y.tab.c"
    break;

  case 186: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 428 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("jump_statement"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2959 "y.tab.c"
    break;

  case 187: /* jump_statement: CONTINUE SEMICOLON  */
#line 429 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("jump_statement"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2965 "y.tab.c"
    break;

  case 188: /* jump_statement: BREAK SEMICOLON  */
#line 430 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("jump_statement"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2971 "y.tab.c"
    break;

  case 189: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 431 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("jump_statement"); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2977 "y.tab.c"
    break;

  case 190: /* translation_unit: external_declaration  */
#line 437 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("translation_unit"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2983 "y.tab.c"
    break;

  case 191: /* translation_unit: translation_unit external_declaration  */
#line 438 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("translation_unit"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2989 "y.tab.c"
    break;

  case 192: /* external_declaration: function_definition  */
#line 442 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("external_declaration"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 2995 "y.tab.c"
    break;

  case 193: /* external_declaration: declaration  */
#line 443 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("external_declaration"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 3001 "y.tab.c"
    break;

  case 194: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 447 "tinyC2_22CS30063_22CS30066.y"
                                                                                        { (yyval.tree) = create_node("function_definition"); add_child((yyval.tree), (yyvsp[-3].tree)); add_child((yyval.tree), (yyvsp[-2].tree)); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 3007 "y.tab.c"
    break;

  case 195: /* declaration_list: declaration  */
#line 451 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("declaration_list"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 3013 "y.tab.c"
    break;

  case 196: /* declaration_list: declaration_list declaration  */
#line 452 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("declaration_list"); add_child((yyval.tree), (yyvsp[-1].tree)); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 3019 "y.tab.c"
    break;

  case 197: /* declaration_list_opt: declaration_list  */
#line 456 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("declaration_list_opt"); add_child((yyval.tree), (yyvsp[0].tree)); }
#line 3025 "y.tab.c"
    break;

  case 198: /* declaration_list_opt: %empty  */
#line 457 "tinyC2_22CS30063_22CS30066.y"
                                                                        { (yyval.tree) = create_node("declaration_list_opt"); add_child((yyval.tree), create_node("(empty transition)"));}
#line 3031 "y.tab.c"
    break;


#line 3035 "y.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  ++yynerrs;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 460 "tinyC2_22CS30063_22CS30066.y"



void yyerror(char * s){
    printf("ERROR: %s\n\t\t at line: %d\n\tnear \" %s \"\n", s, yylineno, yytext);
    exit(0);
}

