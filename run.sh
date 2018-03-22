yacc -d Compiler.y
lex Compiler.l
gcc -g y.tab.c lex.yy.c -ll