all:
	bison -d minic.y
	flex -t minic.l > minic.c
	gcc -o test_code/Compiler minic.c minic.tab.c minic_ast.c ucode.c