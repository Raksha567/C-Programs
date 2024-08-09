#include<stdio.h>
void main(){
	int n1,n2,result;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	if(n1==n2){
		result=3*(n1+n2);
		printf("Result is %d",result);
	}
	else{
		result=n1+n2;
		printf("Result is %d",result);
	}
}
