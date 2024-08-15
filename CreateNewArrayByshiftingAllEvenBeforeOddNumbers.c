#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int i,j=0;
	int newArr[n];
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			newArr[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			newArr[j]=a[i];
			j++;
		}
	}
	printf("New Array is:");
	for(j=0;j<n;j++){
		printf("%d ",newArr[j]);
	}
	
}
