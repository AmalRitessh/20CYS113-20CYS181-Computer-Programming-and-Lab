#include <stdio.h>
int main()
{
	int n,l=0;
	double k,q;
	printf("enter the number: ");
	scanf("%d",&n);
	
	if (n==1){
		printf("it is neither prime nor composite \n");
	}

	else if (n<0){
		printf("enter a positive number \n");
	}

	else{

	        for(int i=1;i<=n;i++)
        	{
                	k=(double)n/(double)i;
                	q = k - (int) k;
                	if (q == 0)
                	{
                        	l=l+1;
                	}

        	}	
        	if (l==2)
        	{
                	printf("it is a prime number \n");

        	}	
        	else
        	{
                	printf("it is not a prime number \n");

        	}	
	
	}
}
