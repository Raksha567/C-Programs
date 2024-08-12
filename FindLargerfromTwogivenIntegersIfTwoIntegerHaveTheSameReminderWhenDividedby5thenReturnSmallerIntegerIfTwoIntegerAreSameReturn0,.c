#include<stdio.h>
void main(){
	int a,b,result;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a==b){
	result=0;
	printf("Result is %d",result);
	}
	else if(a%5==b%5){
	result=	(a<b)?a:b;
	printf("Result is %d",result);
		
	}
	else {
		result=(a>b)?a:b;
		printf("Result is %d",result);
	}
}
