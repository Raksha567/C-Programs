#include<stdio.h>
void printArray(int *arr,int index,int size){
	if(index>=size)
	return;
		printf("%d ",arr[index]);
	printArray(arr,index+1,size);
	
}
void main(){
	int arr[]={4,9,6,3,7},index=0,size;
	size=sizeof(arr)/sizeof(arr[0]);
	printf("Entered array is:");
	printArray(arr,0,size);
}

