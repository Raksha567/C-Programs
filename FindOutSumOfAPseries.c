#include<stdio.h>
void main(){
	int a,n,d;
	int sum;
	printf("Entr value of a:");
	scanf("%d",&a);
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of d:");
	scanf("%d",&d);
	sum=(n*(2*a+(n-1)*d))/2;
	printf("Sum of first %d terms of the A.P. Series is %d ",n,sum);
}
