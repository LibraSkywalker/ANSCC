%token HEX OCT DEC ID SEMI COMMA DOT ASSIGN SHIFT BITAND BITXOR BITOR CALCULATE1 CACLULATE2 COMPARE1 COMAPRE2 LOGICAND LOGICOR NEGATIVE SELFTUNE LB RB LC RC LP RP STRUCT RETURN IF ELSE BREAK CONT FOR READ WRITE

%%

program : declaration program 
	| declaration;

declaration : typeDeclare
	| variableDeclare
	| functionDeclare;

typeDeclare : STRUCT ID LC attributeDeclare RC SEMI
	| STRUCT ID SEMI
	| STRUCT LC attributeDeclare RC SEMI;

attributeDeclare : TYPE uninitializedVariables SEMI attributeDeclare
	|TYPE uninitializedVariables SEMI;

VariableDeclare : TYPE variables SEMI;

uninitializedVariables : ID COMMA uninitializedVariables 
	| ID;

variables : variable COMMA variables
	| variable;

variable : ID
	| array
	| ID ASSIGN expression
	| array ASSIGN LC arguments RC;

arguments : expression COMMA arguments
	| expression;
	
array : array LB expression RB 
	| ID; 

functionDeclare: TYPE ID LP parameters RP blockStatment;

parameters : TYPE ID COMMA parameters
	| TYPE ID;

blockStatment : LB statments RB
	| LB RB;

statments : statment statments | statment;

statment : VariableDeclare
	| loopStatment
	| branchStatment
	| blockStatment
	| jumpStatment
	| sequentialStatment;

sequentialStatment : expression COMMA sequentialStatment
	expression SEMI;

jumpStatment : CONT SEMI
	| BREAK SEMI
	| RETURN SEMI;

branchStatment : IF expression THEN expression ELSE expression
	| IF expression THEN expression;

loopStatment : FOR LP expression COMMA expression COMMA expression RP statment;



expression : integer
	| ID
	| LP expression RP
	| ID DOT ID
	| expression LB expression RB
	| ID LP arguments RP
	| NEGATIVE expression
	| SELFTUNE expression
	| expression CALCULATE1 expression
	| expression CALCULATE2 expression
	| expression SHIFT expression
	| expression COMPARE1 expression
	| expression COMPARE2 expression
	| expression BITAND expression
	| expression BITXOR expression
	| expression BITOR expression
	| expression LOGICAND expression
	| expression LOGICOR expression
	| expression ASSIGN expression;

integer : HEX
	| DEC
	| OCT;

	
