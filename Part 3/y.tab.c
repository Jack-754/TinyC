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
#line 8 "tinyC3_22CS30063_22CS30066.y"

    #include "tinyC3_22CS30063_22CS30066_translator.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(char *);
    int yylex();

    extern symbol* current_symbol;
    extern symbol_table* current_symbol_table;
    extern symbol_table* global_symbol_table;
    extern quad_array quad_table;
    extern int symbol_table_cnt;
    extern string block_name;
    extern string data_type;

#line 88 "y.tab.c"

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
    CONSTANT_INT = 343,            /* CONSTANT_INT  */
    CONSTANT_FLOAT = 344,          /* CONSTANT_FLOAT  */
    CONSTANT_CHAR = 345,           /* CONSTANT_CHAR  */
    STRING_LITERAL = 346           /* STRING_LITERAL  */
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
#define CONSTANT_INT 343
#define CONSTANT_FLOAT 344
#define CONSTANT_CHAR 345
#define STRING_LITERAL 346

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "tinyC3_22CS30063_22CS30066.y"

    int iValue;     
    char *sValue;   
    symbol *symb;       
    symbol_type *symbType;   
    EXPR *expr;   
    S *statem;  
    A *arr; 
    int instr_ind;  
    char unary_op;  
    int param_count;   

