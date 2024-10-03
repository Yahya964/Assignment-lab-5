#include <stdio.h>

int main() 
{
    int first_num, second_num;

  
    printf("Enter first number: ");
    scanf("%d", &first_num);
    printf("Enter second number: ");
    scanf("%d", &second_num);

    
    first_num = first_num ^ second_num; 
    second_num = first_num ^ second_num; 
    first_num = first_num ^ second_num; 

   
    printf("Your first number is: %d\n", first_num);
    printf("Your second number is: %d\n", second_num);

    return 0;
}
