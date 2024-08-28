#include<stdio.h>
void EvenOrOdd(){
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even");
	}
	else {
		printf("Odd");
	}
}
void main()	{
	EvenOrOdd();
}	


