#include<stdio.h>
void main(){
	int n1,n2,i;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	for( i=n1;i<=n2;i++){
		if(i%7==2||i%7==3){
			printf("%d\n",i);
		}
	}
}
