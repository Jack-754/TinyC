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

    extern symbol* currentSymbol;
    extern symbol_table* currentSymbolTable;
    extern symbol_table* globalSymbolTable;
    extern quad_list quadTable;
    extern int SymbolTableCount;
    extern string blockName;
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
    E *expr;   
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
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_constant = 94,                  /* constant  */
  YYSYMBOL_postfix_expression = 95,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 97, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_unary_operator = 99,            /* unary_operator  */
  YYSYMBOL_cast_expression = 100,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 101, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 102,      /* additive_expression  */
  YYSYMBOL_shift_expression = 103,         /* shift_expression  */
  YYSYMBOL_relational_expression = 104,    /* relational_expression  */
  YYSYMBOL_equality_expression = 105,      /* equality_expression  */
  YYSYMBOL_AND_expression = 106,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 107,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 108,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 109,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 110,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 111,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 113,      /* assignment_operator  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 117,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 118,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 119,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 120,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 121,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 123, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_fuction_specifier = 125,        /* fuction_specifier  */
  YYSYMBOL_declarator = 126,               /* declarator  */
  YYSYMBOL_direct_declarator = 127,        /* direct_declarator  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 130,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 131,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 132,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 133,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 134,          /* identifier_list  */
  YYSYMBOL_type_name = 135,                /* type_name  */
  YYSYMBOL_initializer = 136,              /* initializer  */
  YYSYMBOL_initializer_list = 137,         /* initializer_list  */
  YYSYMBOL_designation = 138,              /* designation  */
  YYSYMBOL_designation_opt = 139,          /* designation_opt  */
  YYSYMBOL_designator_list = 140,          /* designator_list  */
  YYSYMBOL_designator = 141,               /* designator  */
  YYSYMBOL_statement = 142,                /* statement  */
  YYSYMBOL_loop_statement = 143,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 144,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 145,       /* compound_statement  */
  YYSYMBOL_block_item_list = 146,          /* block_item_list  */
  YYSYMBOL_block_item_list_opt = 147,      /* block_item_list_opt  */
  YYSYMBOL_block_item = 148,               /* block_item  */
  YYSYMBOL_expression_statement = 149,     /* expression_statement  */
  YYSYMBOL_selection_statement = 150,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 151,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 152,           /* jump_statement  */
  YYSYMBOL_M = 153,                        /* M  */
  YYSYMBOL_N = 154,                        /* N  */
  YYSYMBOL_F = 155,                        /* F  */
  YYSYMBOL_W = 156,                        /* W  */
  YYSYMBOL_D = 157,                        /* D  */
  YYSYMBOL_X = 158,                        /* X  */
  YYSYMBOL_change_table = 159,             /* change_table  */
  YYSYMBOL_translation_unit = 160,         /* translation_unit  */
  YYSYMBOL_external_declaration = 161,     /* external_declaration  */
  YYSYMBOL_function_definition = 162,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 163,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 164          /* declaration_list  */
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

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
       0,    75,    75,    80,    84,    89,    92,    96,   100,   109,
     115,   132,   137,   138,   139,   145,   151,   152,   156,   159,
     166,   167,   171,   172,   176,   180,   207,   208,   212,   213,
     214,   215,   216,   217,   221,   222,   229,   240,   250,   260,
     274,   275,   285,   298,   299,   309,   322,   323,   336,   349,
     362,   378,   379,   394,   412,   413,   429,   430,   446,   447,
     462,   463,   475,   476,   488,   489,   509,   510,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   539,
     540,   545,   551,   555,   556,   557,   558,   559,   560,   561,
     562,   567,   568,   572,   573,   580,   581,   582,   583,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   602,   603,   607,   608,   612,   613,   614,   618,   622,
     628,   632,   636,   637,   638,   639,   657,   673,   674,   675,
     676,   677,   678,   689,   690,   705,   706,   712,   713,   717,
     718,   722,   723,   727,   728,   732,   733,   737,   738,   742,
     746,   747,   748,   752,   753,   757,   761,   762,   766,   767,
     771,   772,   776,   777,   778,   782,   783,   784,   788,   789,
     793,   794,   795,   798,   799,   800,   804,   811,   812,   819,
     820,   824,   825,   828,   829,   833,   841,   850,   853,   863,
     873,   881,   889,   899,   910,   921,   934,   935,   936,   937,
     941,   947,   949,   951,   953,   955,   957,   968,   981,   982,
     985,   986,   989,   996,   997,  1000,  1001
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
  "STRING_LITERAL", "$accept", "primary_expression", "constant",
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
  "iteration_statement", "jump_statement", "M", "N", "F", "W", "D", "X",
  "change_table", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-215)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1422,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   -19,  1422,  1422,  1422,  1422,  1354,  -341,  -341,
     -19,    38,  -341,     4,  -341,  1276,   123,   -28,  -341,  -341,
    -341,  -341,  -341,  -341,   -17,  -341,    38,   -21,  -341,   -19,
    1007,  -341,   -19,  -341,  1422,   -53,   529,   123,  -341,  -341,
    -341,  -341,    -1,  1135,   475,   127,  -341,  1149,  1149,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,   146,   300,  1187,  -341,   119,   117,   147,   128,   129,
       8,    15,    41,    57,   -29,  -341,  -341,  -341,    76,  -341,
    -341,     6,  1388,   629,  -341,    93,   107,   583,   475,  -341,
    -341,    29,  1453,  -341,  1453,   131,  1187,    68,    96,  -341,
    1007,    -7,  -341,   475,  -341,  -341,  1187,  1187,   105,   110,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  1187,  -341,  -341,  1187,  1187,  1187,  1187,
    1187,  1187,  1187,  1187,  1187,  1187,  1187,  1187,  1187,  1187,
    1187,  1187,  -341,  -341,   150,   299,  -341,   115,  -341,   -19,
     164,   169,  -341,   176,   629,  -341,  -341,  1187,  -341,   190,
     192,   203,  -341,  1187,  -341,  -341,  -341,  1045,  -341,   202,
    -341,  -341,   114,  -341,  -341,  -341,   207,   205,   212,  -341,
     -32,  -341,  -341,  -341,  -341,  -341,  -341,   119,   119,   117,
     117,   147,   147,   147,   147,   128,   128,   129,     8,    15,
    1187,  1187,  -341,   208,  1059,  1187,  -341,  -341,   168,   210,
     221,   214,  -341,   225,  -341,  -341,   217,   172,  -341,  -341,
    -341,  -341,   226,   227,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  1317,  -341,   228,   231,  -341,  -341,   229,  -341,
     127,  -341,  -341,  -341,  1007,   229,  1187,  -341,  -341,    41,
      57,  1187,  -341,  -341,   179,   222,   237,   238,   233,  -341,
    1187,   714,   239,  1187,  -341,   714,  -341,   299,  -341,  -341,
    -341,  -341,  -341,   130,  -341,  -341,   235,  -341,   714,  -341,
    -341,  -341,   235,  -341,  -341,   969,    65,   299,  -341,  -341,
    -341,   126,   230,  -341,  -341,  -341,   245,   299,  -341,  -341,
    -341,  -341,  -341,  -341,   714,   244,  -341,  -341,   388,  -341,
    -341,   246,   270,  -341,  -341,  1187,  -341,  -341,  1187,   714,
    -341,   250,  -341,  1097,  1097,    95,  -341,   273,  1187,  -341,
    -341,   252,   258,   256,    99,  1187,  1187,  -341,   969,  -341,
    1187,   253,   235,   235,   299,  -341,   714,   106,  -341,   257,
     259,   260,  -341,   255,  -341,  -341,  -341,  -341,   799,   884,
     299,  -341,   299,  -341,   292,   293,  -341,  -341
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   116,   107,    95,    99,   104,   101,   117,   100,
     106,   115,   108,    96,   109,   118,   110,   102,   105,   103,
      98,   211,     0,    88,    84,    89,    90,     0,   208,   210,
       0,   140,   121,     0,    91,    93,   120,     0,    85,    83,
      86,    87,     1,   209,     0,   137,   139,   135,    82,     0,
       0,   215,     0,   207,   213,   207,     0,   119,   122,   138,
     136,    92,    93,     0,     0,   157,    33,     0,     0,    30,
      31,    29,    28,    32,     2,     6,     7,     8,     4,     9,
       3,    22,    34,     0,    36,    40,    43,    46,    51,    54,
      56,    58,    60,    62,    64,    66,   150,    94,     0,   216,
     147,     0,     0,     0,   126,    29,     0,     0,     0,    26,
      79,     0,   114,   149,   114,     0,     0,     0,     0,   156,
       0,     0,   158,     0,    23,    24,    21,     0,     0,     0,
      14,    15,    68,    69,    70,    71,    72,    73,    78,    77,
      74,    75,    76,     0,    34,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   201,     0,   180,   133,     0,   134,   146,
       0,   141,   143,     0,     0,   131,   125,     0,   124,    29,
       0,     0,     5,     0,   113,   111,   112,     0,    81,     0,
     161,   151,   157,   153,   155,   159,     0,    20,     0,    18,
       0,    12,    13,    67,    37,    38,    39,    41,    42,    45,
      44,    48,    47,    49,    50,    52,    53,    55,    57,    59,
       0,     0,   201,     0,     0,     0,   203,   204,     0,     0,
       0,     0,   205,     0,   206,   184,     2,     0,   181,   182,
     162,   163,   201,     0,   177,   164,   165,   166,   167,   148,
     145,   132,     0,   128,     0,     0,   130,   123,    27,    80,
     157,    35,   160,   152,     0,     0,     0,    11,    10,    61,
      63,     0,   198,   200,     0,     0,     0,     0,     0,   197,
       0,     0,   201,     0,   207,     0,   183,     0,   212,   142,
     144,   127,   129,     0,   154,    19,   202,   199,     0,   206,
     206,   196,   202,   175,   201,     0,     0,   180,   173,   178,
      16,   157,     0,   174,   207,   207,     0,   180,   201,   168,
     169,   170,   171,   172,     0,     0,    17,   201,     0,   201,
     201,     0,     0,   187,   176,     0,   201,   201,     0,     0,
     201,     0,    65,     0,     0,     0,   202,     0,     0,   201,
     201,   201,   185,     0,     0,     0,     0,   201,     0,   201,
       0,     0,   202,   202,   180,   188,     0,     0,   190,     0,
       0,     0,   186,     0,   201,   201,   189,   191,     0,     0,
     180,   192,   180,   193,     0,     0,   194,   195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,  -341,  -341,  -341,   -61,  -341,   -67,    84,
      89,    75,    85,   181,   178,   182,   122,   125,  -341,  -112,
     -42,  -341,   -63,   124,     0,     5,  -341,   295,  -341,    73,
      81,   234,     2,  -341,   -13,   310,   303,    26,  -341,  -341,
    -341,   100,  -341,   -83,  -110,    91,  -341,  -181,  -341,   232,
    -262,  -340,  -256,  -341,  -341,  -261,    67,  -178,  -234,  -230,
    -190,   -91,  -229,  -341,  -341,  -341,   -49,   -52,  -341,   331,
    -341,  -341,  -341
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    79,    80,    81,   197,   198,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
     110,   143,   237,   189,   238,    52,    33,    34,    23,    24,
     113,   185,    25,    26,    62,    36,    37,    46,    47,   170,
     171,   172,   101,   115,    97,   118,   119,   120,   121,   122,
     239,   318,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   220,   164,   276,   277,   282,   284,    98,    27,    28,
      29,    53,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   111,   109,   102,   188,    22,   124,   125,    96,    35,
     193,   264,    30,   268,   106,   183,   145,    44,   365,   303,
    -202,    30,   144,   308,    58,   181,   163,    21,    38,    39,
      40,    41,    22,    45,   100,    51,   313,   116,   381,   383,
     196,   117,    31,     2,    31,   111,   325,   166,    59,   319,
      48,    49,     8,   167,    99,   144,   331,    11,    45,    32,
     111,   173,   333,   194,   200,   180,   114,   312,    32,    50,
     182,   321,   221,   316,   159,   322,   183,   346,    96,   204,
     205,   206,   107,   160,   199,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   203,   319,   371,   372,    45,   324,   169,   161,    59,
     114,   162,   183,   188,   114,   323,   114,   352,   165,   384,
     261,   385,   319,   319,   321,   114,   144,   320,   322,   174,
     264,   271,   254,   369,   370,   255,   351,   112,   175,   191,
     361,   259,   183,   192,   321,   321,   183,   373,   322,   322,
     337,   287,   176,   183,   294,   190,   250,   263,   116,   144,
     144,   274,   117,    55,   144,   349,   350,    56,   323,   326,
     116,   116,   187,   310,   117,   117,    59,   311,   149,   150,
     320,   112,   146,   147,   148,   112,   126,   112,   323,   323,
     127,   305,   201,   184,   128,   184,   112,   202,   129,   222,
     320,   320,   249,   130,   131,   251,   151,   152,   296,   153,
     154,   155,   156,   317,   157,   158,   252,   302,   286,   183,
     306,   253,    96,   342,   295,   297,   183,   332,   211,   212,
     213,   214,   307,   207,   208,   256,   335,   257,   338,   339,
     209,   210,   215,   216,   258,   343,   344,   262,   265,   347,
     314,   315,   266,   267,   272,   278,   279,   169,   355,   356,
     358,   280,   328,   329,   281,   283,   364,   285,   366,  -179,
     288,   260,   298,   291,   144,   345,   292,   299,   300,   301,
     327,   304,   183,   378,   379,   354,   330,   334,   341,   340,
     348,   353,   362,   363,   357,   359,   360,   367,   374,   368,
     375,   377,     1,   376,     2,     3,   223,     4,   224,     5,
     225,     6,     7,     8,     9,   226,    10,   227,    11,   228,
      63,    12,   229,   230,    13,    14,   231,    15,   336,    16,
     232,    17,   233,    18,    19,   386,   387,    20,   218,    64,
     217,   234,   269,   219,    61,   235,   270,    57,   186,   275,
      60,   293,   290,   195,   309,    66,    67,    68,    43,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,     0,     0,     0,     0,   236,    75,    76,    77,
      78,     1,     0,     2,     3,     0,     4,     0,     5,     0,
       6,     7,     8,     9,     0,    10,     0,    11,     0,    63,
      12,     0,     0,    13,    14,     0,    15,     0,    16,     0,
      17,     0,    18,    19,     0,     0,    20,     0,    64,     0,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,     0,     0,    69,
      70,    71,     0,     0,    72,     0,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
       2,     3,     0,     0,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,    63,    12,     0,     0,
       0,    14,     0,     0,     0,    16,     0,    17,     0,    18,
      19,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    67,    68,     2,     0,    69,    70,    71,     0,
       0,    72,     0,     8,    73,     0,     0,     0,    11,     0,
      63,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,     0,     0,    64,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,     2,     0,
      69,    70,   105,     0,     0,    72,     0,     8,    73,     0,
       0,     0,    11,     0,    63,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,     0,     0,    64,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,    66,
      67,    68,     0,     8,    69,    70,   179,     0,    11,    72,
      63,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,     0,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,   223,     0,   224,     0,   225,     0,     0,     0,     0,
     226,     0,   227,     0,   228,    63,     0,   229,   230,     0,
       0,   231,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,    64,     0,   234,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,    68,     0,     0,    69,    70,    71,     0,     0,
      72,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,    75,    76,    77,    78,   223,     0,   224,     0,
     225,     0,     0,     0,     0,   226,     0,   227,     0,   228,
      63,     0,   229,   230,     0,     0,   231,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,     0,     0,    64,
       0,   380,     0,     0,     0,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,     0,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,    75,    76,    77,
      78,   223,     0,   224,     0,   225,     0,     0,     0,     0,
     226,     0,   227,     0,   228,    63,     0,   229,   230,     0,
       0,   231,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,    64,     0,   382,     0,     0,     0,
     235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,    68,     0,     0,    69,    70,    71,     0,     0,
      72,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,    75,    76,    77,    78,   223,     0,   224,     0,
     225,     0,     0,     0,     0,   226,     0,   227,     0,   228,
      63,     0,   229,   230,     0,     0,   231,     0,     0,     0,
     232,     0,   233,     0,     0,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     0,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,    63,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,    65,
       0,     0,     0,     0,     0,     0,   236,    75,    76,    77,
      78,     0,     0,    66,    67,    68,    63,     0,    69,    70,
      71,     0,     0,    72,     0,     0,    73,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,   260,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    64,
       0,    66,    67,    68,     0,   273,    69,    70,    71,     0,
       0,    72,     0,     0,    73,    66,    67,    68,    63,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
       0,     0,    74,    75,    76,    77,    78,    64,     0,     0,
       0,     0,     0,   235,     0,     0,    74,    75,    76,    77,
      78,     0,     0,    66,    67,    68,    63,     0,    69,    70,
      71,     0,     0,    72,     0,     0,    73,     0,     0,     0,
      63,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,   123,
       0,    66,    67,    68,     0,     0,    69,    70,    71,     0,
       0,    72,     0,     0,    73,    66,    67,    68,    63,     0,
      69,    70,    71,     0,     0,    72,     0,     0,    73,     0,
       0,     0,    74,    75,    76,    77,    78,    64,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,     0,     0,    66,    67,    68,     0,     0,    69,    70,
      71,     0,     0,    72,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,     1,
       0,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,     0,    10,     0,    11,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,    16,     0,    17,     0,
      18,    19,     0,     0,    20,     0,     0,     0,  -214,     0,
       1,     0,     2,     3,     0,     4,     0,     5,     0,     6,
       7,     8,     9,     0,    10,     0,    11,     0,     0,    12,
       0,     0,    13,    14,     0,    15,    50,    16,     0,    17,
       0,    18,    19,     0,    42,    20,     0,     1,     0,     2,
       3,     0,     4,     0,     5,     0,     6,     7,     8,     9,
     289,    10,     0,    11,     0,     0,    12,     0,     0,    13,
      14,     0,    15,     0,    16,     0,    17,     0,    18,    19,
       0,     1,    20,     2,     3,     0,     4,     0,     5,     0,
       6,     7,     8,     9,     0,    10,     0,    11,     0,     0,
      12,     0,     0,    13,    14,     0,    15,     0,    16,     0,
      17,     0,    18,    19,     0,     1,    20,     2,     3,   168,
       4,     0,     5,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,    18,    19,     2,     3,
      20,     0,     0,     5,     0,     6,     7,     8,     9,     0,
      10,     0,    11,     0,     0,    12,     0,     0,     0,    14,
       0,     0,     0,    16,     0,    17,     0,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    64,    63,    55,   116,     0,    67,    68,    50,    22,
     120,   192,    40,    45,    56,    47,    83,    30,   358,   281,
      49,    40,    83,   285,    41,   108,    55,    27,    23,    24,
      25,    26,    27,    31,    87,    35,   298,    44,   378,   379,
     123,    48,    63,     5,    63,   108,   307,    41,    46,   305,
      46,    47,    14,    47,    54,   116,   317,    19,    56,    87,
     123,   103,   324,    70,   127,   107,    64,   296,    87,    70,
      41,   305,   163,   302,    66,   305,    47,   339,   120,   146,
     147,   148,    56,    68,   126,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   143,   358,   364,   366,   103,    41,   102,    67,   107,
     108,    54,    47,   225,   112,   305,   114,   346,    42,   380,
     187,   382,   378,   379,   358,   123,   187,   305,   358,   103,
     311,   222,   174,   362,   363,   177,    41,    64,    45,    43,
      41,   183,    47,    47,   378,   379,    47,    41,   378,   379,
     328,   242,    45,    47,   264,    87,   169,    43,    44,   220,
     221,   224,    48,    40,   225,   343,   344,    44,   358,    43,
      44,    44,    41,    43,    48,    48,   174,    47,    61,    62,
     358,   108,    63,    64,    65,   112,    40,   114,   378,   379,
      44,   282,    87,   112,    48,   114,   123,    87,    52,    49,
     378,   379,    87,    57,    58,    41,    59,    60,   271,    81,
      82,    83,    84,   304,    85,    86,    47,   280,    46,    47,
     283,    45,   264,   335,   266,    46,    47,   318,   153,   154,
     155,   156,   284,   149,   150,    45,   327,    45,   329,   330,
     151,   152,   157,   158,    41,   336,   337,    45,    41,   340,
     299,   300,    47,    41,    46,    87,    46,   252,   349,   350,
     351,    40,   314,   315,    50,    40,   357,    50,   359,    43,
      43,    42,    50,    45,   335,   338,    45,    40,    40,    46,
      50,    42,    47,   374,   375,   348,    41,    43,    18,    43,
      40,    18,   355,   356,    42,    37,    40,   360,    41,    46,
      41,    46,     3,    43,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   328,    30,
      31,    32,    33,    34,    35,    43,    43,    38,   160,    40,
     159,    42,   220,   161,    49,    46,   221,    37,   114,   225,
      47,   260,   252,   121,   287,    56,    57,    58,    27,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     3,    -1,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
       5,     6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    21,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,     5,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    14,    69,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,     5,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    14,    69,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    14,    61,    62,    63,    -1,    19,    66,
      21,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    62,    63,    -1,    -1,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    21,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    56,    57,    58,    21,    -1,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    40,
      -1,    56,    57,    58,    -1,    46,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    56,    57,    58,    21,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    56,    57,    58,    21,    -1,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    40,
      -1,    56,    57,    58,    -1,    -1,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    69,    56,    57,    58,    21,    -1,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    -1,    -1,    56,    57,    58,    -1,    -1,    61,    62,
      63,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,     3,
      -1,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,
       3,    -1,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    25,    26,    -1,    28,    70,    30,    -1,    32,
      -1,    34,    35,    -1,     0,    38,    -1,     3,    -1,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      53,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      -1,     3,    38,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    -1,     3,    38,     5,     6,    41,
       8,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,     5,     6,
      38,    -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    12,    13,    14,    15,
      17,    19,    22,    25,    26,    28,    30,    32,    34,    35,
      38,   116,   117,   120,   121,   124,   125,   160,   161,   162,
      40,    63,    87,   118,   119,   126,   127,   128,   117,   117,
     117,   117,     0,   161,   126,   124,   129,   130,    46,    47,
      70,   116,   117,   163,   164,    40,    44,   127,    41,   124,
     128,   119,   126,    21,    40,    42,    56,    57,    58,    61,
      62,    63,    66,    69,    87,    88,    89,    90,    91,    93,
      94,    95,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   136,   159,   116,
      87,   134,   159,    25,    45,    63,   112,   129,    40,    98,
     112,   114,   121,   122,   124,   135,    44,    48,   137,   138,
     139,   140,   141,    40,    98,    98,    40,    44,    48,    52,
      57,    58,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   113,    98,   100,    63,    64,    65,    61,
      62,    59,    60,    81,    82,    83,    84,    85,    86,    66,
      68,    67,    54,    55,   154,    42,    41,    47,    41,   117,
     131,   132,   133,   112,   129,    45,    45,    25,    45,    63,
     112,   135,    41,    47,   122,   123,   123,    41,   111,   115,
      87,    43,    47,   136,    70,   141,   135,    96,    97,   112,
     114,    87,    87,   112,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   104,   104,   105,   106,   107,
     153,   153,    49,     7,     9,    11,    16,    18,    20,    23,
      24,    27,    31,    33,    42,    46,    87,   114,   116,   142,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    87,
     126,    41,    47,    45,   112,   112,    45,    45,    41,   112,
      42,   100,    45,    43,   139,    41,    47,    41,    45,   108,
     109,   153,    46,    46,   114,   115,   155,   156,    87,    46,
      40,    50,   157,    40,   158,    50,    46,   153,    43,    53,
     133,    45,    45,   137,   136,   112,   114,    46,    50,    40,
      40,    46,   114,   142,    42,   153,   114,   159,   142,   148,
      43,    47,   154,   142,   158,   158,   154,   153,   143,   144,
     149,   150,   151,   152,    41,   147,    43,    50,   159,   159,
      41,   147,   153,   142,    43,   153,   116,   149,   153,   153,
      43,    18,   111,   153,   153,   114,   142,   153,    40,   149,
     149,    41,   154,    18,   114,   153,   153,    42,   153,    37,
      40,    41,   114,   114,   153,   143,   153,   114,    46,   154,
     154,   147,   142,    41,    41,    41,    43,    46,   153,   153,
      42,   143,    42,   143,   147,   147,    43,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   102,   103,   103,   103,   104,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   115,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   119,   120,   120,   120,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   125,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   136,   137,   137,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   143,   143,
     143,   143,   143,   144,   144,   144,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   152,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   160,
     161,   161,   162,   163,   163,   164,   164
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     4,     1,     4,     1,     9,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     2,
       1,     1,     3,     5,     4,     4,     3,     6,     5,     6,
       5,     4,     5,     4,     4,     2,     3,     1,     2,     1,
       0,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     2,     1,     0,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     5,     1,     3,     1,
       0,     1,     1,     2,     1,     8,    11,     5,    10,    12,
      10,    12,    14,    14,    16,    16,     3,     2,     2,     3,
       2,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       1,     1,     7,     1,     0,     1,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 75 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                        (yyval.expr)->exprType = "not_bool";   // Non bool expression
                    }
