#include<stdio.h>
int main(){
	int hours , minutes , totalminutes;
	 
	printf("enter hours");
	scanf("%d", &hours);
	printf("enter minutes:");
	scanf("%d",&minutes);
	totalminutes = (hours * 60) + minutes;
	printf("total minutes: %d\n", totalminutes);
	return 0;
}
