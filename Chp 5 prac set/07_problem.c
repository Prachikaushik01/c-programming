#include <stdio.h>

int main(){
    int n = 3;
    for(int i = 0; i < 3; i++){
        //This loops runs from 0 to 2
        // if i = 0 ... print 1 star
        // if i = 1 ... print 3 stars
        // if i = 2 ... print 5 stars
        // no_of_stars = (2*i + 1)
        for (int j=0;j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
