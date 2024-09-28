all:
	yacc -d yacc_specs_with_semantics.y
	flex ass3_22CS30063_22CS30066.l
	g++ ass3_22CS30063_22CS30066.l.cpp lex.yy.c y.tab.c -ll -I.

run:
	./a.out <sample.txt | tee output.txt

clean:
	rm -f y.tab.c lex.yy.c a.out output.txt y.tab.h
