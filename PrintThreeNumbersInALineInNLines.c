#include<stdio.h>
void main(){
	int n,i,j,number=1;
	printf("Enter Number of lines:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
}
