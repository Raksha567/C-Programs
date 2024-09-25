#include<stdio.h>
void main(){
	int r1,c1,r2,c2,i,j,k;
	int A[10][10],B[10][10],C[10][10];
	printf("Enter r1 and c1 for A:");
	scanf("%d%d",&r1,&c1);
	printf("Enter r2 and c2 for B:");
	scanf("%d%d",&r2,&c2);
	if(r1==c2){
		printf("Enter elements of matrix A:");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&A[i][j]);
			}
		}
		printf("enter elements of matrix B:");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&B[i][j]);
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				C[i][j]=0;
				for(k=0;k<c1;k++){
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Multiplication not possible");
	}
}
