#include<stdio.h>
void swap(){
	int num1,num2,temp;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("Enter second number");
	scanf("%d",&num2);
	printf("Before Swapping first number is %d and Second number is %d\n",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping first number is %d and second number is %d",num1,num2);
}
void main(){
	swap();
}
