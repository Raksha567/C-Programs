#include<stdio.h>
void main(){
	int i;
	int sum=0;
	 int a[5];
	printf("Enter values:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		
		}
		for(i=0;i<5;i++){
			if(a[i]%2!=0){
			sum=sum+a[i];
		}
	}
	printf("Sum of odd values is %d",sum);
	
}
