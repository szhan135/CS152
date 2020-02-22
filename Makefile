# Makefile

parser: miniL.lex mini_1.y
		bison -v -d --file-prefix=y mini_1.y
		flex miniL.lex
		gcc -o parser y.tab.c lex.yy.c -lfl

test1: parser 
		cat test.min | parser
test2: parser
		cat test2.min | parser

clean:
	rm -f *.o *~ lex.c lex.yy.c bison.c mini_1.tab.c mini_1.tab.h y.output mini_1
