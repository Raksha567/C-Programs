#include<stdio.h>
void main(){
	int i,a[7];
	printf("Enter values:");
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	
	}
	printf("Transformed Array:");
	for(i=0;i<7;i++){
		if(i>0){
			a[i]=a[i-1]*3;
		}
		printf("%d ",a[i]);
	}
}
