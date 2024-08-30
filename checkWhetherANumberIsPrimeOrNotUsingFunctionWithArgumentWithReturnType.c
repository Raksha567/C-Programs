#include<stdio.h>
int isPrime(int x){
	int i;
	if(x<=1){
		return 0;
	}
	else if(x>1){
		for(i=2;i<x;i++){
			if(x%i==0){
				return 0;
			}
		}
	}
	else{
		return 1;
	}
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(isPrime(num)){
		printf("Prime");
	}
	else{
		printf("Not prime");
	}
}
