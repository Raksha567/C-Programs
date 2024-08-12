#include<stdio.h>
void main(){
	int n1,n2;
	printf("enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	if((n1>=40&&n1<=50)||n2>=40&&n2<=50||((n1>=40&&n1<=50)&&(n2>=40&&n2<=50))){
		printf("True");
	}
	else{
		printf("False");
	}
}
