#include <stdio.h>

int main() 
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (num % 3 == 0 && num % 5 == 0) 
       {
        printf("Number divisible by both 3 and 5\n");
    } else
      {
        printf("Number not divisible by both 3 and 5\n");
    }

    return 0;
}