#line 1999 "y.tab.c"
    break;

  case 3: /* primary_expression: constant  */
#line 80 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = (yyvsp[0].symb);      // Store pointer in Symbol Table
                    }
#line 2008 "y.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 84 "tinyC3_22CS30063_22CS30066.y"
                                           {
                        (yyval.expr) = new E();  // New expression
                        (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("ptr"), (yyvsp[0].sValue)); // Create new temp with type ptr and store value
                        (yyval.expr)->addr->type->sub_type = new symbol_type("char");
                    }
#line 2018 "y.tab.c"
    break;

  case 5: /* primary_expression: LP expression RP  */
#line 89 "tinyC3_22CS30063_22CS30066.y"
                                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 2024 "y.tab.c"
    break;

  case 6: /* constant: CONSTANT_INT  */
#line 92 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("int"), convIntToStr((yyvsp[0].iValue))); // Create new temp with type int and store value
                        quadTable.emit("=", (yyval.symb)->name, (yyvsp[0].iValue));
                    }
#line 2033 "y.tab.c"
    break;

  case 7: /* constant: CONSTANT_FLOAT  */
#line 96 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("float"), string((yyvsp[0].sValue)));  // Create new temp with type double and store value
                        quadTable.emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 2042 "y.tab.c"
    break;

  case 8: /* constant: CONSTANT_CHAR  */
