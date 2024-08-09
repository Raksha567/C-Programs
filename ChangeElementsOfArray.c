#include<stdio.h>
void main(){
	int i,a[6];
	printf("Enter elements of array:");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	a[0]=a[5];
	a[1]=a[4];
	a[2]=a[3];
	printf("Modified array:");
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
}
