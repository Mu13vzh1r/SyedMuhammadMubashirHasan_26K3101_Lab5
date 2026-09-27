#include <stdio.h>
int main(){
    int balance;
    
    printf("Enter your remaining balance: ");
    scanf("%d", &balance);

    if (balance < 500)
        printf("Low Balance");
    else if (balance > 2000)
        printf("Premium Balance");
    else   
        printf("Sufficient Balance");

}