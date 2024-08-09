#include<stdio.h>
void main(){
	float num1,num2;
	float result;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(num2==0){
		printf("Divison is not possible");
	}
	else{
		result=num1/num2;
		printf("Result is %f",result);
	}
}
