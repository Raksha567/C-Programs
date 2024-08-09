#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter three angles:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180){
		printf("Triangle");
	}
	else{
		printf("Not a triangle");
	}
}
