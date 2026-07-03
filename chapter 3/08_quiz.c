#include <stdio.h>

int main(){
    char grade;
    int marks = 92;
    if(marks<=100 && marks>=90){
        grade = 'A';
    }
    else if(marks<=90 && marks>=80){
        grade = 'B';
    }
    else if(marks<=80 && marks>=70){
        grade = 'C';
    }
    else if(marks<=70 && marks>=60){
        grade = 'D';
    }
    else if(marks<=60 && marks>=50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }
    printf("The grade is %c", grade);
    return 0;
}
