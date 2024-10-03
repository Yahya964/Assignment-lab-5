
#include <stdio.h>

int main() 
{
    int num_1, num_2, num_3;
    
	printf("Enter first number: ");
	scanf("%d", &num_1);
	printf("Enter second number: ");
	scanf("%d", &num_2);
	printf("Enter third number: ");
	scanf("%d", &num_3);
        if (num_1 >= num_2) 
	{
        	if (num_1 >= num_3) 
		{
            	printf("Greatest number is: %d\n", num_1);
        } else 
	{
            printf("Greatest number is: %d\n", num_3);
        }
    } else if (num_2 >= num_3)
	{
            printf("Greatest number is: %d\n", num_2);
        } else {
            printf("Greatest number is: %d\n", num_3);
        }
    

    return 0;
}

