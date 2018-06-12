/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TCONST = 258,
     TELSE = 259,
     TIF = 260,
     TINT = 261,
     TRETURN = 262,
     TVOID = 263,
     TWHILE = 264,
     TEQ = 265,
     TNEQ = 266,
     TLE = 267,
     TGE = 268,
     TAND = 269,
     TOR = 270,
     TINC = 271,
     TDEC = 272,
     TADDASSIGN = 273,
     TSUBASSIGN = 274,
     TMULASSIGN = 275,
     TDIVASSIGN = 276,
     TMODASSIGN = 277,
     TFOR = 278,
     TCASE = 279,
     TSWITCH = 280,
     TDEFAULT = 281,
     TCONTINUE = 282,
     TBREAK = 283,
     TIDENT = 284,
     TNUMBER = 285,
     IFX = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 16 "minic.y"

    struct nodeType *nPtr;  /* node pointer */
    char* string;           /* symbol string*/



/* Line 1685 of yacc.c  */
#line 89 "minic.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


