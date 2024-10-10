#include<stdio.h>
int main()
{
	int num, revNum=0, rem;
	printf("Enter a number: ");
	scanf("%d", &num);
	do
	{
		rem=num%10;
		revNum=revNum*10+rem;
		num=num/10;
	} 
	while(num!=0);
	printf("Reversed number is: %d\n", revNum);
	return 0;
}