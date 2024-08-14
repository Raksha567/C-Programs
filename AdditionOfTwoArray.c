#include<stdio.h>
void main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter elements of first Matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("First matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of second Matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Second matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of Matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
