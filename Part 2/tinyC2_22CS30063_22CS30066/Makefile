y_file := tinyC2_22CS30063_22CS30066.y 
c_file := tinyC2_22CS30066_22CS30063.cpp 
l_file := tinyC2_22CS30063_22CS30066.l 
o_file := output_22CS30063_22CS30066.txt
i_file := input_22CS30063_22CS30066.cpp

aall:
	yacc -d $(y_file)
	flex $(l_file)
	g++ $(c_file) lex.yy.c y.tab.c -ll -I. -w

run:
	./a.out < $(i_file) > $(o_file)

clean:
	rm -f y.tab.c lex.yy.c a.out $(o_file) y.tab.h
