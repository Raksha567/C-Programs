#include<stdio.h>
void main(){
	int n,i;
	printf("Size of an Element:");
	scanf("%d",&n);
	int a[n],*ptr;
	
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",*&a[i]);
	}
	
}