#line 100 "tinyC3_22CS30063_22CS30066.y"
                                    {
                        (yyval.symb) = symbol_table::gentemp(new symbol_type("char"), string((yyvsp[0].sValue)));   // Create new temp with type char and store value
                        quadTable.emit("=", (yyval.symb)->name, string((yyvsp[0].sValue)));
                    }
#line 2051 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 109 "tinyC3_22CS30063_22CS30066.y"
                          {
            (yyval.arr) = new A();   
            (yyval.arr)->location = (yyvsp[0].expr)->addr;   
            (yyval.arr)->type = (yyvsp[0].expr)->addr->type;  
            (yyval.arr)->addr = (yyval.arr)->location;   
        }
#line 2062 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression LBP expression RBP  */
#line 115 "tinyC3_22CS30063_22CS30066.y"
                                             { 
      (yyval.arr) = new A();   
      (yyval.arr)->type = (yyvsp[-3].arr)->type->sub_type;  
      (yyval.arr)->location = (yyvsp[-3].arr)->location;  
      (yyval.arr)->addr = symbol_table::gentemp(new symbol_type("int")); 
      (yyval.arr)->sub_type = "arr"; 
      if ((yyvsp[-3].arr)->sub_type == "arr") { 
          symbol* temp = symbol_table::gentemp(new symbol_type("int"));
          int sz = sizeOfType((yyval.arr)->type);  
          quadTable.emit("*", temp->name, (yyvsp[-1].expr)->addr->name, convIntToStr(sz));
          quadTable.emit("+", (yyval.arr)->addr->name, (yyvsp[-3].arr)->addr->name, temp->name);
        }
      else {
          int sz = sizeOfType((yyval.arr)->type);  
          quadTable.emit("*", (yyval.arr)->addr->name, (yyvsp[-1].expr)->addr->name, convIntToStr(sz)); 
      }
    }
