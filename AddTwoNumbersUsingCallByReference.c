#include<stdio.h>
void sum(int *p,int *q){
	printf("Result is %d",*p+*q);
}
void main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum(&a,&b);
	
	
}
