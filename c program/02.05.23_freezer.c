#include <stdio.h>
int main(){
	int time;
	double temp;
	printf("Enter the time to elapsed in hours: ");
	scanf("%d",&time);
	temp = ((double)(4*time*time)/(double)(time+2))-20;
	printf("the temp is %lf at %d hour",temp,time);
	return 0;
}