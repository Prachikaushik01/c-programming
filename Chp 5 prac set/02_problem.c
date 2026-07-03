#include <stdio.h>

float c2f(float c);

float c2f(float c){
    return (9.0*c)/5.0 + 32;
}

int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %f", c, c2f(c));
return 0;
}