#line 336 "y.tab.c"

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
  YYSYMBOL_CONSTANT_INT = 88,              /* CONSTANT_INT  */
  YYSYMBOL_CONSTANT_FLOAT = 89,            /* CONSTANT_FLOAT  */
  YYSYMBOL_CONSTANT_CHAR = 90,             /* CONSTANT_CHAR  */
  YYSYMBOL_STRING_LITERAL = 91,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_Start = 93,                     /* Start  */
  YYSYMBOL_primary_expression = 94,        /* primary_expression  */
  YYSYMBOL_constant = 95,                  /* constant  */
  YYSYMBOL_postfix_expression = 96,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 97,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 98, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 99,          /* unary_expression  */
  YYSYMBOL_unary_operator = 100,           /* unary_operator  */
  YYSYMBOL_cast_expression = 101,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 102, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 103,      /* additive_expression  */
  YYSYMBOL_shift_expression = 104,         /* shift_expression  */
  YYSYMBOL_relational_expression = 105,    /* relational_expression  */
  YYSYMBOL_equality_expression = 106,      /* equality_expression  */
  YYSYMBOL_AND_expression = 107,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 108,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 109,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 110,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 111,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 112,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 113,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 114,      /* assignment_operator  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 118,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 119,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 120,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 121,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 124, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 125,           /* type_qualifier  */
  YYSYMBOL_fuction_specifier = 126,        /* fuction_specifier  */
  YYSYMBOL_declarator = 127,               /* declarator  */
  YYSYMBOL_direct_declarator = 128,        /* direct_declarator  */
  YYSYMBOL_pointer = 129,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 130,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 131,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 132,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 133,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 134,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 135,          /* identifier_list  */
  YYSYMBOL_type_name = 136,                /* type_name  */
  YYSYMBOL_initializer = 137,              /* initializer  */
  YYSYMBOL_initializer_list = 138,         /* initializer_list  */
  YYSYMBOL_designation = 139,              /* designation  */
  YYSYMBOL_designation_opt = 140,          /* designation_opt  */
  YYSYMBOL_designator_list = 141,          /* designator_list  */
  YYSYMBOL_designator = 142,               /* designator  */
  YYSYMBOL_statement = 143,                /* statement  */
  YYSYMBOL_loop_statement = 144,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 145,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 146,       /* compound_statement  */
  YYSYMBOL_block_item_list = 147,          /* block_item_list  */
  YYSYMBOL_block_item_list_opt = 148,      /* block_item_list_opt  */
  YYSYMBOL_block_item = 149,               /* block_item  */
  YYSYMBOL_expression_statement = 150,     /* expression_statement  */
  YYSYMBOL_selection_statement = 151,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 152,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 153,           /* jump_statement  */
  YYSYMBOL_M = 154,                        /* M  */
  YYSYMBOL_N = 155,                        /* N  */
  YYSYMBOL_F = 156,                        /* F  */
  YYSYMBOL_W = 157,                        /* W  */
  YYSYMBOL_D = 158,                        /* D  */
  YYSYMBOL_I = 159,                        /* I  */
  YYSYMBOL_E = 160,                        /* E  */
  YYSYMBOL_X = 161,                        /* X  */
  YYSYMBOL_change_table = 162,             /* change_table  */
  YYSYMBOL_translation_unit = 163,         /* translation_unit  */
  YYSYMBOL_external_declaration = 164,     /* external_declaration  */
  YYSYMBOL_function_definition = 165,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 166,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 167          /* declaration_list  */
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
#define YYLAST   1410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    76,    81,    86,    90,    95,    98,   102,
     106,   115,   121,   138,   143,   144,   145,   151,   157,   158,
     162,   165,   172,   173,   177,   178,   182,   186,   213,   214,
     218,   219,   220,   221,   222,   223,   227,   228,   235,   246,
     256,   266,   280,   281,   291,   304,   305,   315,   328,   329,
     342,   355,   368,   384,   385,   400,   418,   419,   435,   436,
     452,   453,   468,   469,   481,   482,   494,   495,   515,   516,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   545,   546,   551,   557,   561,   562,   563,   564,   565,
     566,   567,   568,   573,   574,   578,   579,   586,   587,   588,
     589,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   608,   609,   613,   614,   618,   619,   620,
     624,   628,   634,   638,   642,   643,   644,   645,   663,   679,
     680,   681,   682,   683,   684,   695,   696,   711,   712,   718,
     719,   723,   724,   728,   729,   733,   734,   738,   739,   743,
     744,   748,   752,   753,   754,   758,   759,   763,   767,   768,
     772,   773,   777,   778,   782,   783,   784,   788,   789,   790,
     794,   795,   799,   800,   801,   804,   805,   806,   810,   817,
     818,   825,   826,   830,   831,   834,   835,   839,   846,   854,
     857,   867,   877,   885,   893,   903,   914,   925,   938,   939,
     940,   941,   945,   951,   953,   955,   957,   959,   961,   963,
     965,   977,   990,   991,   994,   995,   998,  1005,  1006,  1009,
    1010
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
  "IDENTIFIER", "CONSTANT_INT", "CONSTANT_FLOAT", "CONSTANT_CHAR",
  "STRING_LITERAL", "$accept", "Start", "primary_expression", "constant",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "fuction_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "type_qualifier_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designation_opt", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item_list_opt",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "M", "N", "F", "W", "D", "I",
  "E", "X", "change_table", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-338)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-219)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1344,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,    23,  -338,   -22,  1344,  1344,  1344,  1344,  1344,  -338,
    -338,  -338,   -22,    10,  -338,    95,  -338,  1232,    96,   -26,
    -338,  -338,  -338,  -338,  -338,   -15,  -338,    10,    -6,  -338,
     -22,   179,  -338,   -22,  -338,  1344,    17,   523,    96,  -338,
    -338,  -338,  -338,    69,  1091,   469,     3,  -338,  1105,  1105,
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,   206,   294,  1143,  -338,   169,   -12,   114,   146,
      97,    84,    92,    99,   126,   -28,  -338,  -338,  -338,   143,
    -338,  -338,     5,  1310,   623,  -338,   154,   166,   577,   469,
    -338,  -338,     7,  1375,  -338,  1375,   197,  1143,   160,   129,
    -338,   179,   -31,  -338,   469,  -338,  -338,  1143,  1143,   162,
     164,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  1143,  -338,  -338,  1143,  1143,  1143,
    1143,  1143,  1143,  1143,  1143,  1143,  1143,  1143,  1143,  1143,
    1143,  1143,  1143,  -338,  -338,   203,   293,  -338,   168,  -338,
     -22,   212,   209,  -338,   215,   623,  -338,  -338,  1143,  -338,
     220,   234,   216,  -338,  1143,  -338,  -338,  -338,  1001,  -338,
     235,  -338,  -338,    63,  -338,  -338,  -338,   240,   236,   241,
    -338,    -9,  -338,  -338,  -338,  -338,  -338,  -338,   169,   169,
     -12,   -12,   114,   114,   114,   114,   146,   146,    97,    84,
      92,  1143,  1143,  -338,   238,  1015,  1143,  -338,  -338,   199,
     242,  -338,   237,  -338,   249,  -338,  -338,   244,   141,  -338,
    -338,  -338,  -338,   247,   248,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  1273,  -338,   250,   277,  -338,  -338,   288,
    -338,     3,  -338,  -338,  -338,   179,   288,  1143,  -338,  -338,
      99,   126,  1143,  -338,  -338,   147,   282,   296,   297,   292,
    -338,   300,   708,   299,  1143,  -338,   708,  -338,   293,  -338,
    -338,  -338,  -338,  -338,   132,  -338,  -338,   287,  -338,   708,
    -338,  -338,  -338,  1143,  -338,  -338,   963,    12,   293,  -338,
    -338,  -338,   121,   295,  -338,  -338,  -338,    31,   293,  -338,
    -338,  -338,  -338,  -338,  -338,   708,   301,  -338,  -338,   382,
    -338,  -338,   303,   324,  -338,  -338,  1143,  -338,  -338,  1143,
     708,  -338,   307,  -338,  1053,  1053,    67,  -338,   325,  1143,
    -338,  -338,   306,   315,   313,    87,  1143,  1143,  -338,   963,
    -338,  1143,   311,   287,   287,   293,  -338,  -338,    90,  -338,
     317,   319,   318,   708,   329,  -338,  -338,  -338,  -338,  -338,
     793,   878,   293,  -338,   293,  -338,   320,   333,  -338,  -338
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    99,   118,   109,    97,   101,   106,   103,   119,   102,
     108,   117,   110,    98,   111,   120,   112,   104,   107,   105,
     100,     0,   215,     0,    90,    86,    91,    92,     2,   212,
     214,     1,     0,   142,   123,     0,    93,    95,   122,     0,
      87,    85,    88,    89,   213,     0,   139,   141,   137,    84,
       0,     0,   219,     0,   211,   217,   211,     0,   121,   124,
     140,   138,    94,    95,     0,     0,   159,    35,     0,     0,
      32,    33,    31,    30,    34,     4,     8,     9,    10,     6,
      11,     5,    24,    36,     0,    38,    42,    45,    48,    53,
      56,    58,    60,    62,    64,    66,    68,   152,    96,     0,
     220,   149,     0,     0,     0,   128,    31,     0,     0,     0,
      28,    81,     0,   116,   151,   116,     0,     0,     0,     0,
     158,     0,     0,   160,     0,    25,    26,    23,     0,     0,
       0,    16,    17,    70,    71,    72,    73,    74,    75,    80,
      79,    76,    77,    78,     0,    36,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   203,     0,   182,   135,     0,   136,
     148,     0,   143,   145,     0,     0,   133,   127,     0,   126,
      31,     0,     0,     7,     0,   115,   113,   114,     0,    83,
       0,   163,   153,   159,   155,   157,   161,     0,    22,     0,
      20,     0,    14,    15,    69,    39,    40,    41,    43,    44,
      47,    46,    50,    49,    51,    52,    54,    55,    57,    59,
      61,     0,     0,   203,     0,     0,     0,   205,   206,     0,
       0,   208,     0,   207,     0,   210,   186,     4,     0,   183,
     184,   164,   165,   203,     0,   179,   166,   167,   168,   169,
     150,   147,   134,     0,   130,     0,     0,   132,   125,    29,
      82,   159,    37,   162,   154,     0,     0,     0,    13,    12,
      63,    65,     0,   200,   202,     0,     0,     0,     0,     0,
     199,     0,     0,   203,     0,   211,     0,   185,     0,   216,
     144,   146,   129,   131,     0,   156,    21,   204,   201,     0,
     210,   210,   198,     0,   177,   203,     0,     0,   182,   175,
     180,    18,   159,     0,   176,   211,   211,     0,   182,   203,
     170,   171,   172,   173,   174,     0,     0,    19,   203,     0,
     203,   203,     0,     0,   189,   178,     0,   203,   203,     0,
       0,   203,     0,    67,     0,     0,     0,   204,     0,     0,
     203,   203,   203,   187,     0,     0,     0,     0,   203,     0,
     209,     0,     0,   204,   204,   182,   190,   203,     0,   192,
       0,     0,     0,     0,     0,   203,   203,   191,   188,   193,
       0,     0,   182,   194,   182,   195,     0,     0,   196,   197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,  -338,  -338,  -338,  -338,   -59,  -338,   -72,
      55,    57,   117,    85,   217,   218,   224,   157,   167,  -338,
    -114,    11,  -338,   -64,   165,     0,     6,  -338,   343,  -338,
      88,   -34,   283,     9,  -338,   -16,   361,   354,   -17,  -338,
    -338,  -338,   152,  -338,   -89,  -113,   145,  -338,  -182,  -338,
     289,  -215,  -337,  -233,  -338,  -338,  -238,   125,  -224,  -163,
    -157,  -155,  -160,  -278,  -338,  -338,  -338,  -338,  -338,   -87,
     -54,  -338,   381,  -338,  -338,  -338
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    80,    81,    82,   198,   199,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,   111,   144,   238,   190,   239,    53,    35,    36,    24,
      25,   114,   186,    26,    27,    63,    38,    39,    47,    48,
     171,   172,   173,   102,   116,    98,   119,   120,   121,   122,
     123,   240,   319,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   221,   165,   277,   278,   283,   281,   367,   285,
      99,    28,    29,    30,    54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   112,   103,   189,   222,   110,    23,    37,   194,   125,
     126,   265,   146,   117,    32,     2,    45,   118,    32,   313,
     182,  -204,   366,    31,     8,   145,    59,   164,    22,    11,
      40,    41,    42,    43,    23,   197,   269,    52,   184,   195,
     108,    33,    46,   383,   385,   112,   167,   117,   183,   150,
     151,   118,   168,   325,   184,   100,    60,    33,   145,   184,
     112,    34,    97,   272,   201,    34,    46,   304,   107,   353,
     326,   309,   331,   320,   115,   205,   206,   207,   184,   185,
     332,   185,   321,   288,   314,   370,   371,   175,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   101,   338,   264,   117,   352,   170,
     334,   118,   189,    46,   184,   174,   262,    60,   115,   181,
     350,   351,   115,   306,   115,   347,   320,   372,   362,   145,
     265,   374,    97,   115,   184,   321,    56,   184,   200,    51,
      57,    49,    50,   322,   386,   318,   387,   320,   320,   323,
     160,   324,   295,   113,   251,   204,   321,   321,   378,   333,
     161,   275,   145,   145,   327,   117,   162,   145,   336,   118,
     339,   340,   192,   152,   153,   311,   193,   344,   345,   312,
     163,   348,   158,   159,    60,   166,   255,   287,   184,   256,
     356,   357,   359,   298,   184,   260,   322,   113,   365,   176,
      64,   113,   323,   113,   324,   208,   209,   373,   297,   210,
     211,   177,   113,   315,   316,   380,   381,   322,   322,    65,
     307,    66,   343,   323,   323,   324,   324,   154,   155,   156,
     157,   308,   147,   148,   149,    67,    68,    69,   188,   317,
      70,    71,    72,   216,   217,    73,   127,   191,    74,   202,
     128,   203,   223,   252,   129,   250,   253,   259,   130,   170,
     254,   329,   330,   131,   132,   257,    75,    76,    77,    78,
      79,   212,   213,   214,   215,   346,    97,   145,   296,   258,
     263,   266,   268,   267,   273,   355,   279,   282,   280,   284,
    -181,   289,   363,   364,   286,   292,     1,   368,     2,     3,
     224,     4,   225,     5,   226,     6,     7,     8,     9,   227,
      10,   228,    11,   229,    64,    12,   230,   231,    13,    14,
     232,    15,   293,    16,   233,    17,   234,    18,    19,   337,
     261,    20,   299,    65,   184,   235,   300,   301,   302,   236,
     303,   305,   342,   354,   335,   328,   341,   349,   358,    67,
      68,    69,   360,   361,    70,    71,    72,   369,   375,    73,
     376,   377,    74,   388,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   379,   389,   218,   270,   219,
     237,    76,    77,    78,    79,     1,   220,     2,     3,   271,
       4,   276,     5,    62,     6,     7,     8,     9,   187,    10,
      58,    11,    61,    64,    12,   291,   294,    13,    14,    44,
      15,   196,    16,   310,    17,     0,    18,    19,     0,     0,
      20,     0,    65,     0,     0,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,     0,     0,    70,    71,    72,     0,     0,    73,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,     2,     3,     0,     0,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      64,    12,     0,     0,     0,    14,     0,     0,     0,    16,
       0,    17,     0,    18,    19,     0,     0,     0,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,     2,     0,
      70,    71,    72,     0,     0,    73,     0,     8,    74,     0,
       0,     0,    11,     0,    64,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,     0,     0,    65,     0,     0,     0,     0,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     2,     0,    70,    71,   106,     0,     0,    73,
       0,     8,    74,     0,     0,     0,    11,     0,    64,     0,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,     0,    65,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,    67,    68,    69,     0,     8,    70,    71,
     180,     0,    11,    73,    64,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,     0,    70,    71,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,   224,     0,   225,     0,   226,
       0,     0,     0,     0,   227,     0,   228,     0,   229,    64,
       0,   230,   231,     0,     0,   232,     0,     0,     0,   233,
       0,   234,     0,     0,     0,     0,     0,     0,    65,     0,
     235,     0,     0,     0,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,    70,
      71,    72,     0,     0,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,    76,    77,    78,    79,
     224,     0,   225,     0,   226,     0,     0,     0,     0,   227,
       0,   228,     0,   229,    64,     0,   230,   231,     0,     0,
     232,     0,     0,     0,   233,     0,   234,     0,     0,     0,
       0,     0,     0,    65,     0,   382,     0,     0,     0,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,     0,    70,    71,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,    76,    77,    78,    79,   224,     0,   225,     0,   226,
       0,     0,     0,     0,   227,     0,   228,     0,   229,    64,
       0,   230,   231,     0,     0,   232,     0,     0,     0,   233,
       0,   234,     0,     0,     0,     0,     0,     0,    65,     0,
     384,     0,     0,     0,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,    70,
      71,    72,     0,     0,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,    76,    77,    78,    79,
     224,     0,   225,     0,   226,     0,     0,     0,     0,   227,
       0,   228,     0,   229,    64,     0,   230,   231,     0,     0,
     232,     0,     0,     0,   233,     0,   234,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    64,     0,    70,    71,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,    64,     0,     0,     0,
       0,    65,     0,   261,     0,     0,     0,     0,     0,     0,
     237,    76,    77,    78,    79,    65,     0,    67,    68,    69,
       0,   274,    70,    71,    72,     0,     0,    73,     0,     0,
      74,    67,    68,    69,    64,     0,    70,    71,    72,     0,
       0,    73,     0,     0,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    65,     0,     0,     0,     0,     0,   236,
       0,     0,    75,    76,    77,    78,    79,     0,     0,    67,
      68,    69,    64,     0,    70,    71,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,    64,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,   124,     0,    67,    68,    69,
       0,     0,    70,    71,    72,     0,     0,    73,     0,     0,
      74,    67,    68,    69,    64,     0,    70,    71,    72,     0,
       0,    73,     0,     0,    74,     0,     0,     0,    75,    76,
      77,    78,    79,    65,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,     0,     0,    67,
      68,    69,     0,     0,    70,    71,    72,     0,     0,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     1,     0,     2,     3,     0,
       4,     0,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,    18,    19,     0,     0,
      20,     0,     0,     0,  -218,     0,     1,     0,     2,     3,
       0,     4,     0,     5,     0,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,    13,    14,
       0,    15,    51,    16,     0,    17,     0,    18,    19,     0,
       0,    20,     0,     1,     0,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,   290,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,     0,    18,    19,     0,     1,    20,     2,
       3,   169,     4,     0,     5,     0,     6,     7,     8,     9,
       0,    10,     0,    11,     0,     0,    12,     0,     0,    13,
      14,     0,    15,     0,    16,     0,    17,     0,    18,    19,
       2,     3,    20,     0,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
       0,    14,     0,     0,     0,    16,     0,    17,     0,    18,
      19
};

