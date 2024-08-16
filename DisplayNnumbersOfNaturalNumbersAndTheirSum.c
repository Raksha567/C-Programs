#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Natural numbers Are:\n");
	for(i=1;i<=n;i++){
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\n");
	printf("Sum of natural numbers is %d",sum);
}
