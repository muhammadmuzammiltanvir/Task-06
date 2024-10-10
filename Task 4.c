#include <stdio.h>
int main() 
	{
    int num, originalNum, sum = 0, m, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) 
	{
        originalNum /= 10;
        digits++;
    }

    originalNum = num; 

    while (originalNum > 0) 
	{
        m = originalNum % 10;
        sum += pow(m, digits); 
        originalNum /= 10; 
    }

    if (sum == num) 
	{
        printf("%d is an Armstrong number.\n", num);
    } else 
	{
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}