static const yytype_int16 yycheck[] =
{
       0,    65,    56,   117,   164,    64,     0,    23,   121,    68,
      69,   193,    84,    44,    40,     5,    32,    48,    40,   297,
     109,    49,   359,     0,    14,    84,    41,    55,    28,    19,
      24,    25,    26,    27,    28,   124,    45,    37,    47,    70,
      57,    63,    33,   380,   381,   109,    41,    44,    41,    61,
      62,    48,    47,    41,    47,    55,    47,    63,   117,    47,
     124,    87,    51,   223,   128,    87,    57,   282,    57,   347,
     308,   286,    41,   306,    65,   147,   148,   149,    47,   113,
     318,   115,   306,   243,   299,   363,   364,   104,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    87,   329,    43,    44,    41,   103,
     325,    48,   226,   104,    47,   104,   188,   108,   109,   108,
     344,   345,   113,   283,   115,   340,   359,   365,    41,   188,
     312,    41,   121,   124,    47,   359,    40,    47,   127,    70,
      44,    46,    47,   306,   382,   305,   384,   380,   381,   306,
      66,   306,   265,    65,   170,   144,   380,   381,   373,   319,
      68,   225,   221,   222,    43,    44,    67,   226,   328,    48,
     330,   331,    43,    59,    60,    43,    47,   337,   338,    47,
      54,   341,    85,    86,   175,    42,   175,    46,    47,   178,
     350,   351,   352,    46,    47,   184,   359,   109,   358,    45,
      21,   113,   359,   115,   359,   150,   151,   367,   272,   152,
     153,    45,   124,   300,   301,   375,   376,   380,   381,    40,
     284,    42,   336,   380,   381,   380,   381,    81,    82,    83,
      84,   285,    63,    64,    65,    56,    57,    58,    41,   303,
      61,    62,    63,   158,   159,    66,    40,    87,    69,    87,
      44,    87,    49,    41,    48,    87,    47,    41,    52,   253,
      45,   315,   316,    57,    58,    45,    87,    88,    89,    90,
      91,   154,   155,   156,   157,   339,   265,   336,   267,    45,
      45,    41,    41,    47,    46,   349,    87,    50,    46,    40,
      43,    43,   356,   357,    50,    45,     3,   361,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    45,    30,    31,    32,    33,    34,    35,   329,
      42,    38,    50,    40,    47,    42,    40,    40,    46,    46,
      40,    42,    18,    18,    43,    50,    43,    40,    42,    56,
      57,    58,    37,    40,    61,    62,    63,    46,    41,    66,
      41,    43,    69,    43,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    46,    43,   160,   221,   161,
      87,    88,    89,    90,    91,     3,   162,     5,     6,   222,
       8,   226,    10,    50,    12,    13,    14,    15,   115,    17,
      39,    19,    48,    21,    22,   253,   261,    25,    26,    28,
      28,   122,    30,   288,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,     5,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    14,    69,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,     5,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    14,    69,    -1,    -1,    -1,    19,    -1,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    14,    61,    62,
      63,    -1,    19,    66,    21,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    21,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    40,    -1,    56,    57,    58,
      -1,    46,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      69,    56,    57,    58,    21,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,    56,
      57,    58,    21,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    40,    -1,    56,    57,    58,
      -1,    -1,    61,    62,    63,    -1,    -1,    66,    -1,    -1,
      69,    56,    57,    58,    21,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,     3,    -1,     5,     6,    -1,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    42,    -1,     3,    -1,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
      -1,    28,    70,    30,    -1,    32,    -1,    34,    35,    -1,
      -1,    38,    -1,     3,    -1,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    53,    17,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,     3,    38,     5,
       6,    41,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
       5,     6,    38,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    13,    14,    15,
      17,    19,    22,    25,    26,    28,    30,    32,    34,    35,
      38,    93,   117,   118,   121,   122,   125,   126,   163,   164,
     165,     0,    40,    63,    87,   119,   120,   127,   128,   129,
     118,   118,   118,   118,   164,   127,   125,   130,   131,    46,
      47,    70,   117,   118,   166,   167,    40,    44,   128,    41,
     125,   129,   120,   127,    21,    40,    42,    56,    57,    58,
      61,    62,    63,    66,    69,    87,    88,    89,    90,    91,
      94,    95,    96,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   137,   162,
     117,    87,   135,   162,    25,    45,    63,   113,   130,    40,
      99,   113,   115,   122,   123,   125,   136,    44,    48,   138,
     139,   140,   141,   142,    40,    99,    99,    40,    44,    48,
      52,    57,    58,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   114,    99,   101,    63,    64,    65,
      61,    62,    59,    60,    81,    82,    83,    84,    85,    86,
      66,    68,    67,    54,    55,   155,    42,    41,    47,    41,
     118,   132,   133,   134,   113,   130,    45,    45,    25,    45,
      63,   113,   136,    41,    47,   123,   124,   124,    41,   112,
     116,    87,    43,    47,   137,    70,   142,   136,    97,    98,
     113,   115,    87,    87,   113,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   105,   105,   106,   107,
     108,   154,   154,    49,     7,     9,    11,    16,    18,    20,
      23,    24,    27,    31,    33,    42,    46,    87,   115,   117,
     143,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      87,   127,    41,    47,    45,   113,   113,    45,    45,    41,
     113,    42,   101,    45,    43,   140,    41,    47,    41,    45,
     109,   110,   154,    46,    46,   115,   116,   156,   157,    87,
      46,   159,    50,   158,    40,   161,    50,    46,   154,    43,
      53,   134,    45,    45,   138,   137,   113,   115,    46,    50,
      40,    40,    46,    40,   143,    42,   154,   115,   162,   143,
     149,    43,    47,   155,   143,   161,   161,   115,   154,   144,
     145,   150,   151,   152,   153,    41,   148,    43,    50,   162,
     162,    41,   148,   154,   143,    43,   154,   117,   150,   154,
     154,    43,    18,   112,   154,   154,   115,   143,   154,    40,
     150,   150,    41,   155,    18,   115,   154,   154,    42,   154,
      37,    40,    41,   115,   115,   154,   144,   160,   115,    46,
     155,   155,   148,   154,    41,    41,    41,    43,   143,    46,
     154,   154,    42,   144,    42,   144,   148,   148,    43,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   105,   105,
     105,   105,   105,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   116,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     126,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   137,   138,   138,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   145,   145,   145,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     153,   153,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   163,   164,   164,   165,   166,   166,   167,
     167
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     4,     4,     3,     6,
       5,     6,     5,     4,     5,     4,     4,     2,     3,     1,
       2,     1,     0,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     2,     1,     0,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     5,     1,
       3,     1,     0,     1,     1,     2,     1,     8,    12,     5,
      10,    12,    10,    12,    14,    14,    16,    16,     3,     2,
       2,     3,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     1,     1,     7,     1,     0,     1,
       2
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
  case 3: /* Start: %empty  */
#line 76 "tinyC3_22CS30063_22CS30066.y"
      {printf("THE FILE IS EMPTY.\n");}
#line 1987 "y.tab.c"
    break;

  case 4: /* primary_expression: IDENTIFIER  */
#line 81 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.expr) = new EXPR();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                        (yyval.expr)->exprType = "not_bool";   // Non bool expression
                    }
#line 1997 "y.tab.c"
    break;

  case 5: /* primary_expression: constant  */
