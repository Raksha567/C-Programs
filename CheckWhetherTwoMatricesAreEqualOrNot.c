#include<stdio.h>
void main(){
	int a[3][3],b[3][3],i,j;
	int equal=1;
	printf("Enter elements of First array:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("First Matrix is:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of second matrix:");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Second Matrix is:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]!=b[i][j]){
				equal=0;
			}
		
		}
	}
	if(equal=1){
		printf("Both Matrices are equal.");
	}
	else{
		printf("Matrices are not equal.");
	}
}
