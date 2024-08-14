#include<stdio.h>
void main(){
	int n,first,last,mid,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	if(n<1||n%2==0){
		printf("Invalid size enter odd size.");
	}
	else if(n%2!=0){
		printf("Enter elements of an array:");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		first=a[0];
		last=a[n-1];
		mid=n/2;
		if(first>last&&first>mid){
			printf("First element is greater.");
		}
		else if(last>first&&last>mid){
			printf("Last element is greater.");
		}
		else{
			printf("Mid element is gretaer.");
		}
	}
}
