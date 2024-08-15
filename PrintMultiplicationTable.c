#include<stdio.h>
void main(){
	int n,i,result;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Multiplication Table of %d Is:\n",n);
	for(i=1;i<=10;i++){
		result=n*i;
		printf("%d\n",result);
	}
}
