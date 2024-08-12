#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	if((n1>=20&&n1<=30)&&(n2>=20&&n2<=30)){
		if(n1>n2){
			printf("%d is greater",n1);
		}
		else{
			printf("%d is greter",n2);
		}
	}
	else{
		printf("Numbers are out of range.");
	}
}
