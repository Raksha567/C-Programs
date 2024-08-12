#include<stdio.h>
void main(){
	int n1,n2,n3;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	printf("Enter third number:");
	scanf("%d",&n3);
	if(n1>=20&&n1<=50||n2>=20&&n2<=50||n3>=20&&n3<=50){
		printf("True");
	}
	else{
		printf("False");
	}
}
