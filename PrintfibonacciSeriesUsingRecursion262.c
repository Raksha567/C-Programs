#include<stdio.h>
void fibonacci(int a,int b,int n,int count){
	int static c;
	if(count>=n){
		return;
	}
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
	fibonacci(a,b,n,count+1);
}
void main(){
	int a=-1,b=1,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	
	fibonacci(-1,1,n,0);
}
