#!bin/sh
echo "Inputs :\n"
cat input.c
echo ""
echo "--------------------"
lex comments.l
gcc lex.yy.c -ll -w -o COMMENTS
./COMMENTS
echo "After comments are removed:"
echo ""
cat out.c
lex lex.l
yacc -dy -v symtab.y
gcc lex.yy.c y.tab.c -ll -ly -w -o SYMTABLE
./SYMTABLE
lex lex_icg.l
yacc -dy -v icg.y
gcc lex.yy.c y.tab.c -ll -ly -w -o ICG
./ICG
echo ""
lex lex_opt.l
yacc -dy -v opt.y
gcc lex.yy.c y.tab.c -ll -ly -w -o OPT
./OPT
lex ast.l
yacc -dy -v ast_fin.y
gcc lex.yy.c y.tab.c -ll -ly -w -o AST
echo ""
echo "--------------------"
./AST

