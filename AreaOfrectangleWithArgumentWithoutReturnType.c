#include<stdio.h>
void area(int x,int y){
	int result;
	result=2*(x+y);
	printf("Area of rectangle is %d",result);
}
void main(){
	int l,b;
	printf("Enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	area(l,b);
}

