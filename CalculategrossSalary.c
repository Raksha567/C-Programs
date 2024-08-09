#include<stdio.h>
#include<conio.h>
void main(){
	float BS,DA,HRA,GS;
	printf("Enter Basic Salary:");
	scanf("%f",&BS);
	DA=(40*BS)/100;
	HRA=(20*BS)/100;
	GS=BS+DA+HRA;
	printf("Gross Salary is: %f",GS);
	getch();
	
}
