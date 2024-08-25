all:
	lex ass3_22CS30063_22CS30066.l
	gcc ass3_22CS30063_22CS30066.c -ll
	./a.out < ass3_22CS30063_22CS30066_test.c

clean:
	rm -f lex.yy.c 
	rm -f a.out
