#include<stdio.h>
void isPrime(int x){
	int i,prime=1;
	if(x<=1){
		printf("not prime");
	}
	else if(x>1){
		for(i=2;i<x;i++){
			if(x%i==0){
				prime=0;
			}
		}
		if(prime==1){
		printf("Prime number");
	}
	else{
		printf("Not Prime");
	}
	
	}
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	isPrime(num);
}
