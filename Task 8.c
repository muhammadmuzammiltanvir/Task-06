#include <stdio.h>

int is_prime(int n) 
{
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) 
	{
        if (n % i == 0) return 0; 
    }
    return 1; 
}

void fibonacci_series(int limit) 
{
    int a = 0, b = 1;
    printf("Fibonacci series up to %d: ", limit);
    while (a <= limit) 
	{
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() 
{
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_prime(number)) 
	{
        printf("%d is a prime number.\n", number);
    } else 
	{
        printf("%d is not a prime number.\n", number);
    }
    fibonacci_series(number);
    
	return 0;
}