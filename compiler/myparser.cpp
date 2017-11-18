/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 51 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/18/17
* Time: 22:13:39
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2017年10月9日
****************************************************************************/

#include "mylexer.h"
#include "myparser.h"
#include <string>
#include <cstdio>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <map>
#include <cmath>
#include <string>
using namespace std;

#line 59 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 37 ".\\myparser.y"

	// place any extra initialisation code here

#line 83 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 42 ".\\myparser.y"

	// place any extra cleanup code here

#line 97 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 97 ".\\myparser.y"
printf("attach here!");
#line 207 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 105 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 2)); 
#line 220 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 106 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 1)); 
#line 233 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 108 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 2)); 
#line 246 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 109 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 1)); 
#line 259 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 115 ".\\myparser.y"
printf("%s\n",yyattribute(1 - 1).sval);
#line 272 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 117 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 1)); 
#line 285 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 119 ".\\myparser.y"
printf("%s",yyattribute(1 - 1));
#line 298 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 135 ".\\myparser.y"
printf("%s\n",yyattribute(1 - 1));
#line 311 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 136 ".\\myparser.y"
printf("%s\n",yyattribute(1 - 1));
#line 324 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 137 ".\\myparser.y"
printf("%s\n",yyattribute(1 - 1));
#line 337 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 138 ".\\myparser.y"
printf("%s\n",yyattribute(1 - 1));
#line 350 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 146 ".\\myparser.y"
 printf("%d\n",yyattribute(1 - 1).ival); 
#line 363 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 149 ".\\myparser.y"
printf("%s\n",yyattribute(2 - 3));
#line 376 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 154 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 1)); 
#line 389 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 155 ".\\myparser.y"
 printf("%s\n",yyattribute(1 - 1)); 
#line 402 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 156 ".\\myparser.y"
 printf("%d\n",yyattribute(2 - 2).ival); 
#line 415 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 157 ".\\myparser.y"
 printf("%s\n",yyattribute(2 - 2).ival); 
#line 428 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 165 ".\\myparser.y"

#line 441 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 168 ".\\myparser.y"
 printf("0 INT\n");
#line 454 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 169 ".\\myparser.y"
 printf("FLOAT\n"); 
#line 467 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 170 ".\\myparser.y"
 printf("CHAR\n"); 
#line 480 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 171 ".\\myparser.y"
 printf("STRING\n"); 
#line 493 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 172 ".\\myparser.y"
 printf("VOID\n"); 
#line 506 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 180 ".\\myparser.y"
 printf("= expr %d\n",yyattribute(2 - 2).ival);
#line 519 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 181 ".\\myparser.y"
printf("- %s",yyattribute(3 - 3).sval);
#line 532 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 184 ".\\myparser.y"
 printf("%s",yyattribute(1 - 1)); 
#line 545 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 187 ".\\myparser.y"
 printf("val %d\n",yyattribute(1 - 1).ival);
#line 558 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 189 ".\\myparser.y"
 printf("ID %s \n",yyattribute(1 - 1).sval); 
#line 571 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 191 ".\\myparser.y"
 printf("comma %s \n",yyattribute(1 - 2).sval); 
