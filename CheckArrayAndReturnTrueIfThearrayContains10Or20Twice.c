#include<stdio.h>
void main(){
	int n,i,count10=0,count20=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	if(n<0||n>2){
		printf("Invalid size ,size should be 0,1 or 2");
	}
	if(n>0&&n<=2){
		printf("enter elements:");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]==10){
				count10++;
			}
			else if(a[i]==20){
				count20++;
			}
		}
		if(count10==2||count20==2){
			printf("True");
		}
		else{
			printf("False");
		}
	}
}
