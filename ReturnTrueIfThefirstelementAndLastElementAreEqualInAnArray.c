#include<stdio.h>
void main(){
	int n,i;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	if(a[0]==a[n-1]){
		printf("True ,The value of first element and last element is same");
	}
	else{
		printf("False,The first element and last element are not same");
	}
}
