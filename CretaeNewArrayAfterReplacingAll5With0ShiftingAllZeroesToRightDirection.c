#include<stdio.h>
void main(){
	int a[]={1,5,2,5,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int i,j=0;
	int newArr[n];
	printf("Modified Array:");
	for(i=0;i<n;i++){
		if(a[i]==5){
			a[i]=0;
		}
		printf("%d ",a[i]);
	}
    printf("\n");
	for(i=0;i<n;i++){
		if(a[i]!=0){
			newArr[j]=a[i];
			j++;
		}
	}

	for(i=0;i<n;i++){
		if(a[i]==0){
			newArr[j]=a[i];
			j++;
		}
	}
	printf("New Array In Which All Zeroes Shifted Right Direction:");
	for(j=0;j<n;j++){
		printf("%d ",newArr[j]);
	}
	
}
