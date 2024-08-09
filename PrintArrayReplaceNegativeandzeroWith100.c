#include<stdio.h>
void main(){
	int a[7],i;
	printf("Enter values:");
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
		if(a[i]<=0){
			a[i]=100;
		}
	}
	for(i=0;i<7;i++){
		printf("%d ",a[i]);
	}
	
}
