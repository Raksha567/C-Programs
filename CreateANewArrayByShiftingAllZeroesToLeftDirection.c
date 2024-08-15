#include<stdio.h>
void main(){
	int a[]={1,0,2,0,3,4,0,5};
	int n=sizeof(a)/sizeof(a[0]);
	int j=0;
	int i;
	int newArr[n];
	for(i=0;i<n;i++){
		if(a[i]==0){
			newArr[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]!=0){
			newArr[j]=a[i];
			j++;
		}
	}
	printf("Modified array:");
	for(j=0;j<n;j++){
		printf("%d ",newArr[j]);
	}
}
