#include<stdio.h>

int countDigit(int num){
	int static count=0;
	if(num<=0)
	return;
	num=num/10;
	count++;
	
	countDigit(num);
	return count;
}
void main(){
	int n,c;
	printf("Enter any number: ");
	scanf("%d",&n);
	c=countDigit(n);
	printf("Count of digits in a number is %d",c);
}
