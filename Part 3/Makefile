all:
	yacc -d tinyC3_22CS30063_22CS30066.y
	flex tinyC3_22CS30063_22CS30066.l
	g++ tinyC3_22CS30066_22CS30063_translator.cxx y.tab.c lex.yy.c -ll -w

run: 
	mkdir -p ./test-outputs ./test-tables
	./a.out  test-inputs/tinyC3_22CS30063_22CS30066_test1.c  test-outputs/tinyC3_22CS30063_22CS30066_quads1.out test-tables/tinyC3_22CS30063_22CS30066_table1.txt
	./a.out  test-inputs/tinyC3_22CS30063_22CS30066_test2.c  test-outputs/tinyC3_22CS30063_22CS30066_quads2.out test-tables/tinyC3_22CS30063_22CS30066_table2.txt
	./a.out  test-inputs/tinyC3_22CS30063_22CS30066_test3.c  test-outputs/tinyC3_22CS30063_22CS30066_quads3.out test-tables/tinyC3_22CS30063_22CS30066_table3.txt
	./a.out  test-inputs/tinyC3_22CS30063_22CS30066_test4.c  test-outputs/tinyC3_22CS30063_22CS30066_quads4.out test-tables/tinyC3_22CS30063_22CS30066_table4.txt
	./a.out  test-inputs/tinyC3_22CS30063_22CS30066_test5.c  test-outputs/tinyC3_22CS30063_22CS30066_quads5.out test-tables/tinyC3_22CS30063_22CS30066_table5.txt
	@echo "\nTest cases run successfully.\n"
	@echo "\nCheck test-outputs folder for the outputs. \nCheck test-tables for generated tables\n"

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch test-outputs/*_quads*.out test-tables/*tinyC3_22CS30063_22CS30066_table*.txt