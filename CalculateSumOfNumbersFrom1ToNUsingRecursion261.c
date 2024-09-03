#include<stdio.h>

int sum(int i,int end){
	int static result=0;
	if(i>end)
		return;
	result=result+i;
	sum(i+1,end);
	return result;
}
void main(){
	int end,r;
	printf("Enter end :");
	scanf("%d",&end);
	r=sum(1,end);
	printf("sum is %d",r);
}
