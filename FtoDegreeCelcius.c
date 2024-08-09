#include<stdio.h>
#include<conio.h>
void main(){
	int F,C;
	printf("Enter Tempreture in Ferenhite:");
	scanf("%d",&F);
	C=(5*(F-32))/9;
	printf("Tempreture in degree celcius is: %d",C);
	getch();
}
