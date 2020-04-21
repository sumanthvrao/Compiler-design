/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    MAIN = 259,
    OB = 260,
    CB = 261,
    SO = 262,
    SC = 263,
    COLON = 264,
    HASH = 265,
    INCLUDE = 266,
    LIBRARY = 267,
    IF = 268,
    ELSE = 269,
    DO = 270,
    WHILE = 271,
    FOR = 272,
    CONT = 273,
    BRK = 274,
    RTRN = 275,
    SEMICOLON = 276,
    BINARYOR = 277,
    BINARYAND = 278,
    LT = 279,
    GT = 280,
    LTE = 281,
    GTE = 282,
    NE = 283,
    EQ = 284,
    VOID = 285,
    CHAR = 286,
    COMMA = 287,
    EQUAL = 288,
    SUBPREFIX = 289,
    NUM = 290,
    ID = 291,
    ADD = 292,
    SUB = 293,
    MUL = 294,
    DIV = 295,
    ADDRIGHT = 296,
    SUBRIGHT = 297,
    MULRIGHT = 298,
    DIVRIGHT = 299,
    ADDPREFIX = 300,
    IFX = 301
  };
#endif
/* Tokens.  */
#define INT 258
#define MAIN 259
#define OB 260
#define CB 261
#define SO 262
#define SC 263
#define COLON 264
#define HASH 265
#define INCLUDE 266
#define LIBRARY 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define FOR 272
#define CONT 273
#define BRK 274
#define RTRN 275
#define SEMICOLON 276
#define BINARYOR 277
#define BINARYAND 278
#define LT 279
#define GT 280
#define LTE 281
#define GTE 282
#define NE 283
#define EQ 284
#define VOID 285
#define CHAR 286
#define COMMA 287
#define EQUAL 288
#define SUBPREFIX 289
#define NUM 290
#define ID 291
#define ADD 292
#define SUB 293
#define MUL 294
#define DIV 295
#define ADDRIGHT 296
#define SUBRIGHT 297
#define MULRIGHT 298
#define DIVRIGHT 299
#define ADDPREFIX 300
#define IFX 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
