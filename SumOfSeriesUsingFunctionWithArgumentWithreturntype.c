#include<stdio.h>
float sum(int n){
	float result, fact;
	int i,j;
	for(j=1;j<=n;j++){
		fact=1;
	for(i=1;i<=j;i++){
		fact=fact*i;
	}
	result=result+(fact/j);
	}
	return(result);
}
void main(){
	int n;float r;
	printf("Enter value of n:");
	scanf("%d",&n);
	r=sum(n);
	printf("Sum of the series is %f",r);
}
