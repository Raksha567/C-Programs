#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int evenArr[n],oddArr[n];
	int evenIndex=0,oddIndex=0,i;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			evenArr[evenIndex]=arr[i];
			evenIndex++;
		}
		if(arr[i]%2!=0){
			oddArr[oddIndex]=arr[i];
			oddIndex++;
		}
	}
	printf("Even Number Array is:");
	for(i=0;i<evenIndex;i++){
		printf("%d ",evenArr[i]);
	}
	printf("\nOdd Number array is:");
	for(i=0;i<oddIndex;i++){
		printf("%d ",oddArr[i]);
	}
}
