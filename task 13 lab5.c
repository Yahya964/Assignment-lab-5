#include <stdio.h>

int main() 
{
    char actual, encrypted, decrypted;
    char key = 'F';  

    
    printf("Enter a character which u want to encrypt: ");
    scanf(" %c", &actual);

    
    encrypted = actual ^ key;  
    printf("Encrypted character: %c\n", encrypted);

   
    decrypted = encrypted ^ key;  
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}