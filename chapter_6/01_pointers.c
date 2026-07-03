#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i
    printf("The address of i is %u\n", &i);
    printf("The address of i is %p\n", j);
    printf("The value at address j is %d\n", *j);
    printf("The value at address i is %d\n", *&i);
return 0;
}
