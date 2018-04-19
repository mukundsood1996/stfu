yacc -d Compiler.y
lex Compiler.l
gcc -g y.tab.c lex.yy.c -ll
echo "Lex and Yacc files compiled successfully. Use ./a.out < filename to test"
