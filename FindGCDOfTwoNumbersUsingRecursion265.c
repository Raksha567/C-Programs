#include<stdio.h>
int gcd(int a,int b,int i){
	int static result;
	if(i<=1){
		return;
	}
	if(a%i==0&&b%i==0){
		result=i;
		return;
	}
	gcd(a,b,i-1);
	return result;
}
void main(){
	int a,b,i,r;
	printf("Enter value no of a and b:");
	scanf("%d%d",&a,&b);
	i=a>b?a:b;
	r=gcd(a,b,i);
	printf("GCD of two numbers is %d",r);
}
