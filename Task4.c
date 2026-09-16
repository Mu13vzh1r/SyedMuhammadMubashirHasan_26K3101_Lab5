#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    (marks >= 50) ? printf("Pass") : printf("Fail");
}