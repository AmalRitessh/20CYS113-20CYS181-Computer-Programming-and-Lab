#include <stdio.h>
int main()
{
	int n,k=0;
	printf("Enter n to sum of numbers: ");
       	scanf("%d",&n);
	for ( int i = 0; i <= n; i++)
	{
		k=k+i;

	}
	printf("The sum of %d numbers is %d \n",n,k);
}
