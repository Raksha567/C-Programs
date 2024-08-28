#include<stdio.h>
void main(){
	int a[5],i,sum=0,*p;
	printf("Enter elements of an array:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<5;i++){
		sum=sum+*p;
		p++;
	}
	printf("Sum of all elements of an array is %d",sum);
	
}
