#include<stdio.h>
void main(){
	int num1,num2,*ptr1,*ptr2,sum;
	ptr1=&num1,ptr2=&num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum=*ptr1+*ptr2;
	printf("Sum of two numbers using pointers is %d",sum);
}
