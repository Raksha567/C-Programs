#include<stdio.h>
int isEven(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	if(isEven()){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
