
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MC_DEB = 258,
     MC_FIN = 259,
     MC_EXC = 260,
     MC_FIX = 261,
     MC_SI = 262,
     MC_SNON = 263,
     MC_TQ = 264,
     MC_OU = 265,
     MC_ALORS = 266,
     ACCO = 267,
     MC_FAIRE = 268,
     MC_LIRE = 269,
     MC_AFFICHE = 270,
     MC_NON = 271,
     INFE = 272,
     SUPE = 273,
     NOTE = 274,
     AFF = 275,
     MC_ET = 276,
     MOINS = 277,
     ACCF = 278,
     MC_NUM = 279,
     MC_REAL = 280,
     IDF = 281,
     MC_TXT = 282,
     STRING = 283,
     COMENT_SIMPLE = 284,
     COMENT_MULTI_LIGNE = 285,
     CST = 286,
     CST_FLOAT = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "syntaxique_easy_code.y"

    int entier;
    char* str;
    float floatval;



/* Line 1676 of yacc.c  */
#line 92 "syntaxique_easy_code.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


