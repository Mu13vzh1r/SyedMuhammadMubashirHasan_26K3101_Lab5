#include <stdio.h>
int main(){
    int operation, accountType;
    
    printf("Select an option by entering the number beside it:\n");
    printf("1. Balance Inquiry\n2. Cash Withdrawal\n3. Cash Deposit\n4. PIN Change\n");
    scanf("%d", &operation);

    switch (operation){
        case 1:
            printf("Select the account type:\n1. Savings Account\n2. Current Account\n");
            scanf("%d", &accountType);

            switch (accountType){
                case 1:
                    printf("Showing balance for savings account...");
                    break;
                case 2:
                    printf("Showing balance for current account...");
                    break;
                default:
                    printf("Incorrect Option.");
                    break;
            }
            break;

        case 2:
            printf("Select the account type:\n1. Savings Account\n2. Current Account\n");
            scanf("%d", &accountType);

            switch (accountType){
                case 1:
                    printf("Withdrawing cash from savings account...");
                    break;
                case 2:
                    printf("Withdrawing cash from current account...");
                    break;
                default:
                    printf("Incorrect Option.");
                    break;
            }
            break;

        case 3:
            printf("Select the account type:\n1. Savings Account\n2. Current Account\n");
            scanf("%d", &accountType);

            switch (accountType){
                case 1:
                    printf("Depositing cash to savings account...");
                    break;
                case 2:
                    printf("Depositing cash to current account...");
                    break;
                default:
                    printf("Incorrect Option.");
                    break;
            }
            break;

        case 4:
            printf("Select the account type:\n1. Savings Account\n2. Current Account\n");
            scanf("%d", &accountType);

            switch (accountType){
                case 1:
                    printf("Changing PIN of savings account...");
                    break;
                case 2:
                    printf("Changing PIN of current account...");
                    break;
                default:
                    printf("Incorrect Option.");
                    break;
            }
            break;

        default:
            printf("Incorrect Option.");
            break;
            
    }
}