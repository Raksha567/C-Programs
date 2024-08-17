#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of all elements of an array is %d",sum);
}
