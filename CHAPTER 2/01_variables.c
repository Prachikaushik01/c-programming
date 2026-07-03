#include <stdio.h>

int main(){
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    // %d is called format specifier
    // %d is for int, %f is for float, %c is for char
    printf("The value of i is %d and value of j is %d\n", i, j );
    printf("The value of a is %d and value of b is %d\n", a, b );
    printf("The value of c is %d and value of d is %d\n", c, d );
    //Invalid: 'a' is used before declaration 
    // float b = a+3;
    // float a = 1.1;
return 0;
}
