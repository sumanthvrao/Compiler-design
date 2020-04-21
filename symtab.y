%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	FILE *yyin;
	extern int yylineno;
	extern FILE *fp;
	char vars[20][10];
	int vals[20];
	extern int scopeno;
	extern int value;
	extern char new;

	struct symtab
	{
		char identifier[20];
		char type[20];
		char attribute[20];
		int  val;
		char pars[100];
		char scope[20];
		int  spec;
		int no;
		char alpha;
	};
	struct symtab sym[20];

	char temp[20];
	char func[20];
	char nonlocal[20];
	char temptype[20];
	char tempparams[100];

	int i=0;
	int ifnum = 0;
	double tempval;
	double extraval;
	int count = 0;

	void id_insert(int x);
	void display();
	void yyerror(const char*);
	int yylex();

	int search_symbol_table(char *var, int scopeno1, char new1);
%}
%union
{
	int num;
	char *str;
};

%token INT MAIN OB CB SO SC COLON HASH INCLUDE LIBRARY
%token IF ELSE DO WHILE FOR CONT BRK RTRN SEMICOLON BINARYOR BINARYAND LT
%token GT LTE GTE NE EQ VOID CHAR COMMA EQUAL SUBPREFIX
%token ADD SUB MUL DIV ADDRIGHT SUBRIGHT MULRIGHT DIVRIGHT ADDPREFIX
%token ID
%token NUM

%type<num> E T F

%%
PreProcessorDirectives : {strcpy(func, "global");} HASH INCLUDE LIBRARY Global
							{printf("\n--------------------\n");
							printf("\n Symbol table generated -> \n\n"); display();
							printf("\n--------------------\n\n");}
		       ;
Main : INT MAIN {strcpy(func, "main");} OB CB CompoundStmt Function '$'
     ;
Identifier : ID {strcpy(temp,yylval.str);} Array

Array : '[' NUM ']' | '[' ']' | ;

CompoundStmt : SO Stmt SC
	     ;
Global : FunctionDefinition Global
       | GlobeDeclaration Global
       | Main
       ;
GlobeDeclaration : Type VarList SEMICOLON
	    	 | Type GlobeAssignExpr
	         ;
GlobeAssignExpr : Identifier EQUAL Extra COMMA GlobeAssignExpr
	   	| Identifier EQUAL Extra SEMICOLON {
					     	tempval = extraval; ifnum = 1;
						if(search_symbol_table(temp, scopeno, new) == -1)
						{
							if(strcmp(temptype, "int")==0)
							{ id_insert(1); }
							else
							   printf("WARNING : line : %d : Invalid Type Error\n", yylineno);
						}
						else
						{
								id_insert(6);
						}
					  }
	  	;
FunctionDefinition : FunctionName OB CB SEMICOLON {id_insert(4);}
		   | FunctionName OB ParamsType CB SEMICOLON
		   {	 if(sym[i].spec==0)
			 {id_insert(4);}
			 else
			 {id_insert(5);}
			 strcpy(tempparams, "");
		   }
		   ;
FunctionName : Type Identifier {if(strcmp(func, "global") != 0)
			{strcpy(nonlocal, func); strcpy(func, temp);}
		}
		;
ParamsType : ParamsType COMMA Type	{strcat(tempparams, temptype); strcat(tempparams, " ");}
	   | Type			{strcat(tempparams, temptype); strcat(tempparams, " ");}
	   ;

Stmt : Extra SEMICOLON Stmt
     | Declaration Stmt
     | AssignExpr Stmt
     | SelectionStmt Stmt
     | JumpStmt	Stmt
     | FunctionCall Stmt
     | CompoundStmt Stmt
     | error SEMICOLON	{yyerrok; yyclearin; printf("missing ';'\n");}
     | Iterative Stmt
     |    ;
Iterative :   WHILE OB cond CB CompoundStmt|
		DO CompoundStmt WHILE OB cond CB SEMICOLON
	    ;


Function : FunctionName OB CB CompoundStmt Function
	 | FunctionName OB FunctionParams CB CompoundStmt Function
	 |
	 ;

FunctionParams : FunctionParams COMMA Type Identifier 	{id_insert(3);}
	       | Type Identifier			{id_insert(3);}
	       ;
Declaration : Type VarList SEMICOLON
	    | Type AssignExpr {
					     	tempval = extraval; ifnum = 1;
						if(search_symbol_table(temp, scopeno, new) == -1)
						{
							if(strcmp(temptype, "int")==0)
							{ id_insert(1); }
							else
							   printf("WARNING : line : %d : Invalid Type Error\n", yylineno);
						}
						else
						{
								id_insert(6);
						}
					  }
	    ;
FunctionCall : Identifier EQUAL Identifier OB VarList CB SEMICOLON
	     | Identifier OB VarList CB SEMICOLON
	     ;
AssignExpr : Identifier EQUAL Extra COMMA {id_insert(6);} AssignExpr
	   | Identifier EQUAL Extra {id_insert(6);} SEMICOLON
	   ;
SelectionStmt : IF OB cond CB CompoundStmt
	      | IF OB cond CB CompoundStmt ELSE CompoundStmt
	      ;
JumpStmt : CONT SEMICOLON
	 | BRK SEMICOLON
	 | RTRN E SEMICOLON
	 ;
cond : Expr
     | Expr logOp Expr
     ;
Expr : relExp
     | logExp
     ;
relExp : Extra relOp Extra
       ;
logExp : Extra logOp Extra
       ;
