#include<stdio.h>
void main(){
	int a,b,diff,sum;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	if(a==5||b==5||diff==5||diff==-5||sum==5){
		printf("true");
	}
	else{
		printf("False");
	}
}
