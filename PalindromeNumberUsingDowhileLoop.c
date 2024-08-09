#include<stdio.h>
void main(){
	int i,num,r,rev=0;
	printf("Enter any number:");
	scanf("%d",&num);
	int n=num;
	do{
		r=num%10;
		rev=10*rev+r;
		num=num/10;
	}while(num>0);
	printf("Reverse number is %d\n",rev);
	if(rev==n){
		printf("It is a palindrome");
	}
	else{
		printf("not a palindrome");
	}
}
