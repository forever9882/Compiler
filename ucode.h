#ifndef __UCODE_HEADER
#define __UCODE_HEADER

#include "minic_ast.h"

#define LABEL_SIZE           8
#define SYMTAB_ARRAY_SIZE    512
#define LABEL_MAX 256


typedef enum {
    SPEC_NONE, SPEC_VOID, SPEC_INT
} Specifier;

typedef enum {
    QUAL_NONE, QUAL_FUNC, QUAL_PARA, QUAL_CONST, QUAL_VAR
} Qualifier;

typedef enum{
    PUSH=-100, POP
} TableCommand;

typedef enum{
    BACK_CONDITION=-200, ESCAPE
} Type;

typedef struct _SymbolRow {
    char *id; // token value
    Specifier spec; //void, int, none
    Qualifier qual;
    int offset; //function name의 offset은 0, const도 0, table->offset의 초기값은 1인데, 배열 넣을 때 아마 offset 쓰는 것 같음
    int width;  //변수의 크기 or 함수의 parameter의 개수
    int base;   //block number
    int init;   //초기 값
    struct _SymbolTable *table;
} SymbolRow;

typedef struct _SymbolTable {
    char *name; //function name
    int count;  //모든 지역변수의 총 량
    int offset;
    int base; //lexical block
    SymbolRow rows[SYMTAB_ARRAY_SIZE];

} SymbolTable;

typedef struct _Label{
    char label[LABEL_SIZE];
    int type; //{ BACK_CONDITION, ESCAPE }
} Label;

<<<<<<< HEAD
=======
char* msg[9];
>>>>>>> moon
void codeGen(Node *ptr, FILE *ucoFile);

#endif