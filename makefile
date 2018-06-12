all:
	bison -d minic.y
	flex -t minic.l > minic.c
	gcc -o ./Test/Compiler minic.c minic.tab.c minic_ast.c ucode.c