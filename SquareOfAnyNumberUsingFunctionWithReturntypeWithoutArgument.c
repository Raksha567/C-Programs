#include<stdio.h>
int square(){
	int num,result;
	printf("Enter a number");
	scanf("%d",&num);
	result=num*num;
	return(result);
}
void main(){
	int r;
	r=square();
	printf("Square of a number is %d",r);
}

