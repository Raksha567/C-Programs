#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	int temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	printf("Modified array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
