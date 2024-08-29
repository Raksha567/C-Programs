#include<stdio.h>
void swap(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("After swapping first number is %d and second Number is %d",x,y);
}
void main(){
	int num1,num2;
	printf("Enter first and second number:");
	scanf("%d%d",&num1,&num2);
	printf("Before Swapping first number:%d and  second number:%d\n",num1,num2);
	swap(num1,num2);
}
