#include<stdio.h>
int largest(int *arr,int index,int size,int max){
	
	if(index>=size){
		return;
	}
	if(max<arr[index+1]){
		max=arr[index+1];
	}
	largest(arr,index+1,size,max);
	return max;
}
void main(){
	int arr[]={1,9,5,2,1},index,size,max,r;
	size=sizeof(arr)/sizeof(arr[0]);
	max=arr[0];
	r=largest(arr,0,size,max);
	
	printf("Largest element is %d",r);
}
