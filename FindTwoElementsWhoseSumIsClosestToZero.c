#include<stdio.h>
void main(){
	int a[]={1,60,-10,70,-80,85};
	int n=sizeof(a)/sizeof(a[0]);
	int min_sum=a[0]+a[1];
	int min_i=0;
	int min_j=0;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			int sum=a[i]+a[j];
			if(sum<0){
				sum=-1*sum;
			}
			if(sum<min_sum){
				min_sum=sum;
				min_i=i;
				min_j=j;
			}
		}
	}
	printf("The two Element whose sum is closest to zero are %d and %d",a[min_i],a[min_j]);
}
