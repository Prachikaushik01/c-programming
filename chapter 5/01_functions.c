#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y)
{
    //printf("The sum is %d\n", x + y);
    return x + y;
}
int main(){
    int a = 1;
    int b = 8;

    // int c = a + b;
    // printf("The sum is %d\n", c); ab itna karnen ki jarurat nhi h kyukin humne functtion generate karliya h ab hume usse use karege
    int c = sum( a,b ); //function call
    printf("%d\n", c);

    int a1 = 78;
    int b1 = 98;
    sum( a1,b1 );

    int a2 = 89;
    int b2 = 165;
    sum( a2,b2 );

    return 0;
}

