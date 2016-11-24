%{
#include<stdio.h>
%}

OCT 0[1-7]([0-7])*
HEX 0[xX][1-9A-F]([0-9A-F])*
DEC [1-9]([0-9])*
ID [a-zA-Z_]([0-9a-zA-Z_])*
TYPE "int"
SEMI ;
COMMA ,
LP "("
RP ")"
LB "["
RB "]"
LC "{"
RC "}"
BINARYOP "="
UNARYOP "-"
STRUCT struct
RETURN return
IF if
ELSE else
BREAK break
CONT continue
FOR for
READ read
WRITE write

%%
{TYPE} return TYPE;
{STRUCT} return STRUCT;
{BINARYOP} return BINARYOP;
{UNARYOP} return UNARYOP;
{READ} return READ;
{WRITE} return WRITE;
{ID} return ID;
{LP} printf("LP ");
%%

void main(){
	yylex();
}


int yywrap(){
	return 1;
}
