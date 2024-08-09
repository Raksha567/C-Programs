#include<stdio.h>
#include<conio.h>
void main(){
	int a,sec,min,hours;
	printf("Enter integer in seconds");
	scanf("%d",&a);
	hours=a/3600;
	a=a%3600;
	min=a/60;
	a=a%60;
	sec=a;
	printf("Result is %d hours %d min %d sec",hours,min,sec);
}
