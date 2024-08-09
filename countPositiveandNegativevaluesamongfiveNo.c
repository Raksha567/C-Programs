#include<stdio.h>
void main(){
	int a[5],i;
	int count_positive=0;
	int count_negative=0;
	printf("Enter values:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]>0){
			count_positive++;
		}
		else if(a[i]<0){
			count_negative++;
		}
	}
	printf("Number of positive values is %d\n",count_positive);
	printf("Number of negative values is %d",count_negative);
}
