#include<stdio.h>
void main(){
	int i,n;
	int sum=0,term=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		term=term*10+1;
		sum=sum+term;
	}
	printf("The sum of the series upto %d term is %d",n,sum);
}
