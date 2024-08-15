#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",n);
		}
		printf("\n");
	}
}
