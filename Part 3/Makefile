all:
	yacc -d tinyC3_22CS30063_22CS30066.y
	flex tinyC3_22CS30063_22CS30066.l
	g++ tinyC3_22CS30063_22CS30066_tanslator.cxx y.tab.c lex.yy.c -ll

run: 
	mkdir -p ./test-outputs
	@echo "\ntest-inputs contains the test cases.\n"
	@echo "\nRunning test cases...\n"
	./a.out < test-inputs/tinyC3_22CS30063_22CS30066_test1.c > test-outputs/tinyC3_22CS30063_22CS30066_quads1.out
	@sleep 0.2
	./a.out < test-inputs/tinyC3_22CS30063_22CS30066_test2.c > test-outputs/tinyC3_22CS30063_22CS30066_quads1.out
	@sleep 0.2
	./a.out < test-inputs/tinyC3_22CS30063_22CS30066_test3.c > test-outputs/tinyC3_22CS30063_22CS30066_quads1.out
	@sleep 0.2
	./a.out < test-inputs/tinyC3_22CS30063_22CS30066_test4.c > test-outputs/tinyC3_22CS30063_22CS30066_quads1.out
	@sleep 0.2
	./a.out < test-inputs/tinyC3_22CS30063_22CS30066_test5.c > test-outputs/tinyC3_22CS30063_22CS30066_quads1.out
	@sleep 0.2

	@echo "\nTest cases run successfully.\n"
	@echo "\nCheck test-outputs folder for the outputs.\n"

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch test-outputs/*_quads*.out