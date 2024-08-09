#include<stdio.h>
void main(){
	int a[4],min=a[0],max=a[0],diff,i;
	printf("enter values:");
	for( i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
		
	}
	printf("maximum value is %d\n",max);
	printf("minimum value is %d\n",min);
	diff=max-min;
	printf("Diffrence between max and min value is %d ",diff);
}
