#include <stdio.h>
//Array allows a single variable to store multiple values

int main(){
    int marks[5];
// we can go all the way till marks[4]
    
printf("Enter marks of 5 students\n");
//scanf("%d", &marks[0]);
//scanf("%d", &marks[1]);
//scanf("%d", &marks[2]);
//scanf("%d", &marks[3]);
//scanf("%d", &marks[4]);
//we can do these by using loop
for (int i = 0; i<5; i++){
    scanf("%d", &marks[i]);
}
for (int i = 0; i<5; i++){
    printf("The value of marks at index %d is %d\n", i, marks[i]);
}

return 0;
}