#line 2084 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression LP argument_expression_list_opt RP  */
#line 132 "tinyC3_22CS30063_22CS30066.y"
                                                             { 
      (yyval.arr) = new A();  
      (yyval.arr)->location = symbol_table::gentemp((yyvsp[-3].arr)->type); 
      quadTable.emit("call", (yyval.arr)->location->name, (yyvsp[-3].arr)->location->name, convIntToStr((yyvsp[-1].param_count))); 
    }
#line 2094 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 137 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2100 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 138 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2106 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression PLUS_FIX  */
#line 139 "tinyC3_22CS30063_22CS30066.y"
                                  { 
          (yyval.arr) = new A();   
          (yyval.arr)->location = symbol_table::gentemp((yyvsp[-1].arr)->location->type);    
          quadTable.emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    
          quadTable.emit("+", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");   
    }
#line 2117 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression SUB_FIX  */
#line 145 "tinyC3_22CS30063_22CS30066.y"
                                 { 
          (yyval.arr) = new A();   
          (yyval.arr)->location = symbol_table::gentemp((yyvsp[-1].arr)->location->type);    
          quadTable.emit("=", (yyval.arr)->location->name, (yyvsp[-1].arr)->location->name);    
          quadTable.emit("-", (yyvsp[-1].arr)->location->name, (yyvsp[-1].arr)->location->name, "1");  
      }
#line 2128 "y.tab.c"
    break;

  case 16: /* postfix_expression: LP type_name RP LCP initializer_list RCP  */
#line 151 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2134 "y.tab.c"
    break;

  case 17: /* postfix_expression: LP type_name RP LCP initializer_list COMMA RCP  */
#line 152 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2140 "y.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 156 "tinyC3_22CS30063_22CS30066.y"
                            { (yyval.param_count) = 1;
          quadTable.emit("param", (yyvsp[0].expr)->addr->name);  
        }
#line 2148 "y.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 159 "tinyC3_22CS30063_22CS30066.y"
                                                           { 
        (yyval.param_count) = (yyvsp[-2].param_count) + 1;
        quadTable.emit("param", (yyvsp[0].expr)->addr->name);
    }
#line 2157 "y.tab.c"
    break;

  case 20: /* argument_expression_list_opt: argument_expression_list  */
#line 166 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.param_count) = (yyvsp[0].param_count);}
#line 2163 "y.tab.c"
    break;

  case 21: /* argument_expression_list_opt: %empty  */
#line 167 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.param_count) = 0;}
#line 2169 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 171 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.arr) = (yyvsp[0].arr);}
#line 2175 "y.tab.c"
    break;

  case 23: /* unary_expression: PLUS_FIX unary_expression  */
#line 172 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          quadTable.emit("+", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   
          (yyval.arr) = (yyvsp[0].arr);    
    }
#line 2184 "y.tab.c"
    break;

  case 24: /* unary_expression: SUB_FIX unary_expression  */
#line 176 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          quadTable.emit("-", (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->location->name, "1");   
          (yyval.arr) = (yyvsp[0].arr);    
    }
#line 2193 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 180 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          (yyval.arr) = new A();
           if ((yyvsp[-1].unary_op) == '&') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type("ptr")); 
               (yyval.arr)->location->type->sub_type = (yyvsp[0].arr)->location->type;
               quadTable.emit("= &", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name); 
           }
           else if ((yyvsp[-1].unary_op) == '*') {
               (yyval.arr)->sub_type = "ptr"; // Pointer type
               (yyval.arr)->addr = symbol_table::gentemp((yyvsp[0].arr)->location->type->sub_type); 
               (yyval.arr)->location = (yyvsp[0].arr)->location;  
               quadTable.emit("= *", (yyval.arr)->addr->name, (yyvsp[0].arr)->location->name); 
           }
           else if ((yyvsp[-1].unary_op) == '+') (yyval.arr) = (yyvsp[0].arr);
           else if ((yyvsp[-1].unary_op) == '-') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quadTable.emit("= -", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
           }
           else if ((yyvsp[-1].unary_op) == '~')  {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quadTable.emit("= ~", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
           }
           else if ((yyvsp[-1].unary_op) == '!') {
               (yyval.arr)->location = symbol_table::gentemp(new symbol_type((yyvsp[0].arr)->location->type->base)); 
               quadTable.emit("= !", (yyval.arr)->location->name, (yyvsp[0].arr)->location->name);
          }
    }
#line 2225 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 207 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2231 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF LP type_name RP  */
#line 208 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2237 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 212 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '&';}
#line 2243 "y.tab.c"
    break;

  case 29: /* unary_operator: STAR  */
#line 213 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '*';}
#line 2249 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 214 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '+';}
#line 2255 "y.tab.c"
    break;

  case 31: /* unary_operator: SUB  */
#line 215 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '-';}
#line 2261 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOT  */
#line 216 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '~';}
#line 2267 "y.tab.c"
    break;

  case 33: /* unary_operator: LOGICAL_NOT  */
#line 217 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.unary_op) = '!';}
#line 2273 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 221 "tinyC3_22CS30063_22CS30066.y"
                       { (yyval.arr) = (yyvsp[0].arr); }
#line 2279 "y.tab.c"
    break;

  case 35: /* cast_expression: LP type_name RP cast_expression  */
#line 222 "tinyC3_22CS30063_22CS30066.y"
                                      { 
        (yyval.arr) = new A();
        (yyval.arr)->location = convType((yyvsp[0].arr)->location, data_type);
    }
#line 2288 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 229 "tinyC3_22CS30063_22CS30066.y"
                      {
        (yyval.expr) = new E(); 
        if ((yyvsp[0].arr)->sub_type == "arr") {
            (yyval.expr)->addr = symbol_table::gentemp((yyvsp[0].arr)->addr->type); 
            quadTable.emit("=[]", (yyval.expr)->addr->name, (yyvsp[0].arr)->location->name, (yyvsp[0].arr)->addr->name); 
        }
        else if((yyvsp[0].arr)->sub_type == "ptr") {
            (yyval.expr)->addr = (yyvsp[0].arr)->addr; 
        }
        else (yyval.expr)->addr = (yyvsp[0].arr)->location; 
       }
#line 2304 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 240 "tinyC3_22CS30063_22CS30066.y"
                                                     {
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new E();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base));
              quadTable.emit("*", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }      
     }
#line 2319 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 250 "tinyC3_22CS30063_22CS30066.y"
                                                    { 
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new E();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base));
              quadTable.emit("/", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2334 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 260 "tinyC3_22CS30063_22CS30066.y"
                                                    { 
          if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].arr)->location)) {
              (yyval.expr) = new E();
              (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
              quadTable.emit("%", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].arr)->location->name); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2349 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 274 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr);}
