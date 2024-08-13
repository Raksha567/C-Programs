#include<stdio.h>
void main(){
	int n,i;
	int new_arr[2];
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	new_arr[0]=a[0];
	new_arr[1]=a[n-1];
	printf("New array is :");
	for(i=0;i<2;i++){
		printf("%d ",new_arr[i]);
	}
	
}
