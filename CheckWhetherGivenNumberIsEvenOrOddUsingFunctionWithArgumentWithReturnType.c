#include<stdio.h>
void EvenOrOdd(int x){
	int result;
	if(x%2==0){
		printf("Even");
	}
	else if(x%2!=0){
		printf("Odd");
	}
	
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	EvenOrOdd(num);
	
	}
