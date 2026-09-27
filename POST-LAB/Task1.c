#include <stdio.h>
int main(){
    float temperature;
    
    printf("Enter the temperature in celcius: ");
    scanf("%f", &temperature);

    if (temperature < 15)
        printf("Cold");
    else if (temperature > 30)
        printf("Hot");
    else
        printf("Normal");
    
}