#include<stdio.h>
void main(){
	int a,hours,min,sec;
	printf("Enter Seconds:");
	scanf("%d",&a);
	hours=a/3600;
	a=a%3600;
	min=a/60;
	a=a%60;
	sec=a;
	printf("%d hours %d min %d sec",hours,min,sec);
}
