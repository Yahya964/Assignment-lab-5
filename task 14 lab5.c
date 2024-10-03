#include <stdio.h>

int main() 
{
    int age;
    float income;
    int credit_score;  

   
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%f", &income);
    printf("Enter your credit score: ");
    scanf("%d", &credit_score);
    
    if (age >= 18 && income >= 75000 && credit_score >= 2000) 
	{
        printf("You are eligible for the loan\n");
    } 
    else {
        printf("You are not eligible for the loan\n");
	
           if (age < 18) 
	   {
           printf("Your age is less than 18\n");
        }else if (income < 75000) 
	{
            printf("Your income is less than $75,000\n");
        }else if (credit_score < 2000)      
	{
            printf("Your credit score is less than 2000\n");
        }
    }

    return 0;
}