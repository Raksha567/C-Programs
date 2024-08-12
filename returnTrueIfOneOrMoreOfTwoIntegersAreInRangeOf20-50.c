#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second Number:");
	scanf("%d",&n2);
	if(n1>=20&&n1<=50||n2>=20&&n2<=50){
		printf("True");
	}
	else{
		printf("False");
	}
}
