#include<stdio.h>
void main(){
	int a[5],*p,i,j,temp;
	printf("Enter elements of an array:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("Sorted array in ascending order is:\n");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
}
