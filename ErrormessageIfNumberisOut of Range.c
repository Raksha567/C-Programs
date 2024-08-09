#include<stdio.h>
void main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<0||a>80){
		printf("Integer is out of range");
	}
	else if(a>=0&&a<=80){
		printf("Integer is in range of 0-80");
	}
}
