#include <stdio.h>
int main()
{
    int department;
    int section;
    
    printf("Select your department\n");
    printf("Enter 1 for Computer Science\n");
    printf("Enter 2 for Information Technology\n");
    printf("Enter 3 for Artificial Intelligence\n");
    scanf("%d", &department);

    switch(department)
    {
        case 1:
            printf("Choose a section\n");
            printf("Enter 1 for Section A\n");
            printf("Enter 2 for Section B\n");
            scanf("%d", &section);

            printf("Department: Computer Science\n");
            switch(section)
            {
                case 1:
                    printf("Section: A");
                    break;
                case 2:
                    printf("Section: B");
                    break;
                default:
                    printf("Invalid Input for Section");
                    break;
            }
            break;
        case 2:
            printf("Choose a section\n");
            printf("Enter 1 for Section A\n");
            printf("Enter 2 for Section B\n");
            scanf("%d", &section);

            printf("Department: Information Technology\n");
            switch(section)
            {
                case 1:
                    printf("Section: A");
                    break;
                case 2:
                    printf("Section: B");
                    break;
                default:    
                    printf("Invalid Input for Section");
                    break;
            }
            break;        
        case 3:
            printf("Choose a section\n");
            printf("Enter 1 for Section A\n");
            printf("Enter 2 for Section B\n");
            scanf("%d", &section);

            printf("Department: Artificial Intelligence\n");
            switch(section)
            {
                case 1:
                    printf("Section: A");
                    break;
                case 2:
                    printf("Section: B");
                    break;
                default:    
                    printf("Invalid Input for Section");
                    break;
            }
            break;
        default:
            printf("Invalid Input for Department");
            break;
    }
}