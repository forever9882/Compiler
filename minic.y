%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "minic_ast.h"
    #include "ucode.h" 

    extern FILE *yyin;
    char* toString(char* temp);
    
    int yylex(void);
    void yyerror(const char *s);
    Node* root;
%}

%union {
    struct nodeType *nPtr;  /* node pointer */
    char* string;           /* symbol string*/
}

%token TCONST TELSE TIF TINT TRETURN TVOID TWHILE TEQ TNEQ
    TLE TGE TAND TOR TINC TDEC TADDASSIGN TSUBASSIGN TMULASSIGN
    TDIVASSIGN TMODASSIGN TFOR TCASE TSWITCH TDEFAULT TCONTINUE TBREAK

%token <string> TIDENT TNUMBER

%type <nPtr> translation_unit external_dcl function_def function_name function_header compound_st
    dcl_spec formal_param opt_dcl_list declaration_list declaration dcl_specifiers dcl_specifier
    type_specifier type_qualifier opt_formal_param formal_param_list param_dcl init_dcl_list init_declarator
    declarator opt_number opt_stat_list statement_list statement expression_st opt_expression if_st
    while_st return_st expression assignment_exp actual_param actual_param_list unary_exp postfix_exp primary_exp
    logical_or_exp logical_and_exp equality_exp relational_exp additive_exp multiplicative_exp opt_actual_param
	for_st switch_st default_st case_st label_st jump_st
    continue_st break_st


%nonassoc IFX
%nonassoc TELSE


%%
mini_c: translation_unit {
        root = buildTree(PROGRAM, $1);
    }
    ;

translation_unit: external_dcl {
        $$ = $1;
    }
    | translation_unit external_dcl {
        appendNext($1, $2);
        $$ = $1;
    }
    ;

external_dcl: function_def {
        $$ = $1;
    }
    | declaration {
        $$ = $1;
    }
    ;

function_def: function_header compound_st {
        appendNext($1, $2);
        $$ = buildTree(FUNC_DEF, $1);
    }
    ;

function_header: dcl_spec function_name formal_param {
        appendNext($1, $2);
        appendNext($2, $3);
        $$ = buildTree(FUNC_HEAD, $1);
    }
    ;

dcl_spec: dcl_specifiers {
        $$ = buildTree(DCL_SPEC, $1);
    }
    ;

dcl_specifiers: dcl_specifier {
        $$ = $1;
    }
    | dcl_specifiers dcl_specifier {
        appendNext($1, $2);
        $$ = $1;
    }
    ;

dcl_specifier: type_qualifier { $$ = $1; }
    | type_specifier { $$ = $1; }
    ;

type_qualifier: TCONST {
        $$ = buildTree(CONST_NODE, NULL);
    }
    ;

type_specifier: TINT {
        $$ = buildTree(INT_NODE, NULL);
    }
    | TVOID {
        $$ = buildTree(VOID_NODE, NULL);
    }
    ;

function_name: TIDENT { $$ = buildNode(IDENT, $1); }
    ;

formal_param: '(' opt_formal_param ')' {
        $$ = buildTree(FORMAL_PARA, $2);
    }
    ;

opt_formal_param: formal_param_list { $$ = $1; }
    | { $$ = NULL; }
    ;

formal_param_list: param_dcl {
        $$ = $1;
    }
    | formal_param_list ',' param_dcl {
        appendNext($1, $3);
        $$ = $1;
    }
    ;

param_dcl: dcl_spec declarator {
        appendNext($1, $2);
        $$ = buildTree(PARAM_DCL, $1);
    }
    ;

compound_st: '{' opt_dcl_list opt_stat_list '}' {
        appendNext($2, $3);
        $$ = buildTree(COMPOUND_ST, $2);
    }
    ;

opt_dcl_list: declaration_list {
        $$ = buildTree(DCL_LIST, $1);
    }
    | {
        $$ = buildTree(DCL_LIST, NULL);
    }
    ;

declaration_list: declaration {
        $$ = $1;
    }
    | declaration_list declaration {
        appendNext($1, $2);
        $$ = $1;
    }
    ;

declaration: dcl_spec init_dcl_list ';' {
        appendNext($1, $2);
        $$ = buildTree(DCL, $1);
    }
    ;

init_dcl_list: init_declarator {
        $$ = $1;
    }
    | init_dcl_list ',' init_declarator {
        appendNext($1, $3);
        $$ = $1;
    }
    ;

