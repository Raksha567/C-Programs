#include<stdio.h>
void main(){
	int x,y;
	printf("Enter Vlaue of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Value of x after swapping is %d\n",x);
	printf("value of y after swapping is %d\n",y);
}
