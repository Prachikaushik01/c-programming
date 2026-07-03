#include <stdio.h>
// write a program using recursion to calculate nth element of fibonacci series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,........
// pehle do element ko chodkr 3rd element se any first two element is sum of third
//fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 1;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
return 0;
}
