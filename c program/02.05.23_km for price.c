#include<stdio.h>
int main(){
	int km_begning,km_end,v_price=50,km,val;
	printf("enter begning km: ");
	scanf("%d",&km_begning);
	printf("enter end km: ");
	scanf("%d",&km_end);

	if (km_end < km_begning){	
		printf("invalid input");
	}
	else{
		km = km_end - km_begning;
		val = km * v_price;
		printf("the total reward for %d km is %d Rs",km,val);
	}
	return 0;
}
				
		 
	