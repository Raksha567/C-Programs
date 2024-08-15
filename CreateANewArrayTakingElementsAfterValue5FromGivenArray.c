#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=n-1;a[i]!=5;i--){
			printf("%d ",a[i]);
		
	}
}
