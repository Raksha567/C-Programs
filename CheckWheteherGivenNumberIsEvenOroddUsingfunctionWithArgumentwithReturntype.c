#include<stdio.h>
int isEven(int x){
	if(x%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(isEven(num)){
		printf("Even");
	}
	else{
		printf("odd");
	}
}

