#include<stdio.h>
void main(){
	int a=-1;int b=1;int i; int n;int c;
	printf("enter range:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
