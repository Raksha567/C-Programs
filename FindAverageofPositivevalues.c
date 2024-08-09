#include<stdio.h>
void main(){
	int i,a[5];
	float avg,count=0,sum=0;
	printf("enter values:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		if(a[i]>0){
			count++;
			sum=sum+a[i];
		}
	}
	avg=sum/count;
	printf("average of positive values is %f",avg);
	
}
