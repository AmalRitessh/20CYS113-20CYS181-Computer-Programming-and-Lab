#include <stdio.h>
int main()
{
	int number;
	printf("Enter number to check: ");
	scanf("%d",&number);
	if (number % 2 == 0)
	{
		printf("it is an even number \n");
	}	
	else
	{
		printf("it is an odd number \n");
	}
	return 0;
}
