#include<stdio.h>
void main(){
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	if(num>0){
		if(num%13==0||num%13==1){
			printf("true");
		}
		else{
			printf("False");
		}
	}
	else{
		printf("enter positive value");
	}
}
