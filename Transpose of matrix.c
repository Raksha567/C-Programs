#include<stdio.h>
void main(){
	int A[10][10],T[10][10],i,j,r,c;
	printf("Enter value of r and c:");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix A:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			T[j][i]=A[i][j];
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",T[i][j]);
		}
		printf("\n");
	}
}
