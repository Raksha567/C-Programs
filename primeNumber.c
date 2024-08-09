#include<stdio.h>
void main()
{
	int i;int n;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("it is not prime");
			break;
		}
		
		}
		if(n==i){
			printf("it is prime");
	}
}
