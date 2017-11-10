#include<iostream>
#include "token.h"
#define MAX_LENGTH  200
using namespace std;
TokenAndLexme::TokenAndLexme() {
	token = new char[MAX_LENGTH];
	lexme = new char[MAX_LENGTH];
	index = 0;
}
int Token::getTokenIndex(char * lexme) {
	for (int i = 0; i < symbolTable.size(); i++) {
		if (symbolTable[i].lexme == lexme) {
			return symbolTable[i].index;
		}
	}
	return -1;
}
void Token::addToken(char * token, char * lexme, int index) {
	TokenAndLexme symbol;
	symbol.token = token;
	symbol.lexme = lexme;
	symbol.index = index;
	symbolTable.push_back(symbol);
}
int Token::getSize() {
	return symbolTable.size();
}