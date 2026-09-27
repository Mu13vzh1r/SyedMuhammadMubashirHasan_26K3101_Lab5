#include <stdio.h>
int main(){
    int appointment, doctorAvailable, registrationCompleted;

    printf("Respond with 1, meaning Yes, or 0, meaning No.\n");
    printf("Do you have an appointment?\n");
    scanf("%d", &appointment);
    printf("Is the doctor available?\n");
    scanf("%d", &doctorAvailable);
    printf("Is the registration completed?\n");
    scanf("%d", &registrationCompleted);

    if (appointment == 1){
        if (doctorAvailable == 1){
            if (registrationCompleted == 1)
                printf("You can meet the doctor.");
            else
                printf("You cannot meet the doctor.");
        }    
        else
            printf("You cannot meet the doctor.");
    }    
    else
        printf("You cannot meet the doctor.");
        
    
}