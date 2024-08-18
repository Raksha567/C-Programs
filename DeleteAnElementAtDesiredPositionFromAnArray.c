#include<stdio.h>
void main(){
	int a[100],n,pos,i;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter position where new value have to inserted:");
	scanf("%d",&pos);

	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
		
	}
	
	n--;
	
	printf("Modified array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
