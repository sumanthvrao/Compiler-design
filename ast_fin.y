%{
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern char *yytext;
	FILE *yyin;

extern char name[20];
 typedef struct node
 {
 struct node *left;
 struct node *right;
 char *token;
 } node;
 node *mknode(node *left, node *right, char *token);
 void printtree(node *tree);
 void free2(node *tree);

#define YYSTYPE struct node *
struct node *root;
%}
%start PreProcessorDirectives


%token INT MAIN OB CB SO SC COLON HASH INCLUDE LIBRARY
%token IF ELSE DO WHILE FOR CONT BRK RTRN SEMICOLON BINARYOR BINARYAND LT
%token GT LTE GTE NE EQ VOID CHAR COMMA EQUAL SUBPREFIX NUM ID
%token ADD SUB MUL DIV ADDRIGHT SUBRIGHT MULRIGHT DIVRIGHT ADDPREFIX
%nonassoc IFX
%nonassoc ELSE


%%
PreProcessorDirectives : HASH INCLUDE LIBRARY Global{ $$ = mknode(0, $4, "include"); root = $$;}
Main : INT MAIN OB CB CompoundStmt Function '$' { $$ = mknode($5, $6, "main");}
Identifier : ID Array { $$ = mknode(0, 0, name);};
Array : '[' NUM ']' | '[' ']' {$$ = mknode(0, 0, "Array");}
      | ;


CompoundStmt : SO Stmt SC { $$ = $2; }
Global : FunctionDefinition Global { $$ = mknode($1, $2, "global");}
       | GlobeDeclaration Global   { $$ = mknode($1, $2, "global_dec");}
       | Main					   {$$ = $1;}
       ;
GlobeDeclaration : Type VarList SEMICOLON { $$ = mknode($1, $2, ",");}
	    	      | Type GlobeAssignExpr  { $$ = mknode($1, $2, "global");// free2($1);
                  } //free
                  ;
GlobeAssignExpr : Identifier EQUAL Extra SEMICOLON { $$ = mknode($1, $3, "="); };
FunctionDefinition : FunctionName OB CB SEMICOLON              {$$ = $1; }
		            | FunctionName OB ParamsType CB SEMICOLON  {$$ = mknode($3, $1, "func");}
                    ;
FunctionName : Type Identifier     {$$ = mknode($1, $2, "func");};
ParamsType : ParamsType COMMA Type {$$ = mknode($1, $3, " ");}
	        | Type			       {$$ = $1;}
            ;
Stmt : Declaration
       | AssignExpr     {$$ = $1;}
       | SelectionStmt 	{$$ = $1;}
       | JumpStmt			{$$ = $1;}
       | FunctionCall 	{$$ = $1;}
       | CompoundStmt 	{$$ = $1;}
     | Declaration Stmt		{$$ = mknode($1, $2, "");}
     | AssignExpr Stmt		{$$ = mknode($1, $2, "");}
     | SelectionStmt Stmt	{$$ = mknode($1, $2, "");}
     | JumpStmt	Stmt		{$$ = mknode($1, $2, "");}
     | FunctionCall Stmt	{$$ = mknode($1, $2, "");}
     | CompoundStmt Stmt	{$$ = mknode($1, $2, "");}
     | Iterative Stmt       {$$ = mknode($1, $2, "");}
     | error SEMICOLON	{yyerrok; yyclearin; printf("missing ';'\n");}
     ;
Iterative :   WHILE OB cond CB CompoundStmt {$$ = mknode($3, $5,"while" );}
            |DO CompoundStmt  WHILE OB cond CB  SEMICOLON{$$ = mknode($2, $5,"do-while" );};
Function : FunctionName OB CB CompoundStmt Function             {$$ = mknode($1, $4, "func");}
	 | FunctionName OB FunctionParams CB CompoundStmt Function  {$$ = mknode($1, $5, "func");}
	 |		{$$ = mknode(0, 0, "");}
	 ;
FunctionParams : FunctionParams COMMA Type Identifier {$2 = mknode($3, $4, "");
                                                       $$ = mknode($2, $1, "");}
	       | Type Identifier			               {$$ = mknode($1, $2, "");
                                                      }
	       ;
Declaration :Type Identifier {$$ = mknode($1, $2, "");}
            | Type VarList SEMICOLON { $$ = mknode($1, $2, ""); }
	        | Type AssignExpr	     { $$ = mknode($1, $2, "");}
	    ;
FunctionCall : Call OB VarList CB SEMICOLON { $$ = mknode($1, $3, "call"); //free2($1);
                }
	     ;
Call : ID 	   { $$ = mknode(0, 0, name); }
		;
AssignExpr : Identifier EQUAL Extra COMMA AssignExpr  { $$ = mknode($1, $3, "=");}
	   	| Identifier EQUAL Extra SEMICOLON            { $$ = mknode($1, $3, "=");}
	  	;
