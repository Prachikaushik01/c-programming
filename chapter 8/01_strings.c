#include <stdio.h>

int main(){
    //char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; //jab hum double quotes use karte h strings ko banane ke liye to null char apne aap aajata h ie same as up
    for(int i = 0; i<3; i++)
    {
    printf("First character is %c\n", st[i]);
    }

return 0;
}
