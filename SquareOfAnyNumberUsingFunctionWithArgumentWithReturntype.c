#include<stdio.h>
int square(int x){
	int result=x*x;
	return result;
}
void main(){
	int num,r;
	printf("Enter any number:");
	scanf("%d",&num);
	r=square(num);
	printf("Square of number is %d",r);
}
