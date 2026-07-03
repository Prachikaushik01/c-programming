#include <stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    //will increase by 4 bytes

    char b = 'A';
    char *pointer = &b;
    printf("The address of b is %u\n", &b);
    printf("The address of b is %u\n", pointer);
    pointer++;
    printf("The value of ptr is %u\n", pointer);

return 0;
}
