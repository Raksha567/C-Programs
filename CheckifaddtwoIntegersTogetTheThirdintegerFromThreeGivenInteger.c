#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b==c||b+c==a||c+a==b){
		printf("True");
	}
	else{
		printf("False");
	}
}