#line 86 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.expr) = new EXPR();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                    }
#line 2006 "y.tab.c"
    break;

  case 6: /* primary_expression: STRING_LITERAL  */
#line 90 "tinyC3_22CS30063_22CS30066.y"
                                           {
                        (yyval.expr) = new EXPR();  // New expression
                        (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("ptr"), (yyvsp[0].sValue)); // Create new temp with type ptr and store value
                        (yyval.expr)->addr->type->sub_type = new symbol_type("char");
                    }
#line 2016 "y.tab.c"
    break;

  case 7: /* primary_expression: LP expression RP  */
#line 95 "tinyC3_22CS30063_22CS30066.y"
                                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 2022 "y.tab.c"
    break;

  case 8: /* constant: CONSTANT_INT  */
#line 98 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("int"), convInt2Str((yyvsp[0].iValue))); // Create new temp with type int and store value
                        quad_table.emit("=", (yyval.symb)->name, (yyvsp[0].iValue));
                    }
#line 2031 "y.tab.c"
    break;

  case 9: /* constant: CONSTANT_FLOAT  */
#line 102 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("float"), string((yyvsp[0].sValue)));  // Create new temp with type double and store value
                        quad_table.emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 2040 "y.tab.c"
    break;

  case 10: /* constant: CONSTANT_CHAR  */
#line 106 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("char"), string((yyvsp[0].sValue)));   // Create new temp with type char and store value
                        quad_table.emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 2049 "y.tab.c"
    break;

  case 11: /* postfix_expression: primary_expression  */
#line 115 "tinyC3_22CS30063_22CS30066.y"
                          {
            (yyval.arr) = new A();   
            (yyval.arr)->location = (yyvsp[0].expr)->addr;   
            (yyval.arr)->type = (yyvsp[0].expr)->addr->type;  
            (yyval.arr)->addr = (yyval.arr)->location;   
        }
#line 2060 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression LBP expression RBP  */
#line 121 "tinyC3_22CS30063_22CS30066.y"
                                             { 
      (yyval.arr) = new A();   
      (yyval.arr)->type = (yyvsp[-3].arr)->type->sub_type;  
      (yyval.arr)->location = (yyvsp[-3].arr)->location;  
      (yyval.arr)->addr = symbol_table::gentemp(new symbol_type("int")); 
      (yyval.arr)->sub_type = "arr"; 
      if ((yyvsp[-3].arr)->sub_type == "arr") { 
          symbol* temp = symbol_table::gentemp(new symbol_type("int"));
          int sz = type_size((yyval.arr)->type);  
          quad_table.emit("*", temp->name, (yyvsp[-1].expr)->addr->name, convInt2Str(sz));
          quad_table.emit("+", (yyval.arr)->addr->name, (yyvsp[-3].arr)->addr->name, temp->name);
        }
      else {
          int sz = type_size((yyval.arr)->type);  
          quad_table.emit("*", (yyval.arr)->addr->name, (yyvsp[-1].expr)->addr->name, convInt2Str(sz)); 
      }
    }
#line 2082 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression LP argument_expression_list_opt RP  */
#line 138 "tinyC3_22CS30063_22CS30066.y"
                                                             { 
      (yyval.arr) = new A();  
      (yyval.arr)->location = symbol_table::gentemp((yyvsp[-3].arr)->type); 
      quad_table.emit("call", (yyval.arr)->location->name, (yyvsp[-3].arr)->location->name, convInt2Str((yyvsp[-1].param_count))); 
    }
#line 2092 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 143 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2098 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 144 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2104 "y.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression PLUS_FIX  */
#line 145 "tinyC3_22CS30063_22CS30066.y"
                                  { 
          (yyval.arr) = new A();   
          (yyval.arr)->location = symbol_table::gentemp((yyvsp[-1].arr)->location->type);    
          quad_table.emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    
          quad_table.emit("+", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");   
    }
#line 2115 "y.tab.c"
    break;

  case 17: /* postfix_expression: postfix_expression SUB_FIX  */
#line 151 "tinyC3_22CS30063_22CS30066.y"
                                 { 
          (yyval.arr) = new A();   
          (yyval.arr)->location = symbol_table::gentemp((yyvsp[-1].arr)->location->type);    
          quad_table.emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    
          quad_table.emit("-", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");  
      }
#line 2126 "y.tab.c"
    break;

  case 18: /* postfix_expression: LP type_name RP LCP initializer_list RCP  */
#line 157 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2132 "y.tab.c"
    break;

  case 19: /* postfix_expression: LP type_name RP LCP initializer_list COMMA RCP  */
#line 158 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2138 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 162 "tinyC3_22CS30063_22CS30066.y"
                            { (yyval.param_count) = 1;
          quad_table.emit("param", (yyvsp[0].expr)->addr->name);  
        }
#line 2146 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 165 "tinyC3_22CS30063_22CS30066.y"
                                                           { 
        (yyval.param_count) = (yyvsp[-2].param_count) + 1;
        quad_table.emit("param", (yyvsp[0].expr)->addr->name);
    }
#line 2155 "y.tab.c"
    break;

  case 22: /* argument_expression_list_opt: argument_expression_list  */
#line 172 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.param_count) = (yyvsp[0].param_count);}
#line 2161 "y.tab.c"
    break;

  case 23: /* argument_expression_list_opt: %empty  */
#line 173 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.param_count) = 0;}
#line 2167 "y.tab.c"
    break;

  case 24: /* unary_expression: postfix_expression  */
#line 177 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.arr) = (yyvsp[0].arr);}
#line 2173 "y.tab.c"
    break;

  case 25: /* unary_expression: PLUS_FIX unary_expression  */
#line 178 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          quad_table.emit("+", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   
          (yyval.arr) = (yyvsp[0].arr);    
    }
#line 2182 "y.tab.c"
    break;

  case 26: /* unary_expression: SUB_FIX unary_expression  */
#line 182 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          quad_table.emit("-", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   
          (yyval.arr) = (yyvsp[0].arr);    
    }
#line 2191 "y.tab.c"
    break;

  case 27: /* unary_expression: unary_operator cast_expression  */
#line 186 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          (yyval.arr) = new A();
           if ((yyvsp[-1].unary_op) == '&') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type("ptr")); 
               (yyval.arr)->location->type->sub_type = (yyvsp[0].arr)->location->type;
               quad_table.emit("= &", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name); 
           }
           else if ((yyvsp[-1].unary_op) == '*') {
               (yyval.arr)->sub_type = "ptr"; // Pointer type
               (yyval.arr)->addr = symbol_table::gentemp((yyvsp[0].arr)->location->type->sub_type); 
               (yyval.arr)->location = (yyvsp[0].arr)->location;  
               quad_table.emit("= *", (yyval.arr)->addr->name, (yyvsp[0].arr)->location->name); 
           }
           else if ((yyvsp[-1].unary_op) == '+') (yyval.arr) = (yyvsp[0].arr);
           else if ((yyvsp[-1].unary_op) == '-') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quad_table.emit("= -", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
           }
           else if ((yyvsp[-1].unary_op) == '~')  {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quad_table.emit("= ~", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
           }
           else if ((yyvsp[-1].unary_op) == '!') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quad_table.emit("= !", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
          }
    }
#line 2223 "y.tab.c"
    break;

  case 28: /* unary_expression: SIZEOF unary_expression  */
#line 213 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2229 "y.tab.c"
    break;

  case 29: /* unary_expression: SIZEOF LP type_name RP  */
#line 214 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2235 "y.tab.c"
    break;

  case 30: /* unary_operator: BITWISE_AND  */
#line 218 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '&';}
#line 2241 "y.tab.c"
    break;

  case 31: /* unary_operator: STAR  */
#line 219 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '*';}
#line 2247 "y.tab.c"
    break;

  case 32: /* unary_operator: PLUS  */
#line 220 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '+';}
#line 2253 "y.tab.c"
    break;

  case 33: /* unary_operator: SUB  */
#line 221 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '-';}
#line 2259 "y.tab.c"
    break;

  case 34: /* unary_operator: BITWISE_NOT  */
#line 222 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '~';}
#line 2265 "y.tab.c"
    break;

  case 35: /* unary_operator: LOGICAL_NOT  */
#line 223 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '!';}
#line 2271 "y.tab.c"
    break;

  case 36: /* cast_expression: unary_expression  */
#line 227 "tinyC3_22CS30063_22CS30066.y"
                       { (yyval.arr) = (yyvsp[0].arr); }
#line 2277 "y.tab.c"
    break;

  case 37: /* cast_expression: LP type_name RP cast_expression  */
#line 228 "tinyC3_22CS30063_22CS30066.y"
                                      { 
        (yyval.arr) = new A();
        (yyval.arr)->location = convType((yyvsp[0].arr)->location, data_type);
    }
#line 2286 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: cast_expression  */
#line 235 "tinyC3_22CS30063_22CS30066.y"
                      {
        (yyval.expr) = new EXPR(); 
        if ((yyvsp[0].arr)->sub_type == "arr") {
            (yyval.expr)->addr = symbol_table::gentemp((yyvsp[0].arr)->addr->type); 
            quad_table.emit("=[]", (yyval.expr)->addr->name, (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->addr->name); 
        }
        else if((yyvsp[0].arr)->sub_type == "ptr") {
            (yyval.expr)->addr = (yyvsp[0].arr)->addr; 
        }
        else (yyval.expr)->addr = (yyvsp[0].arr)->location; 
       }
#line 2302 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 246 "tinyC3_22CS30063_22CS30066.y"
                                                     {
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new EXPR();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base));
              quad_table.emit("*", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }      
     }
