#include<stdio.h>
void main(){
	int a[]={1,2,5,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	printf("New array is:");
	for(i=0;a[i]!=5;i++){
	printf("%d ",a[i]);
	}
}
