#include<stdio.h>
void main(){
	int i,a[5],sum=0;
	printf("Enter Values:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			sum=sum+a[i];
		}
	}
	printf("sum of odd values is %d",sum);
}
