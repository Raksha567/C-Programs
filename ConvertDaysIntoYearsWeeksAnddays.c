#include<stdio.h>
void main(){
	int a,days,years,weeks;
	printf("Enter days:");
	scanf("%d",&a);
	years=a/365;
	a=a%365;
	weeks=a/7;
	a=a%7;
	days=a;
	printf("%d years %d weeks %d days",years,weeks,days);
}
