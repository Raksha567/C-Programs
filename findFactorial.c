#include<stdio.h>
void main(){
	int i,fact=1,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of %d is %d:\n",n,fact);
	
}
