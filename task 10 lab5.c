#include <stdio.h>

int main() 
{
    int a, sum;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (a >= 10) 
	{
        sum = 0;
        while (a > 0) 
	{
            a = a/10;
	    sum = sum+(a % 10);      
        }
        a = sum; 
    }

    printf("The sum is: %d\n", a);
    return 0;
}
