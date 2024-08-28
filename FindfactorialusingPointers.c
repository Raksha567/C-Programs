#include<stdio.h>
void main(){
	int n,i,f=1,*p;
	printf("Enter a number");
	scanf("%d",&n);
	p=&f;
	for(i=1;i<=n;i++){
		*p=(*p)*i;
	}
	printf("Factorial of a %d is %d",n,*p);
}
