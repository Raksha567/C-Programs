#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("The first %d square are:",n);
	for(i=1;i<=n;i++){
		int square=i*i;
		printf("%d ",square);
		sum=sum+square;
	}
	printf("\nSum Of first %d square natural numbers are %d ",n,sum);
}
