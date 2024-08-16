#include<stdio.h>
void main(){
	int i;
	float a[10];
	float avg,sum=0;
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++){
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/10;
	printf("Sum Of 10 numbers is %f\n",sum);
	printf("average of 10 numbers is %f",avg);
}
