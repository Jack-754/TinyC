/*
    Multi line Comment
    Group-
    More Aayush Babasaheb 22CS30063
    Devanshu Agrawal 22CS30066

*/

inline void my_custom_function(int arg1, int arg2) { // Functional Specifier test
    // storage class specifier test
    auto int v1;
    register int v2;
    extern int v3;
    static int v4;
}

void example_function(int a, float b) {
    int result = a + (int)b;
}

// typescecifier and global statements test
void g1;
char g2;
short g3;
int g4;
long g5;
float g6;
double g7;
signed g8;
unsigned g9;
_Bool g10;
_Complex g11;
_Imaginary g12;

int main(){

    // expressions testing
    int a = 5, b = 10, c;
    c = a;
    int d = 20;
    const char *str = "Hello";
    c = a + b;
    int arr[3] = {1, 2, 3};
    int index = 1;
    c = arr[index];
    c = a++;
    c = b--;
    c = ++a;
    c = --b;
    c = +a;
    c = -b;
    c = ~a;
    c = !b;
    int size = sizeof(a);
    float f = 10.5;
    int i = (int) f;
    c = a * b;
    c = a / 2;
    c = a % 3;
    c = a + b;
    c = a - b;
    c = a << 1;
    c = b >> 1;
    c = a < b;
    c = a > b;
    c = a <= b;
    c = a >= b;
    c = a == b;
    c = a != b;
    c = a & b;
    c = a ^ b;
    c = a | b;
    c = a && b;
    c = a || b;
    c = (a > b) ? a : b;

    // declaration testing

    static int d;
    extern int e;
    register int f;
    volatile int g;

    unsigned int h = 30;
    signed int i;
    long j = 40;
    short k;

    float l = 3.14;
    double m;
    _Bool n = 1;

    int arr[5];
    int *ptr;
    ptr = &a;
    arr[0] = *ptr;

    int multi[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *multi_ptr = &multi[0][0];

    const int x = 100;
    restrict int *restrict_ptr = &a;
    volatile int vol_var = 200;

    student.id = 1;
    student.name[0] = 'A';

    int (*func_ptr)(int, float);
    int **ptr_to_ptr;
    ptr_to_ptr = &ptr;

    // statements

    if (x > 0) {
        x++;
    } else {
        x--;
    }

    switch (x) {
        case 0:
            x = 10;
            break;
        default:
            x = -1;
            break;
    }

    while (x < 5) {
        x++;
    }

    for (int i = 0; i < 10; i++) {
        x += i;
    }

    do {
        x--;
    } while (x > 0);

    goto label;
    label: x = 100;

    continue;
    break;

    return;

    // testing external definitions
    int x = 5;
    float y = 3.2;

    example_function(x, y);

    return 0;
}