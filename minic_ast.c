#include <stdio.h>
#include <stdlib.h>
#include "minic_ast.h"

void printTree(Node *ptr, int indent, FILE* astFile);
void printNode(Node *pt, int indent, FILE* astFile);

char *nodeName[] = {
    "ACTUAL_PARAM", "ADD",         "ADD_ASSIGN",  "ARRAY_VAR",   "ASSIGN_OP",
    "CALL",         "COMPOUND_ST", "CONST_NODE",  "DCL",         "DCL_ITEM",
    "DCL_LIST",     "DCL_SPEC",    "DIV",         "DIV_ASSIGN",  "EQ",
    "ERROR_NODE",   "EXP_ST",      "FORMAL_PARA", "FUNC_DEF",    "FUNC_HEAD",
    "GE",           "GT",          "IDENT",       "IF_ELSE_ST",  "IF_ST",
    "INDEX",        "INT_NODE",    "LE",          "LOGICAL_AND", "LOGICAL_NOT",
    "LOGICAL_OR",   "LT",          "MOD",         "MOD_ASSIGN",  "MUL",
    "MUL_ASSIGN",   "NE",          "NUMBER",      "PARAM_DCL",   "POST_DEC",
    "POST_INC",     "PRE_DEC",     "PRE_INC",     "PROGRAM",     "RETURN_ST",
    "SIMPLE_VAR",   "STAT_LIST",   "SUB",         "SUB_ASSIGN",  "UNARY_MINUS",
    "VOID_NODE",    "WHILE_ST",    "FOR_ST",
    "SWITCH_ST",    "DEFAULT_ST",   "CASE_ST",
    "CONTINUE",  "BREAK"
};

Node* buildNode(int tokenNumber, char* tokenValue)
{
    Node *ptr;

    ptr = (Node *) malloc(sizeof(Node));

    if (!ptr) {
        printf("ERROR : memory allocation error in buildNode()\n");
        exit(1);
    }

    ptr->token.tokenNumber = tokenNumber;
    ptr->token.tokenValue = tokenValue;
    ptr->noderep = TERMINAL;
    ptr->son = ptr->next = NULL;
    return ptr;
}


Node* buildTree(int tokenNumber, Node* son)
{
    Node *ptr;

    ptr = (Node*) malloc(sizeof(Node));
    if (!ptr) {
        printf("ERROR : memory allocation error in buildTree()\n");
        exit(1);
    }

    ptr->token.tokenNumber = tokenNumber;
    ptr->token.tokenValue = NULL;
    ptr->noderep = NONTERM;
    ptr->son = son;
    ptr->next = NULL;

    return ptr;
}

void appendNext(Node* node, Node* next)
{
    Node *ptr = node;
    int i = 1;
    while (ptr->next != NULL) { // 계속 뒤쪽으로 연결해서 붙도록...
        ptr = ptr->next;
        i++;
    }
    ptr->next = next;
}

void printTree(Node *ptr, int indent, FILE* astFile)
{
    Node *p = ptr;
    while (p != NULL) {
        printNode(p, indent, astFile);
        if (p->noderep == NONTERM) printTree(p->son, indent + 1, astFile);
        
        p = p->next;
    }
}

void printNode(Node *pt, int indent, FILE* astFile)
{
    int i;
    for (i = 1; i <= indent; i++) {
        fprintf(astFile, "    ");
    }

    if (pt->noderep == TERMINAL)    {
        fprintf(astFile, "Terminal: %s\n", pt->token.tokenValue);
    } else {
        int i;
        i = (int) (pt->token.tokenNumber);
        fprintf(astFile, "Nonterminal: %s\n", nodeName[i]);
    }
}
