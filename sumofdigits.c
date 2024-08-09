#include<stdio.h>
void main(){
	int n;int r;int s=0;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("Sum of digits is %d",s);
}
