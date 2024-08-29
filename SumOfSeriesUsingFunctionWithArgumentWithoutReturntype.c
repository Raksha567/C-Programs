#include<stdio.h>
void sum(int n){
	float result, fact;
	int i,j;
	for(j=1;j<=n;j++){
		fact=1;
	for(i=1;i<=j;i++){
		fact=fact*i;
	}
	result=result+(fact/j);
	}
	printf("Sum of the series is %f",result);
}
void main(){
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	sum(n);
}
