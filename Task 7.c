#include<stdio.h>
int main()
{
	int i,num;
	double fac=1;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } 	else 
	{
        for(i=1; i<=num; i++) 
		{
            fac=fac*i; 
        }
	printf("Factorial of %d = %llu\n",num,fac);
    }
	return 0;
}