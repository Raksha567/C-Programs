#include<stdio.h>
void main(){
	int num1,num2,last_digit1,last_digit2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	last_digit1=num1%10;
	last_digit2=num2%10;
	if(last_digit1==last_digit2){
		printf("True Integers have same last digits");
	}
	else{
		printf("False last digits of numbers are not same");
	}
}
