%{
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
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition

{

	// place any extra class members here
	
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}
// attribute type
%union {
    double dval;
    int ival;
    char* sval;
    char symbol;
}
%token <dval> FLOAT_VAL
%token <ival> INTEGER
%token <sval> INT FLOAT STRING VOID DOUBLE CHAR ID
%token <sval> COMMA SEMICOLON FOR 
%type<ival> expr1 expr expr2 VALUE INTEGER_VAL
%type<sval> IDLIST IDs FOR_KEY
%type<dval> DOUBVAL
%include {
	// place any extra class members here
}

// place any declarations here

%token INT  CHAR 
%token STRING  DOUBLE  FLOAT  VOID  IF 
%token ELSE  WHILE  FOR  DO  BOOL 
%token PLUS  MINUS  MUL  DIV  POW 
%token EXP  EQU  SADD  SSUB  OR  PLUS_AND MINUS_AND
%token AND  NOT  ASSIGN  LBRACE  RBRACE 
%token LBRACKET  RBRACKET  COLON  POINTER 
%token REF  QUOTE  COMMA  SEMICOLON  LESS 
%token MORE  OUTPUT  INPUT  DOT  LSQBRACKET 
%token RSQBRACKET  LITERAL  ID  INTEGER 
%token ENDFLAG
%token VAR_DECALRE FUNCTION_NAME
%token PARAMS FUNCITON_BODY SELF_OPERATION FALSE TRUE
%token LESS_EQU MORE_EQU ASSIGN_GRAMMAR RETURN RETURN_VALS
%token CALL_FUNTIONS LOGICAL_BLOCK CALL FLOAT_VAL DOUBLE_VAL STRING_VAL
%token  CHAR_VAL CHAR_VAL
%left PLUS MINUS 
%left MUL DIV
%nonassoc UMINUS

%%

/////////////////////////////////////////////////////////////////////////////
begin : begin Program ENDFLAG
	  | begin ENDFLAG
	  |
	  ;
Program : RELOOP
		| VAR_DECLARE
		|
		;
// rules section
RELOOP : FOR_KEY LBRACKET FOR_EXPR RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR  {printf("attach here!");}
       | WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET LBRACE_EXPR STATEMENT RBRACE_EXPR
       | DO_KEY LBRACE_EXPR STATEMENT RBRACE_EXPR WHILE_KEY LBRACKET LOGICAL_OPERATION RBRACKET SEMICOLON_EXPR
       ;
       
/*--------------------*/
// FOR 循环处理 然后直接应用于，while.
/*----------------*/
LBRACE_EXPR : LBRACE ENDFLAG { printf("%s\n",$1); }
			| LBRACE { printf("%s\n",$1); }
			;
RBRACE_EXPR : RBRACE ENDFLAG { printf("%s\n",$1); }
			| RBRACE { printf("%s\n",$1); }
			;
SEMICOLON_EXPR : SEMICOLON ENDFLAG
			   | SEMICOLON
			   ;

FOR_KEY : FOR {printf("%s\n",$1);}
        ;
WHILE_KEY : WHILE { printf("%s\n",$1); }
		  ;
DO_KEY : DO {printf("%s",$1);}
       ;
FOR_EXPR : FIRST_PART SECOND_PART THIRD_PART
         ;
FIRST_PART : VAR_DECLARE
           | 
           ;
SECOND_PART : LOGICAL_OPERATION S_PART
            |
            ;
S_PART : COMMA LOGICAL_OPERATION S_PART
       | SEMICOLON_EXPR
       ;
LOGICAL_OPERATION : IDs LOGICAL_OPTION VALUE        // >
                  |
                  ;
LOGICAL_OPTION : MORE  {printf("%s\n",$1);}
       | LESS  {printf("%s\n",$1);}
       | MORE_EQU {printf("%s\n",$1);}
       | LESS_EQU {printf("%s\n",$1);}
       ;
THIRD_PART : NORMAL_MATH_OPERATION
           | TRUE
           | FALSE
           | VALUE
           | 
           ;
VALUE : INTEGER { printf("%d\n",$1); }

      ;
NORMAL_MATH_OPERATION : IDs OPTION OTHER{printf("%s\n",$2);}
					  ;
OTHER : COMMA NORMAL_MATH_OPERATION
	  | 
      ;
OPTION : SADD { printf("%s\n",$1); }
       | SSUB { printf("%s\n",$1); }
       | PLUS_AND VALUE { printf("%d\n",$2); }
       | MINUS_AND VALUE { printf("%s\n",$2); }
       ;
STATEMENT : VAR_DECLARE
          |
          ;
/*-------------------------------------*/
//以下是对赋值表达式的产生式 已经测过
/*-------------------------------------*/
VAR_DECLARE: TYPE IDLIST SEMICOLON_EXPR VAR_DECLARE{}
           |
           ;
TYPE : INT { printf("0 INT\n");}
     | FLOAT { printf("FLOAT\n"); }
     | CHAR { printf("CHAR\n"); }
     | STRING { printf("STRING\n"); }
     | VOID { printf("VOID\n"); }
     ;
IDLIST : IDEXPR TERMINATE
       ;
IDEXPR : IDs ASSIGN_EXPR
       ;
ASSIGN_EXPR : ASSIGN TYPE_VAL TERMINATE
            | ASSIGN IDs TERMINATE
            | ASSIGN expr { printf("= expr %d\n",$2);}
            | ASSIGN MINUS IDs {printf("- %s",$3);}
            ;
TYPE_VAL : INTEGER_VAL
		 | CHAR_VAL  { printf("%s",$1); }
		 | FLOAT_VAL
		 ;
INTEGER_VAL : INTEGER { printf("val %d\n",$1);}
            ;
IDs : ID { printf("ID %s \n",$1); }
    ;
TERMINATE : COMMA IDLIST{ printf("comma %s \n",$1); }
          |
          ;


/*------------------------------------------------*/
//下面是对加减乘除四则混合运算的产生式，包括对括号的处理
/*-----------------------------------------------*/

expr : expr1 PLUS expr1 { $$ = $1 + $3; }
     | expr1 MINUS expr1 { $$ = $1 - $3; }
     | expr1
     ;
expr1 : expr2 MUL expr2 { $$ = $1 * $3; }
      | expr2 DIV expr2 { if($3 == 0 || $3 == 0.0){
                              yyerror("divide by zero");
                              exit(0);
                          } 
                          else{
                              $$ = $1 / $3;
                          }
                        }
      | LBRACKET expr RBRACKET { $$ = $2; }
      | expr2
      ;
expr2 : INTEGER_VAL { $$ = $1;printf("%d",$1);}
      | MINUS INTEGER %prec UMINUS { $$ = -$2; }
      | expr1
      | LBRACKET expr2 RBRACKET { $$ = $2; }
      ;

%%

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