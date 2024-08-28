#include<stdio.h>
void sum(int x,int y){
	int result;
	result=x+y;
	printf("Sum of two number is %d",result);
}
void main(){
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
}
