#include<stdio.h>
void main(){
	int num1,num2;
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1%num2==0){
		printf("%d is multiple of %d",num1,num2);
	}
	else if(num2%num1==0){
		printf("%d is multiple of %d",num2,num1);
	}
	else{
		printf("neither multiple of other");
	}
}
