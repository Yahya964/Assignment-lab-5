#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
     if (age >= 0 && age<= 105) 
     {  
        if (age >= 30)
        {
            printf("Adult\n");
        } else 
        {
            if (age >= 20) 
            {
                printf("Senior\n");
            } else 
            {
                if (age >= 14) 
                {
                    printf("Teenager\n");
                } else 
                {
                    printf("Child\n");
                }
            }
        }
    } else {
        printf("Invalid age\n");
    }
    return 0;
}