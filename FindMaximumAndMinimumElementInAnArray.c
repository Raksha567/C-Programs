#include<stdio.h>
void main(){
	int a[]={1,2,3,4,9,7,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i,min,max;
	min=max=a[0];
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Minimum Element of an Array is %d\n",min);
	printf("Maximum element of an Array is %d",max);
}