init_declarator: declarator {
        $$ = $1;
    }
    | declarator '=' TNUMBER {
        appendNext($1->son, buildNode(IDENT, $3));
        $$ = $1;
    }
    | declarator '=' '-' TNUMBER{
        appendNext($1->son, buildTree(UNARY_MINUS,buildNode(IDENT, $4)));
        $$ = $1;
    }
    ;

declarator: TIDENT {
        Node* ptr = buildTree(SIMPLE_VAR, buildNode(IDENT, $1));
        $$ = buildTree(DCL_ITEM, ptr);
    }
    | TIDENT '[' opt_number ']' {
        Node* ptr = buildNode(IDENT, $1);
        appendNext(ptr, $3);
        $$ = buildTree(DCL_ITEM, buildTree(ARRAY_VAR, ptr));
    }
    ;

opt_number: TNUMBER {
        $$ = buildNode(NUMBER, $1);
    }
    | {
        $$ = NULL;
    }
    ;

opt_stat_list: statement_list {
        $$ = buildTree(STAT_LIST, $1);
    }
    | { $$ = NULL; }
    ;

statement_list: statement {
        $$ = $1;
    }
    | statement_list statement {
        appendNext($1, $2);
        $$ = $1;
    }
    ;

statement: compound_st { $$ = $1; }
    | expression_st { $$ = $1; }
    | if_st { $$ = $1; }
    | while_st { $$ = $1; }
    | return_st { $$ = $1; }
    | for_st { $$ = $1; }
    | switch_st { $$ = $1; }
    | label_st { $$ = $1; }
    | jump_st { $$ = $1; }
	 ;

expression_st: opt_expression ';' {
        $$ = buildTree(EXP_ST, $1);
    }
    ;

opt_expression: expression { $$ = $1; }
    | { $$ = NULL; }
    ;

if_st: TIF '(' expression ')' statement %prec IFX {
        appendNext($3, $5);
        $$ = buildTree(IF_ST, $3);
    }
    | TIF '(' expression ')' statement TELSE statement {
        appendNext($3, $5);
        appendNext($5, $7);
        $$ = buildTree(IF_ELSE_ST, $3);
    }
    ;

while_st: TWHILE '(' expression ')' statement {
        appendNext($3, $5);
        $$ = buildTree(WHILE_ST, $3);
    }
    ;

return_st: TRETURN opt_expression ';' {
        $$ = buildTree(RETURN_ST, $2);
    }
    ;

expression: assignment_exp { $$ = $1; }
    ;

assignment_exp: logical_or_exp { $$ = $1; }
    | unary_exp '=' assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(ASSIGN_OP, $1);
    }
    | unary_exp TADDASSIGN assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(ADD_ASSIGN, $1);
    }
    | unary_exp TSUBASSIGN assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(SUB_ASSIGN, $1);
    }
    | unary_exp TMULASSIGN assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(MUL_ASSIGN, $1);
    }
    | unary_exp TDIVASSIGN assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(DIV_ASSIGN, $1);
    }
    | unary_exp TMODASSIGN assignment_exp {
        appendNext($1, $3);
        $$ = buildTree(MOD_ASSIGN, $1);
    }
    ;

logical_or_exp: logical_and_exp { $$ = $1; }
    | logical_or_exp TOR logical_and_exp {
        appendNext($1, $3);
        $$ = buildTree(LOGICAL_OR, $1);
    }
    ;

logical_and_exp: equality_exp { $$ = $1; }
    | logical_and_exp TAND equality_exp {
        appendNext($1, $3);
        $$ = buildTree(LOGICAL_AND, $1);
    }
    ;

equality_exp: relational_exp { $$ = $1; }
    | equality_exp TEQ relational_exp {
        appendNext($1, $3);
        $$ = buildTree(EQ, $1);
    }
    | equality_exp TNEQ relational_exp {
        appendNext($1, $3);
        $$ = buildTree(NE, $1);
    }
    ;

relational_exp: additive_exp { $$ = $1; }
    | relational_exp '>' additive_exp {
        appendNext($1, $3);
        $$ = buildTree(GT, $1);
    }
    | relational_exp '<' additive_exp {
        appendNext($1, $3);
        $$ = buildTree(LT, $1);
    }
    | relational_exp TGE additive_exp {
        appendNext($1, $3);
        $$ = buildTree(GE, $1);
    }
    | relational_exp TLE additive_exp {
        appendNext($1, $3);
        $$ = buildTree(LE, $1);
    }
    ;

additive_exp: multiplicative_exp { $$ = $1; }
    | additive_exp '+' multiplicative_exp {
        appendNext($1, $3);
        $$ = buildTree(ADD, $1);
    }
    | additive_exp '-' multiplicative_exp {
        appendNext($1, $3);
        $$ = buildTree(SUB, $1);
    }
    ;

