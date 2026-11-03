#include <stdio.h>
int main(){
    // check if the number is odd or even
    int number;
    char choice[10];

    do{
    printf("Enter your Number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%d is Even Number!", number);
    }else{
        printf("%d is Odd Number!", number);
    }
    printf("\nDo you want to check another number? (Yes/No)");
    scanf("%s", &choice);

    }while(st)
}
}