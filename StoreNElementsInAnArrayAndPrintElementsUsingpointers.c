#include<stdio.h>
void main(){
	int n,i;
	printf("Size of an Array:");
	scanf("%d",&n);
	int a[n],*ptr;
	ptr=&a[0];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",*ptr);
		ptr++;
	}
	
}