Extra : E {extraval = $1;}
      ;
logOp : BINARYOR
      | BINARYAND
      ;
relOp : LT
      | GT
      | LTE
      | GTE
      | NE
      | EQ
      ;
Type : INT 	{strcpy(temptype,"int");}
     | VOID	{strcpy(temptype,"void");}
     | CHAR 	{strcpy(temptype,"char");}
     ;
VarList : VarList COMMA Identifier { ifnum = 0;
			  if (strcmp(temptype,"char")==0)
			  {
				strcpy(temp,yylval.str);id_insert(0);
			  }
			  else if(strcmp(temptype,"int")==0)
			  {
				strcpy(temp,yylval.str);id_insert(1);
			  }
			  else if(strcmp(temptype,"void")==0)
			  {
				strcpy(temp,yylval.str);id_insert(2);
			  }
			}
	| Identifier	{ ifnum = 0;
			  if (strcmp(temptype,"char")==0)
			  {
				strcpy(temp,yylval.str);id_insert(0);
			  }
			  else if(strcmp(temptype,"int")==0)
			  {
				strcpy(temp,yylval.str);id_insert(1);
			  }
			  else if(strcmp(temptype,"void")==0)
			  {
				strcpy(temp,yylval.str);id_insert(2);
			  }
			}
	;
E : E ADD T	{$$ = $1 + $3;}
  | E SUB T	{$$ = $1 - $3;}
  | T
  ;
T : T MUL F	{$$ = $1 * $3;}
  | T DIV F	{$$ = $1 / $3;}
  | F
  ;
F : ID 			{int x = search_symbol_table(yylval.str, scopeno, new); $$ = sym[x].val;}
  | NUM			{$$ = value;}
  | OB E CB		{$$ = $2; }
  ;

%%

void yyerror(const char *msg)
{
	fprintf(stderr, "WARNING : line %d : %s\n", yylineno, msg);
}

void id_insert(int x)
{
	if (x==0)
	{
		strcpy(sym[i].type,"char");
		strcpy(sym[i].identifier,temp);
		sym[i].val=0;
		sym[i].spec=0;
		strcpy(sym[i].attribute,"variable");

		sym[i].no=scopeno;
		sym[i].alpha=new;
		i++;
		count++;


	}
	else if(x==1)
	{

		strcpy(sym[i].type,"int");
		strcpy(sym[i].identifier,temp);
		sym[i].spec=0;
		if(ifnum == 1)
			sym[i].val = tempval;
		strcpy(sym[i].scope, func);
		strcpy(sym[i].attribute,"variable");
		sym[i].no=scopeno;
		sym[i].alpha=new;
		i++;
		count++;


	}
	else if(x==2)
	{

		strcpy(sym[i].type,"void");
		strcpy(sym[i].identifier,temp);
		sym[i].spec=0;
		strcpy(sym[i].scope, func);
		strcpy(sym[i].attribute,"variable");
		sym[i].no=scopeno;
		sym[i].alpha=new;
		i++;
		count++;
		sym[i].no=scopeno;

	}
	else if(x==3)
	{

		strcpy(sym[i].type,temptype);
		strcpy(sym[i].identifier,temp);
		sym[i].val=0;
		sym[i].spec=0;
		strcpy(sym[i].scope, func);
		strcpy(sym[i].attribute,"param");
		sym[i].no=scopeno;
		sym[i].alpha=new;
		i++;
		count++;
		sym[i].no=scopeno;

	}

	else if(x==4)
	{

		strcpy(sym[i].type,temptype);
		strcpy(sym[i].identifier,temp);
		strcpy(sym[i].attribute,"function");
		strcpy(sym[i].pars, tempparams);
		sym[i].val=0;
		sym[i].no=scopeno;
		sym[i].alpha=new;
		i++;
		count++;
		sym[i].no=scopeno;

	}
	else if(x == 6)
	{

		int j = search_symbol_table(temp, scopeno, new);
		if(ifnum == 1)
			sym[j].val = value;

	}
}

void display()
{
	int j=0;
	printf("\nType | Identifier | Attribute | Parameters | scope | scope no");
	for(j=0;j<count;j++)
	{
		if(strcmp(sym[j].attribute, "function") == 0)
			printf("\n%s	%s	%s   \t	%s  \t	%s \t %c%d ",sym[j].type,sym[j].identifier,sym[j].attribute, sym[j].pars, sym[j].scope,sym[j].alpha,sym[j].no);
		else
			printf("\n%s	%s	%s   \t	%d  \t	%s \t %c%d",sym[j].type,sym[j].identifier,sym[j].attribute, sym[j].val, sym[j].scope,sym[j].alpha,sym[j].no);
	}
	printf("\n");
}

int search_symbol_table(char *var, int scopeno1, char new1)
{
;

	for(int j = 0; j < 20; ++j)
	{
		if(strcmp(var, sym[j].identifier) == 0 && sym[j].no==scopeno1 && sym[j].alpha==new1)
			return j;
	}
	return -1;
}

int main()
{
	yyin = fopen("out.c", "r");
	fp=fopen("tokens.txt","w");
	if(!yyparse())
		;
	else
		printf("Invalid");
	fclose(yyin);
	FILE *fptr;
	fptr = fopen("symbolTable.txt", "w");
	for(int j = 0; j < count; ++j)
		if(strcmp(sym[j].attribute, "variable") == 0)
		fprintf(fptr, "%s,%d\n", sym[j].identifier, sym[j].val);
	return 0;
}


