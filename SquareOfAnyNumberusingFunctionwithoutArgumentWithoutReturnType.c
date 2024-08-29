#include<stdio.h>
void square(){
	int num,result;
	printf("Enter any number:");
	scanf("%d",&num);
	result=num*num;
	printf("Square of a number is %d",result);
}
void main(){
	square();
}