#line 584 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 200 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(1 - 3).ival + yyattribute(3 - 3).ival; 
#line 597 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 201 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(1 - 3).ival - yyattribute(3 - 3).ival; 
#line 610 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 204 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(1 - 3).ival * yyattribute(3 - 3).ival; 
#line 623 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 205 ".\\myparser.y"
 if(yyattribute(3 - 3).ival == 0 || yyattribute(3 - 3).ival == 0.0){
                              yyerror("divide by zero");
                              exit(0);
                          } 
                          else{
                              (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(1 - 3).ival / yyattribute(3 - 3).ival;
                          }
                        
#line 643 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 213 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(2 - 3).ival; 
#line 656 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 216 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(1 - 1).ival;printf("%d",yyattribute(1 - 1).ival);
#line 669 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 217 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = -yyattribute(2 - 2).ival; 
#line 682 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 219 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr).ival = yyattribute(2 - 3).ival; 
#line 695 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "FLOAT_VAL", 257 },
		{ "INTEGER", 258 },
		{ "INT", 259 },
		{ "FLOAT", 260 },
		{ "STRING", 261 },
		{ "VOID", 262 },
		{ "CHAR", 264 },
		{ "ID", 265 },
		{ "COMMA", 266 },
		{ "SEMICOLON", 267 },
		{ "FOR", 268 },
		{ "WHILE", 271 },
		{ "DO", 272 },
		{ "PLUS", 274 },
		{ "MINUS", 275 },
		{ "MUL", 276 },
		{ "DIV", 277 },
		{ "SADD", 281 },
		{ "SSUB", 282 },
		{ "PLUS_AND", 284 },
		{ "MINUS_AND", 285 },
		{ "ASSIGN", 288 },
		{ "LBRACE", 289 },
		{ "RBRACE", 290 },
		{ "LBRACKET", 291 },
		{ "RBRACKET", 292 },
		{ "LESS", 297 },
		{ "MORE", 298 },
		{ "ENDFLAG", 305 },
		{ "FALSE", 311 },
		{ "TRUE", 312 },
		{ "LESS_EQU", 313 },
		{ "MORE_EQU", 314 },
		{ "CHAR_VAL", 323 },
		{ "UMINUS", 324 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: begin",
		"begin: begin Program ENDFLAG",
		"begin: begin ENDFLAG",
		"begin:",
		"Program: RELOOP",
		"Program: VAR_DECLARE",
		"Program:",
		"RELOOP: FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR",
		"RELOOP: WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR",
		"RELOOP: DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR",
		"LBRACE_EXPR: LBRACE ENDFLAG",
		"LBRACE_EXPR: LBRACE",
		"RBRACE_EXPR: RBRACE ENDFLAG",
		"RBRACE_EXPR: RBRACE",
		"SEMICOLON_EXPR: SEMICOLON ENDFLAG",
		"SEMICOLON_EXPR: SEMICOLON",
		"FOR_KEY: FOR",
		"WHILE_KEY: WHILE",
		"DO_KEY: DO",
		"FOR_EXPR: FIRST_PART SECOND_PART THIRD_PART",
		"FIRST_PART: VAR_DECLARE",
		"FIRST_PART:",
		"SECOND_PART: LOGICAL_OPERATION S_PART",
		"SECOND_PART:",
		"S_PART: COMMA LOGICAL_OPERATION S_PART",
		"S_PART: SEMICOLON_EXPR",
		"LOGICAL_OPERATION: IDs LOGICAL_OPTION VALUE",
		"LOGICAL_OPERATION:",
		"LOGICAL_OPTION: MORE",
		"LOGICAL_OPTION: LESS",
		"LOGICAL_OPTION: MORE_EQU",
		"LOGICAL_OPTION: LESS_EQU",
		"THIRD_PART: NORMAL_MATH_OPERATION",
		"THIRD_PART: TRUE",
		"THIRD_PART: FALSE",
		"THIRD_PART: VALUE",
		"THIRD_PART:",
		"VALUE: INTEGER",
		"NORMAL_MATH_OPERATION: IDs OPTION OTHER",
		"OTHER: COMMA NORMAL_MATH_OPERATION",
		"OTHER:",
		"OPTION: SADD",
		"OPTION: SSUB",
		"OPTION: PLUS_AND VALUE",
		"OPTION: MINUS_AND VALUE",
		"STATEMENT: VAR_DECLARE",
		"STATEMENT:",
		"VAR_DECLARE: TYPE IDLIST SEMICOLON_EXPR VAR_DECLARE",
		"VAR_DECLARE:",
		"TYPE: INT",
		"TYPE: FLOAT",
		"TYPE: CHAR",
		"TYPE: STRING",
		"TYPE: VOID",
		"IDLIST: IDEXPR TERMINATE",
		"IDEXPR: IDs ASSIGN_EXPR",
		"ASSIGN_EXPR: ASSIGN TYPE_VAL TERMINATE",
		"ASSIGN_EXPR: ASSIGN IDs TERMINATE",
		"ASSIGN_EXPR: ASSIGN expr",
		"ASSIGN_EXPR: ASSIGN MINUS IDs",
		"TYPE_VAL: INTEGER_VAL",
		"TYPE_VAL: CHAR_VAL",
		"TYPE_VAL: FLOAT_VAL",
		"INTEGER_VAL: INTEGER",
		"IDs: ID",
		"TERMINATE: COMMA IDLIST",
		"TERMINATE:",
		"expr: expr1 PLUS expr1",
		"expr: expr1 MINUS expr1",
		"expr: expr1",
		"expr1: expr2 MUL expr2",
		"expr1: expr2 DIV expr2",
		"expr1: LBRACKET expr RBRACKET",
		"expr1: expr2",
		"expr2: INTEGER_VAL",
		"expr2: MINUS INTEGER",
		"expr2: expr1",
		"expr2: LBRACKET expr2 RBRACKET"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 3, -1 },
		{ 1, 2, -1 },
		{ 1, 0, -1 },
		{ 2, 1, -1 },
		{ 2, 1, -1 },
		{ 2, 0, -1 },
		{ 3, 7, 0 },
		{ 3, 7, -1 },
		{ 3, 9, -1 },
		{ 4, 2, 1 },
		{ 4, 1, 2 },
		{ 5, 2, 3 },
		{ 5, 1, 4 },
		{ 6, 2, -1 },
		{ 6, 1, -1 },
		{ 7, 1, 5 },
		{ 8, 1, 6 },
		{ 9, 1, 7 },
		{ 10, 3, -1 },
		{ 11, 1, -1 },
		{ 11, 0, -1 },
		{ 12, 2, -1 },
		{ 12, 0, -1 },
		{ 13, 3, -1 },
		{ 13, 1, -1 },
		{ 14, 3, -1 },
		{ 14, 0, -1 },
		{ 15, 1, 8 },
		{ 15, 1, 9 },
		{ 15, 1, 10 },
		{ 15, 1, 11 },
		{ 16, 1, -1 },
		{ 16, 1, -1 },
		{ 16, 1, -1 },
		{ 16, 1, -1 },
		{ 16, 0, -1 },
		{ 17, 1, 12 },
		{ 18, 3, 13 },
		{ 19, 2, -1 },
		{ 19, 0, -1 },
		{ 20, 1, 14 },
		{ 20, 1, 15 },
		{ 20, 2, 16 },
		{ 20, 2, 17 },
		{ 21, 1, -1 },
		{ 21, 0, -1 },
		{ 22, 4, 18 },
		{ 22, 0, -1 },
		{ 23, 1, 19 },
		{ 23, 1, 20 },
		{ 23, 1, 21 },
		{ 23, 1, 22 },
		{ 23, 1, 23 },
		{ 24, 2, -1 },
		{ 25, 2, -1 },
		{ 26, 3, -1 },
		{ 26, 3, -1 },
		{ 26, 2, 24 },
		{ 26, 3, 25 },
		{ 27, 1, -1 },
		{ 27, 1, 26 },
		{ 27, 1, -1 },
		{ 28, 1, 27 },
		{ 29, 1, 28 },
		{ 30, 2, 29 },
		{ 30, 0, -1 },
		{ 31, 3, 30 },
		{ 31, 3, 31 },
		{ 31, 1, -1 },
		{ 32, 3, 32 },
		{ 32, 3, 33 },
		{ 32, 3, 34 },
		{ 32, 1, -1 },
		{ 33, 1, 35 },
		{ 33, 2, 36 },
		{ 33, 1, -1 },
		{ 33, 3, 37 }
	};
	yyreduction = reduction;

	yytokenaction_size = 306;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 1, YYAT_ACCEPT, 0 },
		{ 37, YYAT_SHIFT, 54 },
		{ 118, YYAT_SHIFT, 35 },
		{ 43, YYAT_SHIFT, 70 },
		{ 90, YYAT_SHIFT, 55 },
		{ 115, YYAT_SHIFT, 118 },
		{ 33, YYAT_SHIFT, 46 },
		{ 33, YYAT_SHIFT, 47 },
		{ 113, YYAT_SHIFT, 23 },
		{ 37, YYAT_SHIFT, 23 },
		{ 43, YYAT_SHIFT, 23 },
		{ 84, YYAT_SHIFT, 87 },
		{ 84, YYAT_SHIFT, 88 },
		{ 80, YYAT_SHIFT, 2 },
		{ 80, YYAT_SHIFT, 3 },
		{ 80, YYAT_SHIFT, 4 },
		{ 80, YYAT_SHIFT, 5 },
		{ 101, YYAT_SHIFT, 44 },
		{ 80, YYAT_SHIFT, 6 },
		{ 37, YYAT_SHIFT, 56 },
		{ 100, YYAT_SHIFT, 23 },
		{ 90, YYAT_SHIFT, 83 },
		{ 33, YYAT_SHIFT, 48 },
		{ 33, YYAT_SHIFT, 49 },
		{ 29, YYAT_SHIFT, 23 },
		{ 29, YYAT_REDUCE, 27 },
		{ 29, YYAT_REDUCE, 27 },
		{ 84, YYAT_SHIFT, 102 },
		{ 66, YYAT_SHIFT, 2 },
		{ 66, YYAT_SHIFT, 3 },
		{ 66, YYAT_SHIFT, 4 },
		{ 66, YYAT_SHIFT, 5 },
		{ 99, YYAT_SHIFT, 113 },
		{ 66, YYAT_SHIFT, 6 },
		{ 108, YYAT_REDUCE, 76 },
		{ 108, YYAT_REDUCE, 76 },
		{ 98, YYAT_SHIFT, 70 },
		{ 90, YYAT_SHIFT, 57 },
		{ 36, YYAT_SHIFT, 2 },
		{ 36, YYAT_SHIFT, 3 },
		{ 36, YYAT_SHIFT, 4 },
		{ 36, YYAT_SHIFT, 5 },
		{ 94, YYAT_SHIFT, 67 },
		{ 36, YYAT_SHIFT, 6 },
		{ 20, YYAT_SHIFT, 2 },
		{ 20, YYAT_SHIFT, 3 },
		{ 20, YYAT_SHIFT, 4 },
		{ 20, YYAT_SHIFT, 5 },
		{ 86, YYAT_SHIFT, 103 },
		{ 20, YYAT_SHIFT, 6 },
		{ 18, YYAT_SHIFT, 2 },
		{ 18, YYAT_SHIFT, 3 },
		{ 18, YYAT_SHIFT, 4 },
		{ 18, YYAT_SHIFT, 5 },
		{ 83, YYAT_SHIFT, 81 },
		{ 18, YYAT_SHIFT, 6 },
		{ 43, YYAT_SHIFT, 71 },
		{ 43, YYAT_SHIFT, 72 },
		{ 74, YYAT_SHIFT, 95 },
		{ 74, YYAT_SHIFT, 96 },
		{ 78, YYAT_SHIFT, 100 },
		{ 74, YYAT_SHIFT, 97 },
		{ 74, YYAT_SHIFT, 98 },
		{ 62, YYAT_SHIFT, 89 },
		{ 62, YYAT_SHIFT, 90 },
		{ 62, YYAT_REDUCE, 76 },
		{ 62, YYAT_REDUCE, 76 },
		{ 37, YYAT_SHIFT, 58 },
		{ 107, YYAT_REDUCE, 76 },
		{ 107, YYAT_REDUCE, 76 },
		{ 60, YYAT_REDUCE, 60 },
		{ 60, YYAT_REDUCE, 60 },
		{ 59, YYAT_SHIFT, 87 },
		{ 59, YYAT_SHIFT, 88 },
		{ 67, YYAT_SHIFT, 23 },
		{ 64, YYAT_SHIFT, 39 },
		{ 63, YYAT_SHIFT, 39 },
		{ 56, YYAT_SHIFT, 81 },
		{ 51, YYAT_SHIFT, 19 },
		{ 45, YYAT_SHIFT, 8 },
		{ 44, YYAT_SHIFT, 77 },
		{ 35, YYAT_SHIFT, 52 },
		{ 34, YYAT_SHIFT, 51 },
		{ 28, YYAT_SHIFT, 41 },
		{ 26, YYAT_SHIFT, 39 },
		{ 25, YYAT_SHIFT, 37 },
		{ 22, YYAT_SHIFT, 23 },
		{ 19, YYAT_SHIFT, 30 },
		{ 15, YYAT_SHIFT, 22 },
		{ 14, YYAT_SHIFT, 21 },
		{ 11, YYAT_SHIFT, 18 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 1, YYAT_SHIFT, 2 },
		{ 1, YYAT_SHIFT, 3 },
		{ 1, YYAT_SHIFT, 4 },
		{ 1, YYAT_SHIFT, 5 },
		{ -1, YYAT_ERROR, 0 },
		{ 1, YYAT_SHIFT, 6 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 1, YYAT_SHIFT, 7 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 1, YYAT_SHIFT, 9 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 1, YYAT_SHIFT, 10 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 1, YYAT_DEFAULT, 45 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -201, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ -216, 1, YYAT_ERROR, 0 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 113 },
		{ -209, 1, YYAT_REDUCE, 21 },
		{ -218, 1, YYAT_REDUCE, 11 },
		{ -215, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ -179, 1, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_DEFAULT, 118 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ -182, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -209, 1, YYAT_ERROR, 0 },
		{ -241, 1, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_DEFAULT, 101 },
		{ -291, 1, YYAT_ERROR, 0 },
		{ -210, 1, YYAT_ERROR, 0 },
		{ -224, 1, YYAT_REDUCE, 15 },
		{ -221, 1, YYAT_REDUCE, 48 },
		{ -256, 1, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_DEFAULT, 113 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_DEFAULT, 51 },
		{ 0, 0, YYAT_DEFAULT, 94 },
		{ -255, 1, YYAT_REDUCE, 36 },
		{ -225, 1, YYAT_REDUCE, 13 },
		{ -192, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ -211, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ -181, 1, YYAT_DEFAULT, 113 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ -204, 1, YYAT_REDUCE, 73 },
		{ -196, 1, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ -211, 1, YYAT_REDUCE, 69 },
		{ -190, 1, YYAT_REDUCE, 66 },
		{ -191, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ -231, 1, YYAT_REDUCE, 46 },
		{ -191, 1, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ -223, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -231, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ -246, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ -265, 1, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ -244, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ -254, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_DEFAULT, 101 },
		{ -224, 1, YYAT_DEFAULT, 118 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_DEFAULT, 98 },
		{ -222, 1, YYAT_ERROR, 0 },
		{ -234, 1, YYAT_REDUCE, 40 },
		{ -245, 1, YYAT_REDUCE, 27 },
		{ -273, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ -208, 1, YYAT_REDUCE, 67 },
		{ -242, 1, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -257, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ -287, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -265, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 69;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 1, 14 },
		{ 1, 16 },
		{ 100, 115 },
		{ 18, 28 },
		{ 18, 29 },
		{ 1, 11 },
		{ 1, 15 },
		{ 1, 13 },
		{ 37, 64 },
		{ 37, 60 },
		{ 37, 63 },
		{ 113, 117 },
		{ 37, 61 },
		{ 37, 62 },
		{ 90, 85 },
		{ 18, 27 },
		{ 118, 119 },
		{ 100, 33 },
		{ 90, 108 },
		{ 90, 59 },
		{ 1, 12 },
		{ 101, 116 },
		{ 113, 74 },
		{ 39, 65 },
		{ 39, 26 },
		{ 94, 69 },
		{ 88, 105 },
		{ 88, 106 },
		{ 39, 25 },
		{ 57, 86 },
		{ 57, 62 },
		{ 57, 84 },
		{ 94, 110 },
		{ 43, 75 },
		{ 43, 73 },
		{ 43, 76 },
		{ 29, 43 },
		{ 99, 114 },
		{ 29, 42 },
		{ 80, 101 },
		{ 80, 31 },
		{ 36, 53 },
		{ 36, 17 },
		{ 98, 112 },
		{ 97, 111 },
		{ 93, 109 },
		{ 89, 107 },
		{ 87, 104 },
		{ 74, 99 },
		{ 67, 94 },
		{ 66, 93 },
		{ 64, 92 },
		{ 63, 91 },
		{ 56, 82 },
		{ 51, 80 },
		{ 50, 79 },
		{ 45, 78 },
		{ 42, 68 },
		{ 41, 66 },
		{ 33, 50 },
		{ 32, 45 },
		{ 26, 40 },
		{ 25, 38 },
		{ 24, 36 },
		{ 22, 34 },
		{ 20, 32 },
		{ 17, 24 },
		{ 13, 20 },
		{ 0, 1 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 67, -1 },
		{ -2, 36 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 63, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 42, 39 },
		{ -7, 36 },
		{ 0, -1 },
		{ 44, 80 },
		{ 0, -1 },
		{ 50, 100 },
		{ 0, -1 },
		{ 57, -1 },
		{ 36, -1 },
		{ 31, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 100 },
		{ 0, -1 },
		{ 0, -1 },
		{ 55, -1 },
		{ 44, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, -1 },
		{ -19, 90 },
		{ 0, -1 },
		{ -1, -1 },
		{ 0, -1 },
		{ 54, -1 },
		{ 44, 94 },
		{ 17, 113 },
		{ 0, -1 },
		{ 48, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 38, -1 },
		{ 50, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, -1 },
		{ -2, 90 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, -1 },
		{ 21, -1 },
		{ 0, -1 },
		{ 29, 80 },
		{ 35, 100 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 36 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 14, 88 },
		{ -6, 90 },
		{ 14, 90 },
		{ -14, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 40, -1 },
		{ 19, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, -1 },
		{ 26, -1 },
		{ 18, -1 },
		{ -12, -1 },
		{ 16, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 222 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section
int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
    char* inputFile, *outputFile;
	inputFile = new char[200];
	outputFile = new char[200];
	FILE *stream1, *stream2;
	std::cout << "请依次输入待解析的文件地址和结果输出地址\n";
	//cin >> inputFile >> outputFile;
	freopen_s(&stream1, "f:/test.txt", "r", stdin);
	freopen_s(&stream2, "f:/output.txt", "w", stdout);
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	return n;
}


