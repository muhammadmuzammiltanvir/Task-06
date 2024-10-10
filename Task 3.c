#include <stdio.h>

int main() 
{  
    int userPin, attempts = 0; 

    while (attempts < 3) 
    {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &userPin);             

        {
        	if (userPin >= 1000 && userPin <= 9999) 
            {
                printf("Access granted.\n");
                return 0;  
            } 
            else 
            {
                attempts++;           
                printf("Incorrect PIN. You have %d attempt(s) left.\n", 3 - attempts);
            }
        } 
       
    }

    printf("Account locked due to too many incorrect attempts.\n");
    return 0;
}