#line 2317 "y.tab.c"
    break;

  case 40: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 256 "tinyC3_22CS30063_22CS30066.y"
                                                    { 
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new EXPR();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base));
              quad_table.emit("/", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2332 "y.tab.c"
    break;

  case 41: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 266 "tinyC3_22CS30063_22CS30066.y"
                                                    { 
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new EXPR();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
              quad_table.emit("%", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2347 "y.tab.c"
    break;

  case 42: /* additive_expression: multiplicative_expression  */
#line 280 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr);}
#line 2353 "y.tab.c"
    break;

  case 43: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 281 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quad_table.emit("+", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2368 "y.tab.c"
    break;

  case 44: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 291 "tinyC3_22CS30063_22CS30066.y"
                                                         { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quad_table.emit("-", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2383 "y.tab.c"
    break;

  case 45: /* shift_expression: additive_expression  */
#line 304 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2389 "y.tab.c"
    break;

  case 46: /* shift_expression: shift_expression LOGICAL_LEFT_SHIFT additive_expression  */
#line 305 "tinyC3_22CS30063_22CS30066.y"
                                                               { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quad_table.emit("<<", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2404 "y.tab.c"
    break;

  case 47: /* shift_expression: shift_expression LOGICAL_RIGHT_SHIFT additive_expression  */
#line 315 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quad_table.emit(">>", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2419 "y.tab.c"
    break;

  case 48: /* relational_expression: shift_expression  */
#line 328 "tinyC3_22CS30063_22CS30066.y"
                         { (yyval.expr) = (yyvsp[0].expr);}
#line 2425 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression REL_LT shift_expression  */
#line 329 "tinyC3_22CS30063_22CS30066.y"
                                                     { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->true_list = makelist(next_instruction()); 
            (yyval.expr)->false_list = makelist(next_instruction()+1); 
            quad_table.emit("<", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quad_table.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2443 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression REL_GT shift_expression  */
#line 342 "tinyC3_22CS30063_22CS30066.y"
                                                     { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->true_list = makelist(next_instruction()); 
            (yyval.expr)->false_list = makelist(next_instruction()+1); 
            quad_table.emit(">", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quad_table.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2461 "y.tab.c"
    break;

  case 51: /* relational_expression: relational_expression REL_LTE shift_expression  */
#line 355 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->true_list = makelist(next_instruction()); 
            (yyval.expr)->false_list = makelist(next_instruction()+1); 
            quad_table.emit("<=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quad_table.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2479 "y.tab.c"
    break;

  case 52: /* relational_expression: relational_expression REL_GTE shift_expression  */
#line 368 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->true_list = makelist(next_instruction()); 
            (yyval.expr)->false_list = makelist(next_instruction()+1); 
            quad_table.emit(">=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quad_table.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2497 "y.tab.c"
    break;

  case 53: /* equality_expression: relational_expression  */
#line 384 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.expr) = (yyvsp[0].expr); }
#line 2503 "y.tab.c"
    break;

  case 54: /* equality_expression: equality_expression REL_EQ relational_expression  */
#line 385 "tinyC3_22CS30063_22CS30066.y"
                                                       { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
              convBool2Int((yyvsp[-2].expr));
              convBool2Int((yyvsp[0].expr));
              (yyval.expr) = new EXPR();
              (yyval.expr)->exprType = "bool";   
              (yyval.expr)->true_list = makelist(next_instruction()); 
              (yyval.expr)->false_list = makelist(next_instruction()+1); 
              quad_table.emit("==", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
              quad_table.emit("goto", ""); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2523 "y.tab.c"
    break;

  case 55: /* equality_expression: equality_expression REL_NEQ relational_expression  */
#line 400 "tinyC3_22CS30063_22CS30066.y"
                                                        { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            convBool2Int((yyvsp[-2].expr));
            convBool2Int((yyvsp[0].expr));
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->true_list = makelist(next_instruction()); 
            (yyval.expr)->false_list = makelist(next_instruction()+1); 
            quad_table.emit("!=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quad_table.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2543 "y.tab.c"
    break;

  case 56: /* AND_expression: equality_expression  */
#line 418 "tinyC3_22CS30063_22CS30066.y"
                          { (yyval.expr) = (yyvsp[0].expr);}
#line 2549 "y.tab.c"
    break;

  case 57: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 419 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBool2Int((yyvsp[-2].expr));
                convBool2Int((yyvsp[0].expr));
                (yyval.expr) = new EXPR();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("&", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2567 "y.tab.c"
    break;

  case 58: /* exclusive_OR_expression: AND_expression  */
#line 435 "tinyC3_22CS30063_22CS30066.y"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 2573 "y.tab.c"
    break;

  case 59: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 436 "tinyC3_22CS30063_22CS30066.y"
                                                         { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBool2Int((yyvsp[-2].expr));
                convBool2Int((yyvsp[0].expr));
                (yyval.expr) = new EXPR();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("^", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2591 "y.tab.c"
    break;

  case 60: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 452 "tinyC3_22CS30063_22CS30066.y"
                               { (yyval.expr) = (yyvsp[0].expr);}
#line 2597 "y.tab.c"
    break;

  case 61: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 453 "tinyC3_22CS30063_22CS30066.y"
                                                                  { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBool2Int((yyvsp[-2].expr));
                convBool2Int((yyvsp[0].expr));
                (yyval.expr) = new EXPR();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quad_table.emit("|", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2615 "y.tab.c"
    break;

  case 62: /* logical_AND_expression: inclusive_OR_expression  */
#line 468 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2621 "y.tab.c"
    break;

  case 63: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 469 "tinyC3_22CS30063_22CS30066.y"
                                                                      { 
            convInt2Bool((yyvsp[-3].expr));
            convInt2Bool((yyvsp[0].expr));
            (yyval.expr) = new EXPR();
            (yyval.expr)->exprType = "bool";   
            backpatch((yyvsp[-3].expr)->true_list, (yyvsp[-1].instr_ind)); 
            (yyval.expr)->true_list = (yyvsp[0].expr)->true_list; 
            (yyval.expr)->false_list = merge((yyvsp[-3].expr)->false_list, (yyvsp[0].expr)->false_list); 
    }
#line 2635 "y.tab.c"
    break;

  case 64: /* logical_OR_expression: logical_AND_expression  */
#line 481 "tinyC3_22CS30063_22CS30066.y"
                               { (yyval.expr) = (yyvsp[0].expr); }
#line 2641 "y.tab.c"
    break;

  case 65: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 482 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
          convInt2Bool((yyvsp[-3].expr));
          convInt2Bool((yyvsp[0].expr));
          (yyval.expr) = new EXPR();
          (yyval.expr)->exprType = "bool";   
          backpatch((yyvsp[-3].expr)->false_list, (yyvsp[-1].instr_ind)); 
          (yyval.expr)->false_list = (yyvsp[0].expr)->false_list; 
          (yyval.expr)->true_list = merge((yyvsp[-3].expr)->true_list, (yyvsp[0].expr)->true_list); 
    }
#line 2655 "y.tab.c"
    break;

  case 66: /* conditional_expression: logical_OR_expression  */
#line 494 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2661 "y.tab.c"
    break;

  case 67: /* conditional_expression: logical_OR_expression N TERNARY_QM M expression N TERNARY_SEP M conditional_expression  */
#line 495 "tinyC3_22CS30063_22CS30066.y"
                                                                                             {  /// learn about this
            (yyval.expr)->addr = symbol_table::gentemp((yyvsp[-4].expr)->addr->type); 
            (yyval.expr)->addr->update((yyvsp[-4].expr)->addr->type);
            quad_table.emit("=", (yyval.expr)->addr->name, (yyvsp[0].expr)->addr->name);
            instruction_list* templist1 = makelist(next_instruction());
            quad_table.emit("goto", "");   
            backpatch((yyvsp[-3].statem)->next_list, next_instruction());   
            quad_table.emit("=", (yyval.expr)->addr->name, (yyvsp[-4].expr)->addr->name); 
            instruction_list* templist2 = makelist(next_instruction());
            templist1 = merge(templist1, templist2);
            quad_table.emit("goto", "");   
            backpatch((yyvsp[-7].statem)->next_list, next_instruction());   
            convInt2Bool((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr)->true_list, (yyvsp[-5].instr_ind)); 
            backpatch((yyvsp[-8].expr)->false_list, (yyvsp[-1].instr_ind)); 
            backpatch(templist1, next_instruction());
        }
#line 2683 "y.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 515 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.expr) = (yyvsp[0].expr);}
#line 2689 "y.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 516 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { 
            if ((yyvsp[-2].arr)->sub_type == "arr") { 
                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->type->base);
                quad_table.emit("[]=", (yyvsp[-2].arr)->location->name, (yyvsp[-2].arr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else if ((yyvsp[-2].arr)->sub_type == "ptr") quad_table.emit("*=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name); 
            else {
                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->location->type->base);
                quad_table.emit("=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name); 
            }
            (yyval.expr) = (yyvsp[0].expr);
    }
#line 2706 "y.tab.c"
    break;

  case 70: /* assignment_operator: ASS_EQ  */
#line 531 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2712 "y.tab.c"
    break;

  case 71: /* assignment_operator: MUL_EQ  */
#line 532 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2718 "y.tab.c"
    break;

  case 72: /* assignment_operator: DIV_EQ  */
#line 533 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2724 "y.tab.c"
    break;

  case 73: /* assignment_operator: MOD_EQ  */
#line 534 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2730 "y.tab.c"
    break;

  case 74: /* assignment_operator: PLUS_EQ  */
#line 535 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2736 "y.tab.c"
    break;

  case 75: /* assignment_operator: SUB_EQ  */
#line 536 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2742 "y.tab.c"
    break;

  case 76: /* assignment_operator: AND_EQ  */
#line 537 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2748 "y.tab.c"
    break;

  case 77: /* assignment_operator: XOR_EQ  */
#line 538 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2754 "y.tab.c"
    break;

  case 78: /* assignment_operator: OR_EQ  */
#line 539 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2760 "y.tab.c"
    break;

  case 79: /* assignment_operator: SLL_EQ  */
#line 540 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2766 "y.tab.c"
    break;

  case 80: /* assignment_operator: SLR_EQ  */
#line 541 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2772 "y.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 545 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2778 "y.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 546 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2784 "y.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 551 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2790 "y.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 557 "tinyC3_22CS30063_22CS30066.y"
                                                                { /*Will not required*/ }
#line 2796 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator  */
#line 573 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Will not required*/ }
#line 2802 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 574 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Will not required*/ }
#line 2808 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator  */
#line 578 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.symb) = (yyvsp[0].symb); }
#line 2814 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator ASS_EQ initializer  */
#line 579 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          if ((yyvsp[0].symb)->initial_value != "") (yyvsp[-2].symb)->initial_value = (yyvsp[0].symb)->initial_value;
          quad_table.emit("=", (yyvsp[-2].symb)->name, (yyvsp[0].symb)->name);
    }
#line 2823 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: EXTERN  */
#line 586 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2829 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: STATIC  */
#line 587 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2835 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 588 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2841 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 589 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2847 "y.tab.c"
    break;

  case 101: /* type_specifier: VOID  */
#line 593 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "void";    }
#line 2853 "y.tab.c"
    break;

  case 102: /* type_specifier: CHAR  */
#line 594 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "char";    }
#line 2859 "y.tab.c"
    break;

  case 103: /* type_specifier: SHORT  */
#line 595 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2865 "y.tab.c"
    break;

  case 104: /* type_specifier: INT  */
#line 596 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "int";     }
#line 2871 "y.tab.c"
    break;

  case 105: /* type_specifier: LONG  */
#line 597 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2877 "y.tab.c"
    break;

  case 106: /* type_specifier: FLOAT  */
#line 598 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "float";   }
#line 2883 "y.tab.c"
    break;

  case 107: /* type_specifier: DOUBLE  */
#line 599 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2889 "y.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 600 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2895 "y.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 601 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2901 "y.tab.c"
    break;

  case 110: /* type_specifier: BOOL  */
#line 602 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2907 "y.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 603 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2913 "y.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 604 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2919 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 608 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2925 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 609 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2931 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 613 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2937 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: %empty  */
#line 614 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2943 "y.tab.c"
    break;

  case 117: /* type_qualifier: CONST  */
#line 618 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2949 "y.tab.c"
    break;

  case 118: /* type_qualifier: RESTRICT  */
#line 619 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2955 "y.tab.c"
    break;

  case 119: /* type_qualifier: VOLATILE  */
#line 620 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2961 "y.tab.c"
    break;

  case 120: /* fuction_specifier: INLINE  */
#line 624 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2967 "y.tab.c"
    break;

  case 121: /* declarator: pointer direct_declarator  */
#line 628 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
              symbol_type* t = (yyvsp[-1].symbType);
              while(t->sub_type != NULL) t = t->sub_type; 
              t->sub_type = (yyvsp[0].symb)->type;  
              (yyval.symb) = (yyvsp[0].symb)->update((yyvsp[-1].symbType));       
          }
#line 2978 "y.tab.c"
    break;

  case 122: /* declarator: direct_declarator  */
#line 634 "tinyC3_22CS30063_22CS30066.y"
                          { (yyval.symb) = (yyvsp[0].symb); }
#line 2984 "y.tab.c"
    break;

  case 123: /* direct_declarator: IDENTIFIER  */
#line 638 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { 
                (yyval.symb) = (yyvsp[0].symb)->update(new symbol_type(data_type));   
                current_symbol = (yyvsp[0].symb); 
      }
#line 2993 "y.tab.c"
    break;

  case 124: /* direct_declarator: LP declarator RP  */
#line 642 "tinyC3_22CS30063_22CS30066.y"
                                                                                        {  (yyval.symb) = (yyvsp[-1].symb); }
#line 2999 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator LBP type_qualifier_list assignment_expression RBP  */
#line 643 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { }
#line 3005 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LBP type_qualifier_list RBP  */
#line 644 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { }
#line 3011 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LBP assignment_expression RBP  */
#line 645 "tinyC3_22CS30063_22CS30066.y"
                                                      {
        symbol_type* t = (yyvsp[-3].symb)->type;
        symbol_type* prev = NULL;
        while(t->base == "arr") {
            prev = t;
            t = t->sub_type;
        }
        if (prev == NULL) {
            int temp = atoi((yyvsp[-1].expr)->addr->initial_value.c_str());   
            symbol_type* tp = new symbol_type("arr", (yyvsp[-3].symb)->type, temp);  
            (yyval.symb) = (yyvsp[-3].symb)->update(tp);    
        }
        else {
            int temp = atoi((yyvsp[-1].expr)->addr->initial_value.c_str());   
            prev->sub_type = new symbol_type("arr", t, temp); 
            (yyval.symb) = (yyvsp[-3].symb)->update((yyvsp[-3].symb)->type);  
        }
     }
#line 3034 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LBP RBP  */
#line 663 "tinyC3_22CS30063_22CS30066.y"
                                {
        symbol_type* t = (yyvsp[-2].symb)->type;
        symbol_type* prev = NULL;
        while(t->base == "arr") {
            prev = t;
            t = t->sub_type;
        }
        if (prev == NULL) {
            symbol_type* tp = new symbol_type("arr", (yyvsp[-2].symb)->type, 0);  
            (yyval.symb) = (yyvsp[-2].symb)->update(tp); 
        }
        else {
            prev->sub_type = new symbol_type("arr", t, 0);
            (yyval.symb) = (yyvsp[-2].symb)->update((yyvsp[-2].symb)->type);  
        }
    }
#line 3055 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LBP STATIC type_qualifier_list assignment_expression RBP  */
#line 679 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3061 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LBP STATIC assignment_expression RBP  */
#line 680 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3067 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP  */
#line 681 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { /* Will not required*/ }
#line 3073 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator LBP type_qualifier_list STAR RBP  */
#line 682 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3079 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LBP STAR RBP  */
#line 683 "tinyC3_22CS30063_22CS30066.y"
                                                                { /* Will not required*/ }
#line 3085 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LP change_table parameter_type_list RP  */
#line 684 "tinyC3_22CS30063_22CS30066.y"
                                                                                                     { 
        current_symbol_table->name = (yyvsp[-4].symb)->name; 
        if ((yyvsp[-4].symb)->type->base != "void") {
            symbol* s = current_symbol_table->lookup("return");  
            s->update((yyvsp[-4].symb)->type);    
        }
        (yyvsp[-4].symb)->nested_table = current_symbol_table;   
        current_symbol_table->parent = global_symbol_table;   
        switchTable(global_symbol_table);  
        current_symbol = (yyval.symb); 
    }
#line 3101 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LP identifier_list RP  */
#line 695 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { }
#line 3107 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LP change_table RP  */
#line 696 "tinyC3_22CS30063_22CS30066.y"
                                           {
        current_symbol_table->name = (yyvsp[-3].symb)->name; 
        if ((yyvsp[-3].symb)->type->base != "void") {
            symbol* s = current_symbol_table->lookup("return");  
            s->update((yyvsp[-3].symb)->type);    
        }
        (yyvsp[-3].symb)->nested_table = current_symbol_table;    
        current_symbol_table->parent = global_symbol_table;   
        switchTable(global_symbol_table);  
        current_symbol = (yyval.symb);
    }
#line 3123 "y.tab.c"
    break;

  case 137: /* pointer: STAR type_qualifier_list_opt  */
#line 711 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.symbType) =  new symbol_type("ptr"); }
#line 3129 "y.tab.c"
    break;

  case 138: /* pointer: STAR type_qualifier_list_opt pointer  */
#line 712 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.symbType) = new symbol_type("ptr", (yyvsp[0].symbType)); }
#line 3135 "y.tab.c"
    break;

  case 139: /* type_qualifier_list: type_qualifier  */
#line 718 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3141 "y.tab.c"
    break;

  case 140: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 719 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3147 "y.tab.c"
    break;

  case 141: /* type_qualifier_list_opt: type_qualifier_list  */
#line 723 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3153 "y.tab.c"
    break;

  case 142: /* type_qualifier_list_opt: %empty  */
#line 724 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3159 "y.tab.c"
    break;

  case 143: /* parameter_type_list: parameter_list  */
#line 728 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3165 "y.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list COMMA SPREAD_OP  */
#line 729 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3171 "y.tab.c"
    break;

  case 145: /* parameter_list: parameter_declaration  */
#line 733 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3177 "y.tab.c"
    break;

  case 146: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 734 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3183 "y.tab.c"
    break;

  case 147: /* parameter_declaration: declaration_specifiers declarator  */
#line 738 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3189 "y.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers  */
#line 739 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3195 "y.tab.c"
    break;

  case 149: /* identifier_list: IDENTIFIER  */
#line 743 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3201 "y.tab.c"
    break;

  case 150: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 744 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3207 "y.tab.c"
    break;

  case 151: /* type_name: specifier_qualifier_list  */
#line 748 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3213 "y.tab.c"
    break;

  case 152: /* initializer: assignment_expression  */
#line 752 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.symb) = (yyvsp[0].expr)->addr; }
#line 3219 "y.tab.c"
    break;

  case 153: /* initializer: LCP initializer_list RCP  */
#line 753 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3225 "y.tab.c"
    break;

  case 154: /* initializer: LCP initializer_list COMMA RCP  */
#line 754 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3231 "y.tab.c"
    break;

  case 155: /* initializer_list: designation_opt initializer  */
#line 758 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3237 "y.tab.c"
    break;

  case 156: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 759 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3243 "y.tab.c"
    break;

  case 157: /* designation: designator_list ASS_EQ  */
#line 763 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3249 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 767 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3255 "y.tab.c"
    break;

  case 159: /* designation_opt: %empty  */
#line 768 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3261 "y.tab.c"
    break;

  case 160: /* designator_list: designator  */
#line 772 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3267 "y.tab.c"
    break;

  case 161: /* designator_list: designator_list designator  */
#line 773 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3273 "y.tab.c"
    break;

  case 162: /* designator: LBP constant_expression RBP  */
#line 777 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3279 "y.tab.c"
    break;

  case 163: /* designator: DOT IDENTIFIER  */
#line 778 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3285 "y.tab.c"
    break;

  case 164: /* statement: labeled_statement  */
#line 782 "tinyC3_22CS30063_22CS30066.y"
                                {}
#line 3291 "y.tab.c"
    break;

  case 165: /* statement: compound_statement  */
#line 783 "tinyC3_22CS30063_22CS30066.y"
                                 { (yyval.statem) = (yyvsp[0].statem); }
#line 3297 "y.tab.c"
    break;

  case 166: /* statement: expression_statement  */
#line 784 "tinyC3_22CS30063_22CS30066.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->next_list = (yyvsp[0].expr)->next_list;
            }
#line 3306 "y.tab.c"
    break;

  case 167: /* statement: selection_statement  */
#line 788 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3312 "y.tab.c"
    break;

  case 168: /* statement: iteration_statement  */
#line 789 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3318 "y.tab.c"
    break;

  case 169: /* statement: jump_statement  */
#line 790 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3324 "y.tab.c"
    break;

  case 170: /* loop_statement: labeled_statement  */
#line 794 "tinyC3_22CS30063_22CS30066.y"
                                  {}
#line 3330 "y.tab.c"
    break;

  case 171: /* loop_statement: expression_statement  */
#line 795 "tinyC3_22CS30063_22CS30066.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->next_list = (yyvsp[0].expr)->next_list;
            }
#line 3339 "y.tab.c"
    break;

  case 172: /* loop_statement: selection_statement  */
#line 799 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3345 "y.tab.c"
    break;

  case 173: /* loop_statement: iteration_statement  */
#line 800 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3351 "y.tab.c"
    break;

  case 174: /* loop_statement: jump_statement  */
#line 801 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3357 "y.tab.c"
    break;

  case 175: /* labeled_statement: IDENTIFIER TERNARY_SEP statement  */
#line 804 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3363 "y.tab.c"
    break;

  case 176: /* labeled_statement: CASE constant_expression TERNARY_SEP statement  */
#line 805 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3369 "y.tab.c"
    break;

  case 177: /* labeled_statement: DEFAULT TERNARY_SEP statement  */
#line 806 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3375 "y.tab.c"
    break;

  case 178: /* compound_statement: LCP X change_table block_item_list_opt RCP  */
#line 810 "tinyC3_22CS30063_22CS30066.y"
                                                                                       { 
        (yyval.statem) = (yyvsp[-1].statem);
        switchTable(current_symbol_table->parent);
      }
#line 3384 "y.tab.c"
    break;

  case 179: /* block_item_list: block_item  */
#line 817 "tinyC3_22CS30063_22CS30066.y"
                 { (yyval.statem) = (yyvsp[0].statem); }
#line 3390 "y.tab.c"
    break;

  case 180: /* block_item_list: block_item_list M block_item  */
#line 818 "tinyC3_22CS30063_22CS30066.y"
                                   { 
          (yyval.statem) = (yyvsp[0].statem);
          backpatch((yyvsp[-2].statem)->next_list, (yyvsp[-1].instr_ind));    
    }
#line 3399 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: block_item_list  */
#line 825 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = (yyvsp[0].statem); }
#line 3405 "y.tab.c"
    break;

  case 182: /* block_item_list_opt: %empty  */
#line 826 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = new S(); }
#line 3411 "y.tab.c"
    break;

  case 183: /* block_item: declaration  */
#line 830 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = new S(); }
#line 3417 "y.tab.c"
    break;

  case 184: /* block_item: statement  */
#line 831 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = (yyvsp[0].statem); }
#line 3423 "y.tab.c"
    break;

  case 185: /* expression_statement: expression SEMICOLON  */
#line 834 "tinyC3_22CS30063_22CS30066.y"
                                               { (yyval.expr) = (yyvsp[-1].expr); }
#line 3429 "y.tab.c"
    break;

  case 186: /* expression_statement: SEMICOLON  */
#line 835 "tinyC3_22CS30063_22CS30066.y"
                                    { (yyval.expr) = new EXPR(); }
#line 3435 "y.tab.c"
    break;

  case 187: /* selection_statement: IF I LP expression RP M statement N  */
#line 839 "tinyC3_22CS30063_22CS30066.y"
                                          { 
        convInt2Bool((yyvsp[-4].expr));
        (yyval.statem) = new S();
        backpatch((yyvsp[-4].expr)->true_list, (yyvsp[-2].instr_ind)); 
        instruction_list* temp = merge((yyvsp[-4].expr)->false_list, (yyvsp[-1].statem)->next_list);
        (yyval.statem)->next_list = merge((yyvsp[0].statem)->next_list, temp); 
      }
#line 3447 "y.tab.c"
    break;

  case 188: /* selection_statement: IF I LP expression RP M statement N ELSE E M statement  */
#line 846 "tinyC3_22CS30063_22CS30066.y"
                                                             { 
        convInt2Bool((yyvsp[-8].expr));
        (yyval.statem) = new S();
        backpatch((yyvsp[-8].expr)->true_list, (yyvsp[-6].instr_ind)); 
        backpatch((yyvsp[-8].expr)->false_list, (yyvsp[-1].instr_ind)); 
        instruction_list* temp = merge((yyvsp[-5].statem)->next_list, (yyvsp[-4].statem)->next_list); 
        (yyval.statem)->next_list = merge((yyvsp[0].statem)->next_list, temp); 
    }
#line 3460 "y.tab.c"
    break;

  case 189: /* selection_statement: SWITCH LP expression RP statement  */
#line 854 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /*Not Required*/}
#line 3466 "y.tab.c"
    break;

  case 190: /* iteration_statement: WHILE W LP X change_table M expression RP M loop_statement  */
#line 857 "tinyC3_22CS30063_22CS30066.y"
                                                                                 { 
                        (yyval.statem) = new S(); 
                        convInt2Bool((yyvsp[-3].expr));
                        backpatch((yyvsp[0].statem)->next_list, (yyvsp[-4].instr_ind));   
                        backpatch((yyvsp[-3].expr)->true_list, (yyvsp[-1].instr_ind));    
                        (yyval.statem)->next_list = (yyvsp[-3].expr)->false_list; 
                        quad_table.emit("goto", convInt2Str((yyvsp[-4].instr_ind))); 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3481 "y.tab.c"
    break;

  case 191: /* iteration_statement: WHILE W LP X change_table M expression RP LCP M block_item_list_opt RCP  */
#line 867 "tinyC3_22CS30063_22CS30066.y"
                                                                                              { 
                        (yyval.statem) = new S(); // new statement
                        convInt2Bool((yyvsp[-5].expr));
                        backpatch((yyvsp[-1].statem)->next_list, (yyvsp[-6].instr_ind));   
                        backpatch((yyvsp[-5].expr)->true_list, (yyvsp[-2].instr_ind));   
                        (yyval.statem)->next_list = (yyvsp[-5].expr)->false_list;  
                        quad_table.emit("goto", convInt2Str((yyvsp[-6].instr_ind))); 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3496 "y.tab.c"
    break;

  case 192: /* iteration_statement: DO D M loop_statement M WHILE LP expression RP SEMICOLON  */
#line 877 "tinyC3_22CS30063_22CS30066.y"
                                                                               {   
                        (yyval.statem) = new S();
                        convInt2Bool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->true_list, (yyvsp[-7].instr_ind));   
                        backpatch((yyvsp[-6].statem)->next_list, (yyvsp[-5].instr_ind));   
                        (yyval.statem)->next_list = (yyvsp[-2].expr)->false_list;  
                        block_name = "";
                    }
#line 3509 "y.tab.c"
    break;

  case 193: /* iteration_statement: DO D LCP M block_item_list_opt RCP M WHILE LP expression RP SEMICOLON  */
#line 885 "tinyC3_22CS30063_22CS30066.y"
                                                                                            {  
                        (yyval.statem) = new S();
                        convInt2Bool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->true_list, (yyvsp[-8].instr_ind));    
                        backpatch((yyvsp[-7].statem)->next_list, (yyvsp[-5].instr_ind));    
                        (yyval.statem)->next_list = (yyvsp[-2].expr)->false_list;  
                        block_name = "";
                    }
#line 3522 "y.tab.c"
    break;

  case 194: /* iteration_statement: FOR F LP X change_table declaration M expression_statement M expression N RP M loop_statement  */
#line 893 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                    {  
                        convInt2Bool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->true_list, (yyvsp[-1].instr_ind)); 
                        backpatch((yyvsp[-3].statem)->next_list, (yyvsp[-7].instr_ind)); 
                        backpatch((yyvsp[0].statem)->next_list, (yyvsp[-5].instr_ind));
                        quad_table.emit("goto", convInt2Str((yyvsp[-5].instr_ind)));
                        (yyval.statem)->next_list = (yyvsp[-6].expr)->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3537 "y.tab.c"
    break;

  case 195: /* iteration_statement: FOR F LP X change_table expression_statement M expression_statement M expression N RP M loop_statement  */
#line 903 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                             {  
                        (yyval.statem) = new S();
                        convInt2Bool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->true_list, (yyvsp[-1].instr_ind)); 
                        backpatch((yyvsp[-3].statem)->next_list, (yyvsp[-7].instr_ind)); 
                        backpatch((yyvsp[0].statem)->next_list, (yyvsp[-5].instr_ind)); 
                        quad_table.emit("goto", convInt2Str((yyvsp[-5].instr_ind))); 
                        (yyval.statem)->next_list = (yyvsp[-6].expr)->false_list; 
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3553 "y.tab.c"
    break;

  case 196: /* iteration_statement: FOR F LP X change_table declaration M expression_statement M expression N RP M LCP block_item_list_opt RCP  */
#line 914 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                                 {  
                        (yyval.statem) = new S();
                        convInt2Bool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->true_list, (yyvsp[-3].instr_ind)); 
                        backpatch((yyvsp[-5].statem)->next_list, (yyvsp[-9].instr_ind)); 
                        backpatch((yyvsp[-1].statem)->next_list, (yyvsp[-7].instr_ind)); 
                        quad_table.emit("goto", convInt2Str((yyvsp[-7].instr_ind))); 
                        (yyval.statem)->next_list = (yyvsp[-8].expr)->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3569 "y.tab.c"
    break;

  case 197: /* iteration_statement: FOR F LP X change_table expression_statement M expression_statement M expression N RP M LCP block_item_list_opt RCP  */
#line 925 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                                          { 
                        (yyval.statem) = new S();
                        convInt2Bool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->true_list, (yyvsp[-3].instr_ind)); 
                        backpatch((yyvsp[-5].statem)->next_list, (yyvsp[-9].instr_ind)); 
                        backpatch((yyvsp[-1].statem)->next_list, (yyvsp[-7].instr_ind)); 
                        quad_table.emit("goto", convInt2Str((yyvsp[-7].instr_ind))); 
                        (yyval.statem)->next_list = (yyvsp[-8].expr)->false_list;  
                        block_name = "";
                        switchTable(current_symbol_table->parent);
                    }
#line 3585 "y.tab.c"
    break;

  case 198: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 938 "tinyC3_22CS30063_22CS30066.y"
                                            {}
#line 3591 "y.tab.c"
    break;

  case 199: /* jump_statement: CONTINUE SEMICOLON  */
#line 939 "tinyC3_22CS30063_22CS30066.y"
                                     { (yyval.statem) = new S(); }
#line 3597 "y.tab.c"
    break;

  case 200: /* jump_statement: BREAK SEMICOLON  */
#line 940 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = new S(); }
#line 3603 "y.tab.c"
    break;

  case 201: /* jump_statement: RETURN expression SEMICOLON  */
#line 941 "tinyC3_22CS30063_22CS30066.y"
                                              {
                    (yyval.statem) = new S();
                    quad_table.emit("return", (yyvsp[-1].expr)->addr->name);
                }
#line 3612 "y.tab.c"
    break;

  case 202: /* jump_statement: RETURN SEMICOLON  */
#line 945 "tinyC3_22CS30063_22CS30066.y"
                                   {
                    (yyval.statem) = new S();
                    quad_table.emit("return", ""); 
                }
#line 3621 "y.tab.c"
    break;

  case 203: /* M: %empty  */
#line 951 "tinyC3_22CS30063_22CS30066.y"
    { (yyval.instr_ind) = next_instruction(); }
#line 3627 "y.tab.c"
    break;

  case 204: /* N: %empty  */
#line 953 "tinyC3_22CS30063_22CS30066.y"
    { (yyval.statem) = new S(); (yyval.statem)->next_list = makelist(next_instruction()); quad_table.emit("goto", ""); }
#line 3633 "y.tab.c"
    break;

  case 205: /* F: %empty  */
#line 955 "tinyC3_22CS30063_22CS30066.y"
       { block_name = "FOR"; }
#line 3639 "y.tab.c"
    break;

  case 206: /* W: %empty  */
#line 957 "tinyC3_22CS30063_22CS30066.y"
       { block_name = "WHILE"; }
#line 3645 "y.tab.c"
    break;

  case 207: /* D: %empty  */
#line 959 "tinyC3_22CS30063_22CS30066.y"
       { block_name = "DO"; }
#line 3651 "y.tab.c"
    break;

  case 208: /* I: %empty  */
#line 961 "tinyC3_22CS30063_22CS30066.y"
       { block_name = "IF"; }
#line 3657 "y.tab.c"
    break;

  case 209: /* E: %empty  */
#line 963 "tinyC3_22CS30063_22CS30066.y"
       { block_name = "ELSE"; }
#line 3663 "y.tab.c"
    break;

  case 210: /* X: %empty  */
#line 965 "tinyC3_22CS30063_22CS30066.y"
       { 
        string newSymbolTableName = current_symbol_table->name + "." + block_name + "$" + to_string(symbol_table_cnt++); 
        symbol* symbolFound = current_symbol_table->lookup(newSymbolTableName); 
        symbolFound->nested_table = new symbol_table(newSymbolTableName); 
        symbolFound->name = newSymbolTableName; 
        symbolFound->nested_table->parent = current_symbol_table;
        symbolFound->type = new symbol_type("block");
        current_symbol = symbolFound;
        block_name = ""; 
    }
#line 3678 "y.tab.c"
    break;

  case 211: /* change_table: %empty  */
#line 977 "tinyC3_22CS30063_22CS30066.y"
                   {
                    if (current_symbol->nested_table != NULL) {
                        switchTable(current_symbol->nested_table); 
                        quad_table.emit("label", current_symbol_table->name);
                    }
                    else {
                        switchTable(new symbol_table(""));
                    }
                }
#line 3692 "y.tab.c"
    break;

  case 212: /* translation_unit: external_declaration  */
#line 990 "tinyC3_22CS30063_22CS30066.y"
                                           {}
#line 3698 "y.tab.c"
    break;

  case 213: /* translation_unit: translation_unit external_declaration  */
#line 991 "tinyC3_22CS30063_22CS30066.y"
                                                            {}
#line 3704 "y.tab.c"
    break;

  case 214: /* external_declaration: function_definition  */
#line 994 "tinyC3_22CS30063_22CS30066.y"
                                              {}
#line 3710 "y.tab.c"
    break;

  case 215: /* external_declaration: declaration  */
#line 995 "tinyC3_22CS30063_22CS30066.y"
                                      {}
#line 3716 "y.tab.c"
    break;

  case 216: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table LCP block_item_list_opt RCP  */
#line 998 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                      {
                        current_symbol_table->parent = global_symbol_table;
                        symbol_table_cnt = 0;
                        switchTable(global_symbol_table);  
                    }
#line 3726 "y.tab.c"
    break;

  case 217: /* declaration_list_opt: declaration_list  */
#line 1005 "tinyC3_22CS30063_22CS30066.y"
                                           {}
#line 3732 "y.tab.c"
    break;

  case 218: /* declaration_list_opt: %empty  */
#line 1006 "tinyC3_22CS30063_22CS30066.y"
                           {}
#line 3738 "y.tab.c"
    break;

  case 219: /* declaration_list: declaration  */
#line 1009 "tinyC3_22CS30063_22CS30066.y"
                                  {}
#line 3744 "y.tab.c"
    break;

  case 220: /* declaration_list: declaration_list declaration  */
#line 1010 "tinyC3_22CS30063_22CS30066.y"
                                                   {}
#line 3750 "y.tab.c"
    break;


#line 3754 "y.tab.c"

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

#line 1012 "tinyC3_22CS30063_22CS30066.y"



void yyerror(char * s){
    printf("ERROR: %s \t line_no: %d \t token: %s \n", s, yylineno, yytext);
    exit(0);
}

