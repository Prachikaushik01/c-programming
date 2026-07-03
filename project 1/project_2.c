#include <stdio.h>

int main(){
    int password;
    int secret = 1234;
    int attempts = 0;

    do{
        printf("Enter your password:");
        scanf("%d", &password);

        if(password == secret)
        {
            printf("ACCESS GRANTED");
            break;
        }
        
    
            attempts++;
        
        if(attempts<3){
            printf("ACCESS DENIED\n");
        }
        
    } while(attempts < 3);

    if(attempts == 3 && secret != password){
        printf("You did too many attempts");
    }

    return 0;
}
