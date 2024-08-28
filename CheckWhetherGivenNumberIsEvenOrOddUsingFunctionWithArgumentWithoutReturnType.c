#include<stdio.h>
void EvenOrOdd(int x){
	if(x%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
	
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	EvenOrOdd(num);
	
	}
