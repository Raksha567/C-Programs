#include<stdio.h>
void main(){
	int i,square,cube;
	printf("Number\tSquare\tCube\n");
	for(i=0;i<=20;i++){
		square=i*i;
		cube=i*i*i;
		printf("%d\t%d\t%d\n",i,square,cube);
	}
}