#line 2355 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 275 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quadTable.emit("+", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2370 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 285 "tinyC3_22CS30063_22CS30066.y"
                                                         { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quadTable.emit("-", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2385 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 298 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2391 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LOGICAL_LEFT_SHIFT additive_expression  */
#line 299 "tinyC3_22CS30063_22CS30066.y"
                                                               { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quadTable.emit("<<", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2406 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression LOGICAL_RIGHT_SHIFT additive_expression  */
#line 309 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->addr = symbol_table::gentemp(new symbol_type((yyvsp[-2].expr)->addr->type->base)); 
            quadTable.emit(">>", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2421 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 322 "tinyC3_22CS30063_22CS30066.y"
                         { (yyval.expr) = (yyvsp[0].expr);}
#line 2427 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression REL_LT shift_expression  */
#line 323 "tinyC3_22CS30063_22CS30066.y"
                                                     { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->trueList = makelist(nextinstr()); 
            (yyval.expr)->falseList = makelist(nextinstr()+1); 
            quadTable.emit("<", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2445 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression REL_GT shift_expression  */
#line 336 "tinyC3_22CS30063_22CS30066.y"
                                                     { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->trueList = makelist(nextinstr()); 
            (yyval.expr)->falseList = makelist(nextinstr()+1); 
            quadTable.emit(">", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2463 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression REL_LTE shift_expression  */
#line 349 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->trueList = makelist(nextinstr()); 
            (yyval.expr)->falseList = makelist(nextinstr()+1); 
            quadTable.emit("<=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2481 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression REL_GTE shift_expression  */
#line 362 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->trueList = makelist(nextinstr()); 
            (yyval.expr)->falseList = makelist(nextinstr()+1); 
            quadTable.emit(">=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2499 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 378 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.expr) = (yyvsp[0].expr);}
#line 2505 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression REL_EQ relational_expression  */
#line 379 "tinyC3_22CS30063_22CS30066.y"
                                                       { 
        if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
              convBoolToInt((yyvsp[-2].expr));
              convBoolToInt((yyvsp[0].expr));
              (yyval.expr) = new E();
              (yyval.expr)->exprType = "bool";   
              (yyval.expr)->trueList = makelist(nextinstr()); 
              (yyval.expr)->falseList = makelist(nextinstr()+1); 
              quadTable.emit("==", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
              quadTable.emit("goto", ""); 
          }
          else {
              yyerror("Type mismatch");
          }
    }
#line 2525 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression REL_NEQ relational_expression  */
#line 394 "tinyC3_22CS30063_22CS30066.y"
                                                        { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
            convBoolToInt((yyvsp[-2].expr));
            convBoolToInt((yyvsp[0].expr));
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            (yyval.expr)->trueList = makelist(nextinstr()); 
            (yyval.expr)->falseList = makelist(nextinstr()+1); 
            quadTable.emit("!=", "", (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            quadTable.emit("goto", ""); 
        }
        else {
            yyerror("Type mismatch");
        }
    }
#line 2545 "y.tab.c"
    break;

  case 54: /* AND_expression: equality_expression  */
#line 412 "tinyC3_22CS30063_22CS30066.y"
                          { (yyval.expr) = (yyvsp[0].expr);}
#line 2551 "y.tab.c"
    break;

  case 55: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 413 "tinyC3_22CS30063_22CS30066.y"
                                                      { 
            if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBoolToInt((yyvsp[-2].expr));
                convBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new E();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("&", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2569 "y.tab.c"
    break;

  case 56: /* exclusive_OR_expression: AND_expression  */
#line 429 "tinyC3_22CS30063_22CS30066.y"
                      { (yyval.expr) = (yyvsp[0].expr); }
#line 2575 "y.tab.c"
    break;

  case 57: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 430 "tinyC3_22CS30063_22CS30066.y"
                                                         { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBoolToInt((yyvsp[-2].expr));
                convBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new E();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("^", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2593 "y.tab.c"
    break;

  case 58: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 446 "tinyC3_22CS30063_22CS30066.y"
                               { (yyval.expr) = (yyvsp[0].expr);}
#line 2599 "y.tab.c"
    break;

  case 59: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 447 "tinyC3_22CS30063_22CS30066.y"
                                                                  { 
      if (typecheck((yyvsp[-2].expr)->addr, (yyvsp[0].expr)->addr)) {
                convBoolToInt((yyvsp[-2].expr));
                convBoolToInt((yyvsp[0].expr));
                (yyval.expr) = new E();
                (yyval.expr)->exprType = "not_bool"; 
                (yyval.expr)->addr = symbol_table::gentemp(new symbol_type("int")); 
                quadTable.emit("|", (yyval.expr)->addr->name, (yyvsp[-2].expr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else {
                yyerror("Type mismatch");
            }
    }
#line 2617 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 462 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2623 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 463 "tinyC3_22CS30063_22CS30066.y"
                                                                      { 
            convIntToBool((yyvsp[-3].expr));
            convIntToBool((yyvsp[0].expr));
            (yyval.expr) = new E();
            (yyval.expr)->exprType = "bool";   
            backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].instr_ind)); 
            (yyval.expr)->trueList = (yyvsp[0].expr)->trueList; 
            (yyval.expr)->falseList = merge((yyvsp[-3].expr)->falseList, (yyvsp[0].expr)->falseList); 
    }
#line 2637 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 475 "tinyC3_22CS30063_22CS30066.y"
                               { (yyval.expr) = (yyvsp[0].expr); }
#line 2643 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 476 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
          convIntToBool((yyvsp[-3].expr));
          convIntToBool((yyvsp[0].expr));
          (yyval.expr) = new E();
          (yyval.expr)->exprType = "bool";   
          backpatch((yyvsp[-3].expr)->falseList, (yyvsp[-1].instr_ind)); 
          (yyval.expr)->falseList = (yyvsp[0].expr)->falseList; 
          (yyval.expr)->trueList = merge((yyvsp[-3].expr)->trueList, (yyvsp[0].expr)->trueList); 
    }
#line 2657 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 488 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2663 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression N TERNARY_QM M expression N TERNARY_SEP M conditional_expression  */
#line 489 "tinyC3_22CS30063_22CS30066.y"
                                                                                             {  /// learn about this
            (yyval.expr)->addr = symbol_table::gentemp((yyvsp[-4].expr)->addr->type); 
            (yyval.expr)->addr->update((yyvsp[-4].expr)->addr->type);
            quadTable.emit("=", (yyval.expr)->addr->name, (yyvsp[0].expr)->addr->name);
            instruction_list* templist1 = makelist(nextinstr());
            quadTable.emit("goto", "");   
            backpatch((yyvsp[-3].statem)->nextList, nextinstr());   
            quadTable.emit("=", (yyval.expr)->addr->name, (yyvsp[-4].expr)->addr->name); 
            instruction_list* templist2 = makelist(nextinstr());
            templist1 = merge(templist1, templist2);
            quadTable.emit("goto", "");   
            backpatch((yyvsp[-7].statem)->nextList, nextinstr());   
            convIntToBool((yyvsp[-8].expr));
            backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-5].instr_ind)); 
            backpatch((yyvsp[-8].expr)->falseList, (yyvsp[-1].instr_ind)); 
            backpatch(templist1, nextinstr());
        }
#line 2685 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 509 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.expr) = (yyvsp[0].expr);}
#line 2691 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 510 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { 
            if ((yyvsp[-2].arr)->sub_type == "arr") { 
                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->type->base);
                quadTable.emit("[]=", (yyvsp[-2].arr)->location->name, (yyvsp[-2].arr)->addr->name, (yyvsp[0].expr)->addr->name); 
            }
            else if ((yyvsp[-2].arr)->sub_type == "ptr") quadTable.emit("*=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name); 
            else {
                (yyvsp[0].expr)->addr = convType((yyvsp[0].expr)->addr, (yyvsp[-2].arr)->location->type->base);
                quadTable.emit("=", (yyvsp[-2].arr)->location->name, (yyvsp[0].expr)->addr->name); 
            }
            (yyval.expr) = (yyvsp[0].expr);
    }
#line 2708 "y.tab.c"
    break;

  case 68: /* assignment_operator: ASS_EQ  */
#line 525 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2714 "y.tab.c"
    break;

  case 69: /* assignment_operator: MUL_EQ  */
#line 526 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2720 "y.tab.c"
    break;

  case 70: /* assignment_operator: DIV_EQ  */
#line 527 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2726 "y.tab.c"
    break;

  case 71: /* assignment_operator: MOD_EQ  */
#line 528 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2732 "y.tab.c"
    break;

  case 72: /* assignment_operator: PLUS_EQ  */
#line 529 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2738 "y.tab.c"
    break;

  case 73: /* assignment_operator: SUB_EQ  */
#line 530 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2744 "y.tab.c"
    break;

  case 74: /* assignment_operator: AND_EQ  */
#line 531 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2750 "y.tab.c"
    break;

  case 75: /* assignment_operator: XOR_EQ  */
#line 532 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2756 "y.tab.c"
    break;

  case 76: /* assignment_operator: OR_EQ  */
#line 533 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2762 "y.tab.c"
    break;

  case 77: /* assignment_operator: SLL_EQ  */
#line 534 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2768 "y.tab.c"
    break;

  case 78: /* assignment_operator: SLR_EQ  */
#line 535 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2774 "y.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 539 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2780 "y.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 540 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2786 "y.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 545 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given not required*/ }
#line 2792 "y.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 551 "tinyC3_22CS30063_22CS30066.y"
                                                                { /*Will not required*/ }
#line 2798 "y.tab.c"
    break;

  case 91: /* init_declarator_list: init_declarator  */
#line 567 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Will not required*/ }
#line 2804 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 568 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Will not required*/ }
#line 2810 "y.tab.c"
    break;

  case 93: /* init_declarator: declarator  */
#line 572 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.symb) = (yyvsp[0].symb); }
#line 2816 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator ASS_EQ initializer  */
#line 573 "tinyC3_22CS30063_22CS30066.y"
                                                                    { 
          if ((yyvsp[0].symb)->initValue != "") (yyvsp[-2].symb)->initValue = (yyvsp[0].symb)->initValue;
          quadTable.emit("=", (yyvsp[-2].symb)->name, (yyvsp[0].symb)->name);
    }
#line 2825 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: EXTERN  */
#line 580 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2831 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: STATIC  */
#line 581 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2837 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: AUTO  */
#line 582 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2843 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: REGISTER  */
#line 583 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2849 "y.tab.c"
    break;

  case 99: /* type_specifier: VOID  */
#line 587 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "void";    }
#line 2855 "y.tab.c"
    break;

  case 100: /* type_specifier: CHAR  */
#line 588 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "char";    }
#line 2861 "y.tab.c"
    break;

  case 101: /* type_specifier: SHORT  */
#line 589 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2867 "y.tab.c"
    break;

  case 102: /* type_specifier: INT  */
#line 590 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "int";     }
#line 2873 "y.tab.c"
    break;

  case 103: /* type_specifier: LONG  */
#line 591 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2879 "y.tab.c"
    break;

  case 104: /* type_specifier: FLOAT  */
#line 592 "tinyC3_22CS30063_22CS30066.y"
                                                                    { data_type = "float";   }
#line 2885 "y.tab.c"
    break;

  case 105: /* type_specifier: DOUBLE  */
#line 593 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2891 "y.tab.c"
    break;

  case 106: /* type_specifier: SIGNED  */
#line 594 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2897 "y.tab.c"
    break;

  case 107: /* type_specifier: UNSIGNED  */
#line 595 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2903 "y.tab.c"
    break;

  case 108: /* type_specifier: BOOL  */
#line 596 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2909 "y.tab.c"
    break;

  case 109: /* type_specifier: COMPLEX  */
#line 597 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2915 "y.tab.c"
    break;

  case 110: /* type_specifier: IMAGINARY  */
#line 598 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2921 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 602 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2927 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 603 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2933 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 607 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2939 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list_opt: %empty  */
#line 608 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2945 "y.tab.c"
    break;

  case 115: /* type_qualifier: CONST  */
#line 612 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2951 "y.tab.c"
    break;

  case 116: /* type_qualifier: RESTRICT  */
#line 613 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2957 "y.tab.c"
    break;

  case 117: /* type_qualifier: VOLATILE  */
#line 614 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2963 "y.tab.c"
    break;

  case 118: /* fuction_specifier: INLINE  */
#line 618 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 2969 "y.tab.c"
    break;

  case 119: /* declarator: pointer direct_declarator  */
#line 622 "tinyC3_22CS30063_22CS30066.y"
                                                                { 
              symbol_type* t = (yyvsp[-1].symbType);
              while(t->sub_type != NULL) t = t->sub_type; 
              t->sub_type = (yyvsp[0].symb)->type;  
              (yyval.symb) = (yyvsp[0].symb)->update((yyvsp[-1].symbType));       
          }
#line 2980 "y.tab.c"
    break;

  case 120: /* declarator: direct_declarator  */
#line 628 "tinyC3_22CS30063_22CS30066.y"
                          { (yyval.symb) = (yyvsp[0].symb); }
#line 2986 "y.tab.c"
    break;

  case 121: /* direct_declarator: IDENTIFIER  */
#line 632 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { 
                (yyval.symb) = (yyvsp[0].symb)->update(new symbol_type(data_type));   
                currentSymbol = (yyvsp[0].symb); 
      }
#line 2995 "y.tab.c"
    break;

  case 122: /* direct_declarator: LP declarator RP  */
#line 636 "tinyC3_22CS30063_22CS30066.y"
                                                                                        {  (yyval.symb) = (yyvsp[-1].symb); }
#line 3001 "y.tab.c"
    break;

  case 123: /* direct_declarator: direct_declarator LBP type_qualifier_list assignment_expression RBP  */
#line 637 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { }
#line 3007 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator LBP type_qualifier_list RBP  */
#line 638 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { }
#line 3013 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator LBP assignment_expression RBP  */
#line 639 "tinyC3_22CS30063_22CS30066.y"
                                                      {
        symbol_type* t = (yyvsp[-3].symb)->type;
        symbol_type* prev = NULL;
        while(t->base == "arr") {
            prev = t;
            t = t->sub_type;
        }
        if (prev == NULL) {
            int temp = atoi((yyvsp[-1].expr)->addr->initValue.c_str());   
            symbol_type* tp = new symbol_type("arr", (yyvsp[-3].symb)->type, temp);  
            (yyval.symb) = (yyvsp[-3].symb)->update(tp);    
        }
        else {
            int temp = atoi((yyvsp[-1].expr)->addr->initValue.c_str());   
            prev->sub_type = new symbol_type("arr", t, temp); 
            (yyval.symb) = (yyvsp[-3].symb)->update((yyvsp[-3].symb)->type);  
        }
     }
#line 3036 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator LBP RBP  */
#line 657 "tinyC3_22CS30063_22CS30066.y"
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
#line 3057 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator LBP STATIC type_qualifier_list assignment_expression RBP  */
#line 673 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3063 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator LBP STATIC assignment_expression RBP  */
#line 674 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3069 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator LBP type_qualifier_list STATIC assignment_expression RBP  */
#line 675 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { /* Will not required*/ }
#line 3075 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator LBP type_qualifier_list STAR RBP  */
#line 676 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { /* Will not required*/ }
#line 3081 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator LBP STAR RBP  */
#line 677 "tinyC3_22CS30063_22CS30066.y"
                                                                { /* Will not required*/ }
#line 3087 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator LP change_table parameter_type_list RP  */
#line 678 "tinyC3_22CS30063_22CS30066.y"
                                                                                                     { 
        currentSymbolTable->name = (yyvsp[-4].symb)->name; 
        if ((yyvsp[-4].symb)->type->base != "void") {
            symbol* s = currentSymbolTable->lookup("return");  
            s->update((yyvsp[-4].symb)->type);    
        }
        (yyvsp[-4].symb)->nestedTable = currentSymbolTable;   
        currentSymbolTable->parent = globalSymbolTable;   
        switchTable(globalSymbolTable);  
        currentSymbol = (yyval.symb); 
    }
#line 3103 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LP identifier_list RP  */
#line 689 "tinyC3_22CS30063_22CS30066.y"
                                                                                    { }
#line 3109 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LP change_table RP  */
#line 690 "tinyC3_22CS30063_22CS30066.y"
                                           {
        currentSymbolTable->name = (yyvsp[-3].symb)->name; 
        if ((yyvsp[-3].symb)->type->base != "void") {
            symbol* s = currentSymbolTable->lookup("return");  
            s->update((yyvsp[-3].symb)->type);    
        }
        (yyvsp[-3].symb)->nestedTable = currentSymbolTable;    
        currentSymbolTable->parent = globalSymbolTable;   
        switchTable(globalSymbolTable);  
        currentSymbol = (yyval.symb);
    }
#line 3125 "y.tab.c"
    break;

  case 135: /* pointer: STAR type_qualifier_list_opt  */
#line 705 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.symbType) =  new symbol_type("ptr"); }
#line 3131 "y.tab.c"
    break;

  case 136: /* pointer: STAR type_qualifier_list_opt pointer  */
#line 706 "tinyC3_22CS30063_22CS30066.y"
                                                                                        { (yyval.symbType) = new symbol_type("ptr", (yyvsp[0].symbType)); }
#line 3137 "y.tab.c"
    break;

  case 137: /* type_qualifier_list: type_qualifier  */
#line 712 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3143 "y.tab.c"
    break;

  case 138: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 713 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3149 "y.tab.c"
    break;

  case 139: /* type_qualifier_list_opt: type_qualifier_list  */
#line 717 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3155 "y.tab.c"
    break;

  case 140: /* type_qualifier_list_opt: %empty  */
#line 718 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /*Given: Not needed */ }
#line 3161 "y.tab.c"
    break;

  case 141: /* parameter_type_list: parameter_list  */
#line 722 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3167 "y.tab.c"
    break;

  case 142: /* parameter_type_list: parameter_list COMMA SPREAD_OP  */
#line 723 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3173 "y.tab.c"
    break;

  case 143: /* parameter_list: parameter_declaration  */
#line 727 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3179 "y.tab.c"
    break;

  case 144: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 728 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3185 "y.tab.c"
    break;

  case 145: /* parameter_declaration: declaration_specifiers declarator  */
#line 732 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3191 "y.tab.c"
    break;

  case 146: /* parameter_declaration: declaration_specifiers  */
#line 733 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3197 "y.tab.c"
    break;

  case 147: /* identifier_list: IDENTIFIER  */
#line 737 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3203 "y.tab.c"
    break;

  case 148: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 738 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3209 "y.tab.c"
    break;

  case 149: /* type_name: specifier_qualifier_list  */
#line 742 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3215 "y.tab.c"
    break;

  case 150: /* initializer: assignment_expression  */
#line 746 "tinyC3_22CS30063_22CS30066.y"
                                                                    { (yyval.symb) = (yyvsp[0].expr)->addr; }
#line 3221 "y.tab.c"
    break;

  case 151: /* initializer: LCP initializer_list RCP  */
#line 747 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3227 "y.tab.c"
    break;

  case 152: /* initializer: LCP initializer_list COMMA RCP  */
#line 748 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3233 "y.tab.c"
    break;

  case 153: /* initializer_list: designation_opt initializer  */
#line 752 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3239 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 753 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3245 "y.tab.c"
    break;

  case 155: /* designation: designator_list ASS_EQ  */
#line 757 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3251 "y.tab.c"
    break;

  case 156: /* designation_opt: designation  */
#line 761 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3257 "y.tab.c"
    break;

  case 157: /* designation_opt: %empty  */
#line 762 "tinyC3_22CS30063_22CS30066.y"
                                                                    { /* Will not required*/ }
#line 3263 "y.tab.c"
    break;

  case 158: /* designator_list: designator  */
#line 766 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3269 "y.tab.c"
    break;

  case 159: /* designator_list: designator_list designator  */
#line 767 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3275 "y.tab.c"
    break;

  case 160: /* designator: LBP constant_expression RBP  */
#line 771 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3281 "y.tab.c"
    break;

  case 161: /* designator: DOT IDENTIFIER  */
#line 772 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /* Will not required*/ }
#line 3287 "y.tab.c"
    break;

  case 162: /* statement: labeled_statement  */
#line 776 "tinyC3_22CS30063_22CS30066.y"
                                {}
#line 3293 "y.tab.c"
    break;

  case 163: /* statement: compound_statement  */
#line 777 "tinyC3_22CS30063_22CS30066.y"
                                 { (yyval.statem) = (yyvsp[0].statem); }
#line 3299 "y.tab.c"
    break;

  case 164: /* statement: expression_statement  */
#line 778 "tinyC3_22CS30063_22CS30066.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->nextList = (yyvsp[0].expr)->nextList;
            }
#line 3308 "y.tab.c"
    break;

  case 165: /* statement: selection_statement  */
#line 782 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3314 "y.tab.c"
    break;

  case 166: /* statement: iteration_statement  */
#line 783 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3320 "y.tab.c"
    break;

  case 167: /* statement: jump_statement  */
#line 784 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3326 "y.tab.c"
    break;

  case 168: /* loop_statement: labeled_statement  */
#line 788 "tinyC3_22CS30063_22CS30066.y"
                                  {}
#line 3332 "y.tab.c"
    break;

  case 169: /* loop_statement: expression_statement  */
#line 789 "tinyC3_22CS30063_22CS30066.y"
                                   {
                (yyval.statem) = new S();
                (yyval.statem)->nextList = (yyvsp[0].expr)->nextList;
            }
#line 3341 "y.tab.c"
    break;

  case 170: /* loop_statement: selection_statement  */
#line 793 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3347 "y.tab.c"
    break;

  case 171: /* loop_statement: iteration_statement  */
#line 794 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = (yyvsp[0].statem); }
#line 3353 "y.tab.c"
    break;

  case 172: /* loop_statement: jump_statement  */
#line 795 "tinyC3_22CS30063_22CS30066.y"
                             { (yyval.statem) = (yyvsp[0].statem); }
#line 3359 "y.tab.c"
    break;

  case 173: /* labeled_statement: IDENTIFIER TERNARY_SEP statement  */
#line 798 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3365 "y.tab.c"
    break;

  case 174: /* labeled_statement: CASE constant_expression TERNARY_SEP statement  */
#line 799 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3371 "y.tab.c"
    break;

  case 175: /* labeled_statement: DEFAULT TERNARY_SEP statement  */
#line 800 "tinyC3_22CS30063_22CS30066.y"
                                                                        { }
#line 3377 "y.tab.c"
    break;

  case 176: /* compound_statement: LCP X change_table block_item_list_opt RCP  */
#line 804 "tinyC3_22CS30063_22CS30066.y"
                                                                                       { 
        (yyval.statem) = (yyvsp[-1].statem);
        switchTable(currentSymbolTable->parent);
      }
#line 3386 "y.tab.c"
    break;

  case 177: /* block_item_list: block_item  */
#line 811 "tinyC3_22CS30063_22CS30066.y"
                 { (yyval.statem) = (yyvsp[0].statem); }
#line 3392 "y.tab.c"
    break;

  case 178: /* block_item_list: block_item_list M block_item  */
#line 812 "tinyC3_22CS30063_22CS30066.y"
                                   { 
          (yyval.statem) = (yyvsp[0].statem);
          backpatch((yyvsp[-2].statem)->nextList, (yyvsp[-1].instr_ind));    
    }
#line 3401 "y.tab.c"
    break;

  case 179: /* block_item_list_opt: block_item_list  */
#line 819 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = (yyvsp[0].statem); }
#line 3407 "y.tab.c"
    break;

  case 180: /* block_item_list_opt: %empty  */
#line 820 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = new S(); }
#line 3413 "y.tab.c"
    break;

  case 181: /* block_item: declaration  */
#line 824 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = new S(); }
#line 3419 "y.tab.c"
    break;

  case 182: /* block_item: statement  */
#line 825 "tinyC3_22CS30063_22CS30066.y"
                                                                        { (yyval.statem) = (yyvsp[0].statem); }
#line 3425 "y.tab.c"
    break;

  case 183: /* expression_statement: expression SEMICOLON  */
#line 828 "tinyC3_22CS30063_22CS30066.y"
                                               { (yyval.expr) = (yyvsp[-1].expr); }
#line 3431 "y.tab.c"
    break;

  case 184: /* expression_statement: SEMICOLON  */
#line 829 "tinyC3_22CS30063_22CS30066.y"
                                    { (yyval.expr) = new E(); }
#line 3437 "y.tab.c"
    break;

  case 185: /* selection_statement: IF LP expression N RP M statement N  */
#line 833 "tinyC3_22CS30063_22CS30066.y"
                                          { 
          backpatch((yyvsp[-4].statem)->nextList, nextinstr());
          convIntToBool((yyvsp[-5].expr));
          (yyval.statem) = new S();
          backpatch((yyvsp[-5].expr)->trueList, (yyvsp[-2].instr_ind)); 
          instruction_list* temp = merge((yyvsp[-5].expr)->falseList, (yyvsp[-1].statem)->nextList);
          (yyval.statem)->nextList = merge((yyvsp[0].statem)->nextList, temp); 
      }
#line 3450 "y.tab.c"
    break;

  case 186: /* selection_statement: IF LP expression N RP M statement N ELSE M statement  */
#line 841 "tinyC3_22CS30063_22CS30066.y"
                                                                                { 
            backpatch((yyvsp[-7].statem)->nextList, nextinstr()); 
            convIntToBool((yyvsp[-8].expr));
            (yyval.statem) = new S();
            backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-5].instr_ind)); 
            backpatch((yyvsp[-8].expr)->falseList, (yyvsp[-1].instr_ind)); 
            instruction_list* temp = merge((yyvsp[-4].statem)->nextList, (yyvsp[-3].statem)->nextList); 
            (yyval.statem)->nextList = merge((yyvsp[0].statem)->nextList, temp); 
    }
#line 3464 "y.tab.c"
    break;

  case 187: /* selection_statement: SWITCH LP expression RP statement  */
#line 850 "tinyC3_22CS30063_22CS30066.y"
                                                                        { /*Not Required*/}
#line 3470 "y.tab.c"
    break;

  case 188: /* iteration_statement: WHILE W LP X change_table M expression RP M loop_statement  */
#line 853 "tinyC3_22CS30063_22CS30066.y"
                                                                                 { 
                        (yyval.statem) = new S(); 
                        convIntToBool((yyvsp[-3].expr));
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-4].instr_ind));   
                        backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].instr_ind));    
                        (yyval.statem)->nextList = (yyvsp[-3].expr)->falseList; 
                        quadTable.emit("goto", convIntToStr((yyvsp[-4].instr_ind))); 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3485 "y.tab.c"
    break;

  case 189: /* iteration_statement: WHILE W LP X change_table M expression RP LCP M block_item_list_opt RCP  */
#line 863 "tinyC3_22CS30063_22CS30066.y"
                                                                                              { 
                        (yyval.statem) = new S(); // new statement
                        convIntToBool((yyvsp[-5].expr));
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-6].instr_ind));   
                        backpatch((yyvsp[-5].expr)->trueList, (yyvsp[-2].instr_ind));   
                        (yyval.statem)->nextList = (yyvsp[-5].expr)->falseList;  
                        quadTable.emit("goto", convIntToStr((yyvsp[-6].instr_ind))); 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3500 "y.tab.c"
    break;

  case 190: /* iteration_statement: DO D M loop_statement M WHILE LP expression RP SEMICOLON  */
