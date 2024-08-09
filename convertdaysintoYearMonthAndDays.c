#include<stdio.h>
void main(){
	int a,years,months,days;
	printf("Enter days:");
	scanf("%d",&a);
	years=a/365;
	a=a%365;
	months=a/30;
	a=a%30;
	days=a;
	printf("%d years %d months %d days",years,months,days);
}
