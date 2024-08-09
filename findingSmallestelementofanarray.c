#include<stdio.h>
void main(){
	int i,a[6],min=a[0],min_position=0;
	printf("enter elements:");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		if(a[i]<min){
			min=a[i];
			min_position=i;
		}
	}
	printf("Smallest element is %d and smallest position is %d",a[i],i);
}
