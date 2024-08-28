#include<stdio.h>
int area(){
	int l,b,result;
	printf("Enter length and Breadth of rectangle:");
	scanf("%d%d",&l,&b);
	result=2*(l+b);
	return (result);
}
void main(){
	int r;
	r=area();
	printf("area of rectangle is %d",r);
}
