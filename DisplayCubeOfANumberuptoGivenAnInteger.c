#include<stdio.h>
void main(){
	int i,n;
	printf("Enter an Integer:");
	scanf("%d",&n);
	printf("cube of a number upto %d integer\n",n);
	for(i=1;i<=n;i++){
		printf("Number:%d Cube: %d\n",i,i*i);
	}
}
