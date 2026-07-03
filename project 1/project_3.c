#include <stdio.h>

int main(){
    int amount;
    int choice;
    int balance = 1000;

// we will use switch here as we want to execuet 1 case at a time
// ques mei bola h loop tab tak chale jabtak user exit na kare iske liye humee while loop ka istemaal karna hoga

do{
    printf("1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Exit\n");

    printf("Enter Your Choice\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Your Balance = %d\n", balance);
        break;
        case 2:
        printf("Enter Your Amount:\n");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("New Balance = %d\n", balance);
        break;
        case 3:
        printf("Enter Your Amount:\n");
        scanf("%d", &amount);
        if(amount <= balance){
            balance = balance - amount;
            printf("New Balance = %d\n", balance);
        }

        else{
            printf("Insufficient Balance");
        }
        break;
        case 4:
        printf("THANKYOU FOR USING ATM");
        break;
    }

    } while (choice != 4);

    return 0;

}



