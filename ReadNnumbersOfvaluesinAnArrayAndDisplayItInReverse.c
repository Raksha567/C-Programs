#include<stdio.h>
void main(){
	int n,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of an Array are:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nRenerse Array is:");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
