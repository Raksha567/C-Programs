#include<stdio.h>
void area(){
	int l,b,result;
	printf("Enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	result=l*b;
	printf("Area of rectangle is %d",result);
}
void main(){
	area();
}
