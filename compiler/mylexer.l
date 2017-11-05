%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2017年10月9日
****************************************************************************/
#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include "myparser.h"
#include <cstring>
#include <string>
#include <iostream>
#include <stdio.h>
#include<sstream>
using namespace std;
%}
/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer
// class definition

%{
struct TokenAndLexme;
void addToken(char*token,char*lexme);
int getIndex(char*lexme);
void printToken();
int id_state = -1;
struct TokenAndLexme{
    char * token;
    char * lexme;
    int index;
    TokenAndLexme*next;
};
%}
// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here

integer [1-9]?[0-9]+
number  [1-9]?[0-9]+\.?[0-9]*
identifier (_|[a-zA-Z])?[A-Za-z_0-9]+
literal \"[^\"]*?\"|'[^']*?'
%%

/////////////////////////////////////////////////////////////////////////////
// rules section
%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}
//关键字
"bool"  { addToken("BOOL",yytext); return BOOL;}
"int"  { addToken("INT",yytext); return INTEGER;}
"char"  { addToken("CHAR",yytext); return CHAR;}
"string"  { addToken("STRING",yytext); return STRING;}
"doule"
|"float"  {addToken("FLOAT",yytext);return FLOAT;}
"void"  {addToken("VOID",yytext); return VOID;}
"if"  { addToken("IF",yytext); return IF;}
"else"  { addToken("ELSE",yytext); return ELSE;}
"while"  { addToken("WHILE",yytext); return WHILE;}
"for"  { addToken("FOR",yytext); return FOR;}
"do"  { addToken("DO",yytext); return DO;}
//符号
"+"  { addToken("PLUS",yytext); return PLUS;}
"-"  { addToken("MINUS",yytext); return MINUS;}
"*"  { addToken("MUL",yytext); return MUL;}
"/"  { addToken("DIV",yytext); return DIV;}
"^"  { addToken("POW",yytext); return POW;}
"**" { addToken("EXP",yytext); }
"==" { addToken("EQU",yytext); return EQU;}
"++" { addToken("SADD",yytext); return SADD;}
"--" { addToken("SSUB",yytext); return SSUB;}
"||" { addToken("OR",yytext); return OR;}
"&&" { addToken("AND",yytext); return AND;}
"!"  { addToken("NOT",yytext); return NOT;}
"="  { addToken("ASSIGN",yytext); return ASSIGN;}
"{"  { addToken("LBRACE",yytext);return LBRACE;}
"}"  { addToken("RBRACE",yytext); return RBRACE;}
"("  { addToken("LBRACKET",yytext); return LBRACKET;}
")"  { addToken("RBRACKET",yytext); return RBRACKET;}
":"  { addToken("COLON",yytext); return COLON;}
"->"  { addToken("POINTER",yytext); return POINTER;}
"&"  { addToken("REF",yytext); return REF;}
\'|\"  { addToken("QUOTE",yytext); return QUOTE;}
","  { addToken("COMMA",yytext); return COMMA;}
";"  { addToken("SEMICOLON",yytext); return SEMICOLON;}
[\t ]+  ;
//字符串、数字、其余标识符
{literal}  { addToken("LITERAL",yytext); }
{integer}  {
               addToken("INTEGER",yytext);
               stringstream ss;
               ss<<yytext;
               int sum;
               ss>>sum;
               yylval = sum;
               return INTEGER;
           }
{number}  {addToken("FLOAT",yytext); yylval = atof(yytext); printf("%f",&yylval);getchar(); return FLOAT;}
{number}((E|e)[+-]?{number})?  { addToken("DIGIT",yytext); yylval = atoi(yytext); }
{identifier}  { addToken("ID",yytext); return ID;}
//结尾
\n  {return ENDFLAG;}
// place your Lex rules here
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
//定义符号表的结构

TokenAndLexme * token_head = new TokenAndLexme();
//往符号表中添加符号
void addToken(char* token, char* lexme){
    int index = getIndex(lexme);
    if(index == -1 && token == "ID"){
        index = ++id_state;
    }
    TokenAndLexme*temp_token = new TokenAndLexme();
    temp_token->token = new char[200];
    temp_token->lexme = new char[200];
    strcpy_s(temp_token->token,200,token);
    strcpy_s(temp_token->lexme,200,lexme);
    temp_token->index = index;
    temp_token->next = token_head;
    token_head = temp_token;
    printf("%-10s\t%-20s\t",temp_token->token,temp_token->lexme);
    if(index != -1){
        printf("%-10d\n",index);
    }
    else{
	    printf("\n");
    }
}
//获取该词素在符号表中的index
int getIndex(char*lexme){
    TokenAndLexme*current_token = token_head;
    while(current_token->next!=NULL){
        if( strcmp(current_token->lexme,lexme) == 0 ){
            return current_token->index;
        }
        current_token = current_token->next;
      }
    return -1;
}
//打印符号表的内容
void printToken(){
    TokenAndLexme* current_token = token_head;
    while(current_token->next!= NULL){
        printf("%-10s\t%-20s\t",current_token->token,current_token->lexme);
        if(current_token->index != -1){
            printf("%-10d\n",current_token->index);
        }
        else{
            printf("\n");
        }
        current_token = current_token->next;
    }
}