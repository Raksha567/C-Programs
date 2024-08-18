#include<stdio.h>
void main(){
	int a[]={2,1,9,5,0,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Array Sorted in descending order is:");
	for(j=0;j<n;j++){
		printf("%d ",a[j]);
	}
}
