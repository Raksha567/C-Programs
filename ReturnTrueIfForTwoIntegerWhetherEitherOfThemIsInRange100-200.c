#include<stdio.h>
void main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second Number:");
	scanf("%d",&b);
	if(a>=100&&a<=200||b>=100&&b<=200){
		printf("True");
	}
	else{
		printf("False");
	}
}