#line 873 "tinyC3_22CS30063_22CS30066.y"
                                                                               {   
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->trueList, (yyvsp[-7].instr_ind));   
                        backpatch((yyvsp[-6].statem)->nextList, (yyvsp[-5].instr_ind));   
                        (yyval.statem)->nextList = (yyvsp[-2].expr)->falseList;  
                        blockName = "";
                    }
#line 3513 "y.tab.c"
    break;

  case 191: /* iteration_statement: DO D LCP M block_item_list_opt RCP M WHILE LP expression RP SEMICOLON  */
#line 881 "tinyC3_22CS30063_22CS30066.y"
                                                                                            {  
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-2].expr));
                        backpatch((yyvsp[-2].expr)->trueList, (yyvsp[-8].instr_ind));    
                        backpatch((yyvsp[-7].statem)->nextList, (yyvsp[-5].instr_ind));    
                        (yyval.statem)->nextList = (yyvsp[-2].expr)->falseList;  
                        blockName = "";
                    }
#line 3526 "y.tab.c"
    break;

  case 192: /* iteration_statement: FOR F LP X change_table declaration M expression_statement M expression N RP M loop_statement  */
#line 889 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                    {  
                        convIntToBool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->trueList, (yyvsp[-1].instr_ind)); 
                        backpatch((yyvsp[-3].statem)->nextList, (yyvsp[-7].instr_ind)); 
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-5].instr_ind));
                        quadTable.emit("goto", convIntToStr((yyvsp[-5].instr_ind)));
                        (yyval.statem)->nextList = (yyvsp[-6].expr)->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3541 "y.tab.c"
    break;

  case 193: /* iteration_statement: FOR F LP X change_table expression_statement M expression_statement M expression N RP M loop_statement  */
