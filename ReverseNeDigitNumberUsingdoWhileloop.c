#include<stdio.h>
void main(){
	int num,i,r,rev=0;
	printf("Enter any number");
	scanf("%d",&num);
	do{
		r=num%10;
		rev=10*rev+r;
		num=num/10;
	}while(num>0);
	printf("Reverse number is %d",rev);
}
