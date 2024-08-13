#include<stdio.h>
void main(){
	int n,new[2],i,mid1,mid2;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	if(n<0&&n%2!=0){
		printf("Invalid size");
	}
	
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mid1=n/2;
	mid2=mid1-1;
	new[0]=a[mid1];
	new[1]=a[mid2];
	printf("New Array:");
	for(i=0;i<2;i++){
		printf("%d ",new[i]);
	}
	
}
