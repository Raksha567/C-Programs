#include<stdio.h>
void main(){
	int a[5],i,*p;
	printf("Enter elements of an array:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Reversed array is :");
	for(p=a+4;p>=a;p--){
		printf("%d ",*p);
	}
}
