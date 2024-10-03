#include <stdio.h>

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if (number>0)
    {
        if(number%2==0)
        {
            printf("Positive and Even number");
        }
        else{
            printf("Positive and Odd number");
        }}else if (number<0)
        {
            printf("Negative number");
        }else
        {
            printf("Number is zero");
        }
    

    return 0;
}