#include<stdio.h>
void main(){
	int temp1,temp2;
	printf("Enter temp1:");
	scanf("%d",&temp1);
	printf("Enter temp2:");
	scanf("%d",&temp2);
	if(temp1<0&&temp2>100){
		printf("true");
	}
	else{
		printf("False");
	}
}
