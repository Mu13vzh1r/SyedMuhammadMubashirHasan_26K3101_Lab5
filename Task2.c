#include <stdio.h>
int main()
{
    int hasCNIC;
    int passedDT;

    printf("Respond with 1 for Yes, 0 for No\n");
    printf("Do you have a CNIC?");
    scanf("%d", &hasCNIC);


    if (hasCNIC == 1)
    {
        printf("Have you passed the driving test?");
        scanf("%d", &passedDT);

        if (passedDT == 1)
            printf("License can be Issued.");
        else if (passedDT == 0)
            printf("Need to pass the driving test for the license to be issued.");
        else
            printf("ERROR! Respond only with 1 or 0");
    }
    else if (hasCNIC == 0)
        printf("Need to have a CNIC for the license to be issued.");
    else
        printf("ERROR! Respond only with 1 or 0");


}