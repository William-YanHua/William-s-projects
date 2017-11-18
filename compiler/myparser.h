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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 11/18/17
* Time: 22:13:39
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 30 ".\\myparser.y"


	// place any extra class members here
	

#line 71 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#ifndef YYSTYPE
union tagYYSTYPE {
#line 46 ".\\myparser.y"

    double dval;
    int ival;
    char* sval;
    char symbol;

#line 87 "myparser.h"
};

#define YYSTYPE union tagYYSTYPE
#endif

#define FLOAT_VAL 257
#define INTEGER 258
#define INT 259
#define FLOAT 260
#define STRING 261
#define VOID 262
#define DOUBLE 263
#define CHAR 264
#define ID 265
#define COMMA 266
#define SEMICOLON 267
#define FOR 268
#line 59 ".\\myparser.y"

	// place any extra class members here

#line 109 "myparser.h"
#define IF 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define BOOL 273
#define PLUS 274
#define MINUS 275
#define MUL 276
#define DIV 277
#define POW 278
#define EXP 279
#define EQU 280
#define SADD 281
#define SSUB 282
#define OR 283
#define PLUS_AND 284
#define MINUS_AND 285
#define AND 286
#define NOT 287
#define ASSIGN 288
#define LBRACE 289
#define RBRACE 290
#define LBRACKET 291
#define RBRACKET 292
#define COLON 293
#define POINTER 294
#define REF 295
#define QUOTE 296
#define LESS 297
#define MORE 298
#define OUTPUT 299
#define INPUT 300
#define DOT 301
#define LSQBRACKET 302
#define RSQBRACKET 303
#define LITERAL 304
#define ENDFLAG 305
#define VAR_DECALRE 306
#define FUNCTION_NAME 307
#define PARAMS 308
#define FUNCITON_BODY 309
#define SELF_OPERATION 310
#define FALSE 311
#define TRUE 312
#define LESS_EQU 313
#define MORE_EQU 314
#define ASSIGN_GRAMMAR 315
#define RETURN 316
#define RETURN_VALS 317
#define CALL_FUNTIONS 318
#define LOGICAL_BLOCK 319
#define CALL 320
#define DOUBLE_VAL 321
#define STRING_VAL 322
#define CHAR_VAL 323
#define UMINUS 324
#endif