#line 899 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                             {  
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-6].expr));
                        backpatch((yyvsp[-6].expr)->trueList, (yyvsp[-1].instr_ind)); 
                        backpatch((yyvsp[-3].statem)->nextList, (yyvsp[-7].instr_ind)); 
                        backpatch((yyvsp[0].statem)->nextList, (yyvsp[-5].instr_ind)); 
                        quadTable.emit("goto", convIntToStr((yyvsp[-5].instr_ind))); 
                        (yyval.statem)->nextList = (yyvsp[-6].expr)->falseList; 
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3557 "y.tab.c"
    break;

  case 194: /* iteration_statement: FOR F LP X change_table declaration M expression_statement M expression N RP M LCP block_item_list_opt RCP  */
#line 910 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                                 {  
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-3].instr_ind)); 
                        backpatch((yyvsp[-5].statem)->nextList, (yyvsp[-9].instr_ind)); 
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-7].instr_ind)); 
                        quadTable.emit("goto", convIntToStr((yyvsp[-7].instr_ind))); 
                        (yyval.statem)->nextList = (yyvsp[-8].expr)->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3573 "y.tab.c"
    break;

  case 195: /* iteration_statement: FOR F LP X change_table expression_statement M expression_statement M expression N RP M LCP block_item_list_opt RCP  */
