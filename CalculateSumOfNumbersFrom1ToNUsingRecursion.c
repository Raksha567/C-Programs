#include<stdio.h>
int result=0;
void sum(int i,int end){
	if(i>end)
		return;
	result=result+i;
	sum(i+1,end);
}
void main(){
	int end;
	printf("Enter end :");
	scanf("%d",&end);
	sum(1,end);
	printf("sum is %d",result);
}
