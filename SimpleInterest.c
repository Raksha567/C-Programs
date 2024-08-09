#include<stdio.h>
#include<conio.h>
void main(){
	int p,r,t;
	float SI;
	printf("Enter principle,rate and time:");
	scanf("%d%d%d",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("Simple Interest is %f",SI);
	getch();
}
