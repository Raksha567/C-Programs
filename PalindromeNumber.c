#include<stdio.h>
void main(){
	int num,i,r,rev=0;
	
	printf("Enter any number:");
	scanf("%d",&num);
	int n=num;
	while(num>0){
		
		r=num%10;
		rev=10*rev+r;
		num=num/10;
	}
	printf("%d\n",rev);
	if(n==rev){
		printf("Number is palindrome.");
	
	}
	else{
		printf("Not palindrome");
	}
	
}
