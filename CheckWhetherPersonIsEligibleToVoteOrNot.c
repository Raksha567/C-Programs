#include<stdio.h>
void main(){
	int age;
	printf("Enter age of person:");
	scanf("%d",&age);
	if(age>=18){
		printf("Eligible to vote.");
	}
	else{
		printf("Can not Vote.");
	}
}
