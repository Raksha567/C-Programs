#include<stdio.h>
void main(){
	int a[3],b[3],i,sum1=0,sum2=0;
	printf("Enter elements of first array:");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	printf("enter elements of second array:");
	for(i=0;i<3;i++){
		scanf("%d",&b[i]);
		sum2=sum2+b[i];
	}
	if(sum1>sum2){
		printf("Array1 has largest sum.");
	}
	else if(sum1<sum2){
		printf("Array2 has largest sum");
	}
	else{
		printf("Array1 and array2 has equal sum");
	}
}
