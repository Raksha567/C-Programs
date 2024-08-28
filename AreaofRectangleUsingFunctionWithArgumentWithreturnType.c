#include<stdio.h>
int area(int x,int y){
	int result;
	result=2*(x+y);
	return(result);
}
void main(){
	int l,b;
	printf("Enter length and breadth of Rectangle:");
	scanf("%d%d",&l,&b);
	int r;
	r=area(l,b);
	printf("Area of rectangle is %d",r);
}
