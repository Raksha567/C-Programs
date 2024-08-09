#include<stdio.h>
#include<conio.h>
void main(){
	float a,b,c,avg;
	printf("Enter Three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average Of three numbers is %f",avg);
	getch();
}
