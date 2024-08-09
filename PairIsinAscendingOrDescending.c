#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("Descending order");
	}
	else if(num1<num2){
		printf("Ascending Order");
	}
	else{
		printf("Both are equal");
	}
}