multiplicative_exp: unary_exp { $$ = $1; }
    | multiplicative_exp '*' unary_exp {
        appendNext($1, $3);
        $$ = buildTree(MUL, $1);
    }
    | multiplicative_exp '/' unary_exp {
        appendNext($1, $3);
        $$ = buildTree(DIV, $1);
    }
    | multiplicative_exp '%' unary_exp {
        appendNext($1, $3);
        $$ = buildTree(MOD, $1);
    }
    ;

unary_exp: postfix_exp { $$ = $1; }
    | '-' unary_exp {
        $$ = buildTree(UNARY_MINUS, $2);
    }
    | '!' unary_exp {
        $$ = buildTree(LOGICAL_NOT, $2);
    }
    | TINC unary_exp {
        $$ = buildTree(PRE_INC, $2);
    }
    | TDEC unary_exp {
        $$ = buildTree(PRE_DEC, $2);
    }
    ;

postfix_exp: primary_exp { $$ = $1; }
    | postfix_exp '[' expression ']' {
        appendNext($1, $3);
        $$ = buildTree(INDEX, $1);
    }
    | postfix_exp '(' opt_actual_param ')' {
        appendNext($1, $3);
        $$ = buildTree(CALL, $1);
    }
    | postfix_exp TINC {
        $$ = buildTree(POST_INC, $1);
    }
    | postfix_exp TDEC {
        $$ = buildTree(POST_DEC, $1);
    }
    ;

opt_actual_param: actual_param { $$ = $1; }
    | { $$ = NULL; }
    ;

actual_param: actual_param_list {
        $$ = buildTree(ACTUAL_PARAM, $1);
    }
    ;

actual_param_list: assignment_exp {
        $$ = $1;
    }
    | actual_param_list ',' assignment_exp {
        appendNext($1, $3);
        $$ = $1;
    }
    ;

primary_exp: TIDENT {
        $$ = buildNode(IDENT, $1);
    }
    | TNUMBER {
        $$ = buildNode(NUMBER, $1);
    }
    | '(' expression ')' { 
        $$ = $2;
    }
    ;

for_st: TFOR '(' expression_st expression_st opt_expression ')' statement {
	appendNext($3,$4);
	appendNext($4,$5);
	appendNext($5,$7);
	$$ = buildTree(FOR_ST,$3);
	}
	;

switch_st: TSWITCH '(' expression ')' statement {
    appendNext($3,$5);
    $$=buildTree(SWITCH_ST,$3);
    }
    ;

default_st: TDEFAULT ':' statement {
        $$ = buildTree(DEFAULT_ST,$3);
    }
    ;

case_st: TCASE logical_or_exp ':' statement {
        appendNext($2,$4);
        $$ = buildTree(CASE_ST,$2);
    }
    ;

label_st: default_st | case_st ;

jump_st: continue_st | break_st;

continue_st: TCONTINUE ';' {
        $$ = buildTree(CONTINUE, NULL);
    }
    ;

break_st: TBREAK ';' {
        $$ = buildTree(BREAK, NULL);
    }
    ;

%%

char* toString(char* string)
{
    char* str;
    str = (char*)malloc(strlen(string)); 
    strcpy(str, string);
    return str;
}

void yyerror(const char *s) {
	fprintf(stdout, "%s\n", s);
}

Node* parse(FILE *fd_mc)
{
    yyin = fd_mc;
    do{
        yyparse();
    } while(!feof(yyin));

    return root;
}

int main(int argc, char *argv[]){
    FILE * fd_mc, *fd_ast, *fd_uco;
    Node *root;

    if (argc != 2) {
        printf("[Usage] ./Comp minic_file.mc\n");
        return -1;
    }

    fd_mc=fopen(argv[1],"r");
    if(!fd_mc){
        printf(".mc file not open.\n");
        exit(1);
    }
   
    fd_ast=fopen(strcat(strtok(argv[1],"."),".ast"),"w");
    fd_uco=fopen(strcat(strtok(argv[1],"."),".uco"),"w");
 
    printf("Start Parsing. \n");
    root=parse(fd_mc);
    printf("Start Making AST file.\n");
    printTree(root,0,fd_ast);
    fclose(fd_mc); fclose(fd_ast);
	printf("END. Please Check %s.ast file. \n",strtok(argv[1],"."));
    printf("Start Code Generate. \n");
    codeGen(root, fd_uco);
    fclose(fd_uco);
    printf("END. Please Check %s.uco file.\n",strtok(argv[1],"."));
    
    return 0;
}


