#include<stdio.h>
int factorial(int num,int i){
	int static fact=1;
	if(i>num){
		return;
	}
	fact=fact*i;
	factorial(num,i+1);
	return fact;
}
void main(){
	int n,i=1,r;
	printf("Enter number:");
	scanf("%d",&n);
	r=	factorial(n,1);
	printf("%d",r);
}
