#include<stdio.h>
int main()
{
	float lit;
	float cost=1.50, totalCost, bill;
	
	while(1)
	{
	printf("Enter the litres of petrol or (type '0' to stop): ");
	scanf("%f", &lit);
	if(lit==0)
	printf("Thank you for purchasing.");
	break;
	}
	
	totalCost=cost*lit;
	bill=totalCost;
	
	printf("BILL\n");
	printf("Liters purchased: %.2f liters\n", lit);
	printf("Price per liter: $%.2f\n", cost);
	printf("Total cost: $%.2f\n", bill);
    return 0;
}