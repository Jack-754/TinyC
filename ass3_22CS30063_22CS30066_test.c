/*
Test File for Ass-3 Compilers LAB
Group -------
22CS30063 More Aayush Babasaheb
22CS30066 Devanshu Agrawal

This test file Checks for:-
 1. Multi Line Comments (like this one)
 2. Single Line Comments
 3. Individual Identification of each Token type
 4. Run tokenizartion on a small C code as part of testing 
*/

// Individual Testing for Keyword --- Listed keyword will be identified as keyword as part of TinyC
auto enum restrict unsigned break extern return void
case float short volatile char for signed while
const goto sizeof _Bool continue if static _Complex
default inline struct _Imaginary do int switch double
long typedef else register union

// Following Test for Identifiers
variable_name
_underscore_start
mixedCase123
UPPERCASE_ID

// Test for Number Constants
123
9876543210
3.14
2.5e-3
.5
5.

// Test for Character constants
'a'
'$'
'\''
'\"'
'\?'
'\\'
'\a'
'\b'
'\f'
'\n'
'\r'
'\t'
'\v'

// Test for String literals
"This is a string literal"
"Escaped characters: \' \" \? \\ \a \b \f \n \r \t \v"
""

// Test for various punctuators
++ -- & | ^ << >> <= >= == != && ||
+ - * / % = ( ) { } [ ] ; , . ! ~ ? : #


// Short Test on a small C code
int main() {
    float pi = 3.14159;
    char c = 'X';
    char* str = "Hello, World!";
    
    if (pi > 3) {
        printf("Pi is greater than 3\n");
    }
    
    for (int i = 0; i < 10; ++i) {
        printf("%d ", i);
    }
    
    return 0;
}