#include<stdio.h>
int sum(int x,int y){
	int result;
	result=x+y;
	return(result);
}
void main(){
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	int r;
	r=	sum(num1,num2);
	printf("Addition is %d",r);
	
}
