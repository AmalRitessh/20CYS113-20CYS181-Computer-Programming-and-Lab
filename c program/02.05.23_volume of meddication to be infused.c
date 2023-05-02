#include<stdio.h>
int main(){
	double fluid,hour,rate_of_infusion;
	int min;
	printf("enter the quantity of fluid in mml: ");
	scanf("%lf",&fluid);
	printf("number of minutes it should be infused: ");
	scanf("%d",&min);
	hour = (double)min/60;
	rate_of_infusion = fluid / hour;
	printf("volume to be infused id %lf \n",fluid);
	printf("the rate of infusion is %lf per hour",rate_of_infusion);
	return 0;
}

