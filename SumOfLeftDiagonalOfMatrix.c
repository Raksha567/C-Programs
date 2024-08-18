#include<stdio.h>
void main(){
	int a[3][3];
	int i,j,sum=0;
	printf("enter elements of an array");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==2){
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of left diagonal matrix is %d",sum);
	
}
