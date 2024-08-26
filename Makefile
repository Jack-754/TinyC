test = ass3_22CS30063_22CS30066_test.c
output = test.out
main_c_file = ass3_22CS30066_22CS30063.c
lex_file = ass3_22CS30063_22CS30066.l
log = output.txt


run: $(output)
	./$(output) < $(test) | tee $(log)

$(output): lex.yy.c $(main_c_file)
	gcc -o $(output) $(main_c_file)  -lfl

lex.yy.c: 
	flex $(lex_file)

clean:
	rm -f lex.yy.c $(output) $(log)
