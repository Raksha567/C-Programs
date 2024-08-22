#include<stdio.h>
void main(){
	int num1,num2,*ptr1,*ptr2;
	ptr1=&num1,ptr2=&num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	if(*ptr1>*ptr2){
		printf("First number is greater.");
	}
	else if(*ptr1<*ptr2){
	printf("Second number is greater.");
	}
	else{
		printf("Both numbers are equal.");
	}
}
