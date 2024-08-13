#include<stdio.h>
void main(){
	int a[4];
	int rotated_a[4];
	int i;
	printf("Enter elements of an Original array");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	rotated_a[0]=a[1];
	rotated_a[1]=a[2];
	rotated_a[2]=a[3];
	rotated_a[3]=a[0];
	printf("Rotated array:");
	for(i=0;i<4;i++){
		printf("%d ",rotated_a[i]);
	}
}