#line 921 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                                          { 
                        (yyval.statem) = new S();
                        convIntToBool((yyvsp[-8].expr));
                        backpatch((yyvsp[-8].expr)->trueList, (yyvsp[-3].instr_ind)); 
                        backpatch((yyvsp[-5].statem)->nextList, (yyvsp[-9].instr_ind)); 
                        backpatch((yyvsp[-1].statem)->nextList, (yyvsp[-7].instr_ind)); 
                        quadTable.emit("goto", convIntToStr((yyvsp[-7].instr_ind))); 
                        (yyval.statem)->nextList = (yyvsp[-8].expr)->falseList;  
                        blockName = "";
                        switchTable(currentSymbolTable->parent);
                    }
#line 3589 "y.tab.c"
    break;

  case 196: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 934 "tinyC3_22CS30063_22CS30066.y"
                                            {}
#line 3595 "y.tab.c"
    break;

  case 197: /* jump_statement: CONTINUE SEMICOLON  */
#line 935 "tinyC3_22CS30063_22CS30066.y"
                                     { (yyval.statem) = new S(); }
#line 3601 "y.tab.c"
    break;

  case 198: /* jump_statement: BREAK SEMICOLON  */
#line 936 "tinyC3_22CS30063_22CS30066.y"
                                  { (yyval.statem) = new S(); }
#line 3607 "y.tab.c"
    break;

  case 199: /* jump_statement: RETURN expression SEMICOLON  */
#line 937 "tinyC3_22CS30063_22CS30066.y"
                                              {
                    (yyval.statem) = new S();
                    quadTable.emit("return", (yyvsp[-1].expr)->addr->name);
                }
#line 3616 "y.tab.c"
    break;

  case 200: /* jump_statement: RETURN SEMICOLON  */
#line 941 "tinyC3_22CS30063_22CS30066.y"
                                   {
                    (yyval.statem) = new S();
                    quadTable.emit("return", ""); 
                }
#line 3625 "y.tab.c"
    break;

  case 201: /* M: %empty  */
#line 947 "tinyC3_22CS30063_22CS30066.y"
    { (yyval.instr_ind) = nextinstr(); }
#line 3631 "y.tab.c"
    break;

  case 202: /* N: %empty  */
#line 949 "tinyC3_22CS30063_22CS30066.y"
    { (yyval.statem) = new S(); (yyval.statem)->nextList = makelist(nextinstr()); quadTable.emit("goto", ""); }
#line 3637 "y.tab.c"
    break;

  case 203: /* F: %empty  */
#line 951 "tinyC3_22CS30063_22CS30066.y"
       { blockName = "FOR"; }
#line 3643 "y.tab.c"
    break;

  case 204: /* W: %empty  */
#line 953 "tinyC3_22CS30063_22CS30066.y"
       { blockName = "WHILE"; }
#line 3649 "y.tab.c"
    break;

  case 205: /* D: %empty  */
#line 955 "tinyC3_22CS30063_22CS30066.y"
       { blockName = "DO"; }
#line 3655 "y.tab.c"
    break;

  case 206: /* X: %empty  */
#line 957 "tinyC3_22CS30063_22CS30066.y"
       { 
        string newSymbolTableName = currentSymbolTable->name + "." + blockName + "$" + to_string(SymbolTableCount++); 
        symbol* symbolFound = currentSymbolTable->lookup(newSymbolTableName); 
        symbolFound->nestedTable = new symbol_table(newSymbolTableName); 
        symbolFound->name = newSymbolTableName; 
        symbolFound->nestedTable->parent = currentSymbolTable;
        symbolFound->type = new symbol_type("block");
        currentSymbol = symbolFound; 
    }
#line 3669 "y.tab.c"
    break;

  case 207: /* change_table: %empty  */
#line 968 "tinyC3_22CS30063_22CS30066.y"
                   {
                    if (currentSymbol->nestedTable != NULL) {
                        switchTable(currentSymbol->nestedTable); 
                        quadTable.emit("label", currentSymbolTable->name);
                    }
                    else {
                        switchTable(new symbol_table(""));
                    }
                }
#line 3683 "y.tab.c"
    break;

  case 208: /* translation_unit: external_declaration  */
#line 981 "tinyC3_22CS30063_22CS30066.y"
                                           {}
#line 3689 "y.tab.c"
    break;

  case 209: /* translation_unit: translation_unit external_declaration  */
#line 982 "tinyC3_22CS30063_22CS30066.y"
                                                            {}
#line 3695 "y.tab.c"
    break;

  case 210: /* external_declaration: function_definition  */
#line 985 "tinyC3_22CS30063_22CS30066.y"
                                              {}
#line 3701 "y.tab.c"
    break;

  case 211: /* external_declaration: declaration  */
#line 986 "tinyC3_22CS30063_22CS30066.y"
                                      {}
#line 3707 "y.tab.c"
    break;

  case 212: /* function_definition: declaration_specifiers declarator declaration_list_opt change_table LCP block_item_list_opt RCP  */
#line 989 "tinyC3_22CS30063_22CS30066.y"
                                                                                                                      {
                        currentSymbolTable->parent = globalSymbolTable;
                        SymbolTableCount = 0;
                        switchTable(globalSymbolTable);  
                    }
#line 3717 "y.tab.c"
    break;

  case 213: /* declaration_list_opt: declaration_list  */
#line 996 "tinyC3_22CS30063_22CS30066.y"
                                           {}
#line 3723 "y.tab.c"
    break;

  case 214: /* declaration_list_opt: %empty  */
#line 997 "tinyC3_22CS30063_22CS30066.y"
                           {}
#line 3729 "y.tab.c"
    break;

  case 215: /* declaration_list: declaration  */
#line 1000 "tinyC3_22CS30063_22CS30066.y"
                                  {}
#line 3735 "y.tab.c"
    break;

  case 216: /* declaration_list: declaration_list declaration  */
#line 1001 "tinyC3_22CS30063_22CS30066.y"
                                                   {}
#line 3741 "y.tab.c"
    break;


#line 3745 "y.tab.c"

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

#line 1003 "tinyC3_22CS30063_22CS30066.y"



void yyerror(char * s){
    printf("ERROR: %s \t line_no: %d \t token: %s \n", s, yylineno, yytext);
    exit(0);
}

