#include<stdio.h>
void square(int x){
	int result=x*x;
	printf("Square of number is %d",result);
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	square(num);
}
