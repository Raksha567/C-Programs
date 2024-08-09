#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter first Number:");
	scanf("%d",&n1);
	printf("Enter second Number:");
	scanf("%d",&n2);
	if(n1==30||n2==30||n1+n2==30){
		printf("true");
	}
	else{
		printf("false");
	}
}
