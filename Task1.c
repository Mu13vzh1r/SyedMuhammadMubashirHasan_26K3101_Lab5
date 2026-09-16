#include <stdio.h>
int main()
{
    int age;
    int marks;
    printf("Enter your [age] [marks]");
    scanf("%d %d", &age, &marks);

    if (age >= 18){
        if (marks >= 50)
            printf("You are elligible for admission");
        else
            printf("Your marks are too low for admission");
    }
    else
        printf("You are too young for admission");

}