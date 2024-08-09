#include<stdio.h>
void main(){
	float p,r,t,SI;
	printf("Enter Principle Amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter days:");
	scanf("%f",&t);
	SI=(p*r*t)/(365*100);
	printf("Simple interest is %f",SI);
	
}
