#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n],newArr[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Copy Of A Array:");
	for(i=0;i<n;i++){
		newArr[i]=a[i];
		printf("%d ",newArr[i]);
	}
	
}