SelectionStmt : IF OB cond CB CompoundStmt %prec IFX         { $$ = mknode($3, $5, "IF");}
	          | IF OB cond CB CompoundStmt ELSE CompoundStmt { $1=mknode($3,$5,"if"); $$=mknode($1,$7,"else");}
	          ;
cond : Expr		    { $$ = $1; }
     | Expr logOp E	{ $$ = mknode($1, $3, $2->token); free2($2);
     }
     ;
Expr : relExp { $$ = $1 ;}
     | logExp { $$ = $1 ;}
     ;
logOp : BINARYAND {$$ = mknode(0, 0, "&&");}
      | BINARYOR  {$$ = mknode(0, 0, "||");}
relExp : Extra LT E { $$ = mknode($1, $3, "<");}
       | Extra GT E { $$ = mknode($1, $3, ">");}
       | Extra LTE E{ $$ = mknode($1, $3, "<=");}
       | Extra GTE E{ $$ = mknode($1, $3, ">=");}
       | Extra NE E { $$ = mknode($1, $3, "!=");}
       | Extra EQ E { $$ = mknode($1, $3, "=");}
       ;
logExp : Extra BINARYOR E { $$ = mknode($1, $3, "&&");}
       | Extra BINARYAND E { $$ = mknode($1, $3, "||");}
       ;
Extra : E {$$ = $1;}
      ;
Type : INT 	{ $$ = mknode(0, 0, "int");}
     | VOID	{ $$ = mknode(0, 0, "void");}
     | CHAR { $$ = mknode(0, 0, "char");}
     ;
VarList : VarList COMMA Call  {$$ = mknode($1, $3, "");}
	| Identifier	          {$$ = $1;}
	;
E : E ADD T { $$ = mknode($1, $3, "+");}
  | E SUB T	{ $$ = mknode($1, $3, "-");}
  | T		{ $$ = $1;}
  ;
T : T MUL F	{$$ = mknode($1, $3, "*");}
  | T DIV F	{$$ = mknode($1, $3, "/");}
  | F		{$$ = $1;}
  ;
F : ID 		{$$ = mknode(0, 0, yytext);}
  | NUM		{$$ = mknode(0, 0, yytext);}
  | OB E CB	{ $$ = $2;}
  ;
JumpStmt : CONT SEMICOLON   {$$ = mknode(0, 0, "continue");}
	 | BRK SEMICOLON 	    {$$ = mknode(0, 0, "break");}
	 | RTRN Extra SEMICOLON {$$ = mknode(0, 0, "return");}

%%

char depth[ 12056 ];
int di=0;


void Push( char c )
{
    depth[ di++ ] = ' ';
    depth[ di++ ] = c;
    depth[ di++ ] = ' ';
    depth[ di++ ] = ' ';
    depth[ di ] = 0;
}

void Pop( )
{
    depth[ di -= 4 ] = 0;
}

void Print( node* tree )
{
    if(tree==NULL)
    {
        printf("null\n");
	    return ;
	}
    //if()
    printf( "(%s)\n", tree->token );

    if ( tree->left )
    {
        printf( "%s |__", depth );
        Push( '|' );
        Print( tree->left );
        Pop( );
    }
 	if(tree->right)
    {
        printf( "%s |__", depth );
        Push( ' ' );
        Print( tree->right );
        Pop( );
    }
}




int main (void) {
	yyin = fopen("out.c", "r");
	if(!yyparse())
		;
	else
		printf("Invalid");
	fclose(yyin);
    printf("\nInorder traversal \n");
    printtree(root);
    printf("\n\n");
    Print(root);
	return 0;
}


node *mknode(node *left, node *right, char *token)
{ /* malloc the node */
	//printf("inside function\n");
	//printf("%s\n",token);
    node *newnode = (node *)malloc(sizeof(node));
    char *newstr = (char *)malloc(strlen(token)+1);
    strcpy(newstr, token);
    newnode->left = left;
    newnode->right = right;
    newnode->token = newstr;
    return(newnode);
}


void free2(node *tree){
	if(tree==NULL)
	    return;
	if(tree->left)
	    free2(tree->left);
	if(tree->right)
	    free2(tree->right);
	free(tree->token);
	free(tree);
}



void printtree(node *tree)
{
 int i;
 if((strcmp(tree->token,"")==0) && (tree->left ==NULL) && (tree->right==NULL))
    return;
else
{
    if (tree->left || tree->right)
        printf("(");
    if (tree->left)
        printtree(tree->left);
    printf(" %s ", tree->token);
    if (tree->right)
        printtree(tree->right);
    if (tree->left || tree->right)
    printf(")");
}

}


int yyerror (char *s) {fprintf (stderr, "%s\n",  s);}