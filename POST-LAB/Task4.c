#include <stdio.h>
int main(){
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Respond with 1, meaning Yes, or 0, meaning No.\n");
    printf("Is the restaurant open?\n");
    scanf("%d", &restaurantOpen);
    printf("Is the item available?\n");
    scanf("%d", &itemAvailable);
    printf("Is there sufficient balance?\n");
    scanf("%d", &balanceSufficient);

    if (restaurantOpen == 1){
        if (itemAvailable == 1){
            if (balanceSufficient == 1)
                printf("Order is being prepared.");
            else
                printf("Insufficient Balance.");
        }
        else
            printf("This item is currently not available.");
    }
    else
        printf("Restaurant is closed at this time.");
}