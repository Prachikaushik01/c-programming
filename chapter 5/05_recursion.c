#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0 ){
        return 1;
    }
    // Factorial(5) = 1 * 2 * 3* 4* 5
    // Factorial(4) = 1*2*3*4
    // Factorial(n) = 1*2*3*4*5*6*.........* n - 1*n
    // Factorial(n) =  Factorial(n - 1)*n

    return factorial(n - 1) * n;
}
int main(){
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}
