#include<stdio.h>
void main(){
	int n,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]==a[n-1]){
		printf("the value of first element is equal to last element.");
		
	}
	else{
		printf("False,first and last element are not equal.");
	}
}
