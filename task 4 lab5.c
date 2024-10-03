#include <stdio.h>

int main() 
{
    int age;
    char citizen;

  
    printf("Please enter your age: ");
    scanf("%d", &age);

  
    printf("Are you a citizen? (Y/N): ");
    scanf("%c", citizen);
    
    
     if (age >= 18 && (citizen == 'y' || citizen == 'Y')) 
	{
        printf("You are eligible to vote\n");
    } 
    else if(age < 18 || (citizen == 'n' || citizen == 'N')) {
        printf("You are not eligible to vote\n");
    }
    else{
        printf("wrong information entered");
    }

    return 0;
}
