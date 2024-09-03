#include<stdio.h>
#include<string.h>
void reverse(char *arr,int index){

	if(index<0){
		return;
	}
		printf("%c",arr[index]);
	
	reverse(arr,index-1);
}
void main(){
	char arr[]={"Hello"};
	int length=strlen(arr),index=length-1;
	reverse(arr,index);
}
