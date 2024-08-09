#include<stdio.h>
void main(){
	int n,n1,n2,n3,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0&&n<500){
		n1=n%10;
		n=n/10;
		n2=n%10;
		n=n/10;
		n3=n%10;
		sum=n1+n2+n3;
		printf("Sum of digits is %d",sum);
	}
	else{
		printf("enter a number less than 500");
	}
}
