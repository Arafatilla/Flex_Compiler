flex lexicale_easy_code.l
bison -d syntaxique_easy_code.y
gcc lex.yy.c syntax.tab.c -lfl -ly -o compiler
compiler.exe<incomp_type.txt