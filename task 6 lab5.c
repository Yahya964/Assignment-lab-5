#include <stdio.h>

int main() 
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("The number is %s\n", (num > 0) ? "positive" : (num < 0) ? "negative" : "zero");

    return 0;
}
