#include<stdio.h>
void main(){
	int a[2][2],T[2][2],i,j;
	printf("Enter elements of Matrix:");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		scanf("%d",&a[i][j]);
	}
}
printf("Entered matrix is:\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
printf("Transpose of matrix:\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		T[i][j]=a[j][i];
		printf("%d ",T[i][j]);
	}
	printf("\n");
}
}
