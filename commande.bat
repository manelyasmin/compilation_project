flex lexical.l
bison -d syntxq.y
gcc lex.yy.c syntxq.tab.c -lfl -ly -o compil