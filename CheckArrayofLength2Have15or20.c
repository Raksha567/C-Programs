#include<stdio.h>
void main(){
	int a[2],i;
	printf("Enter array elements");
	for(i=0;i<2;i++){
		scanf("%d",&a[i]);
		if(a[i]==15||a[i]==20){
			printf("yes array contains 15 or 20.");
			break;
			
		}
		if(a[i]!=15||a[i]!=20){
			printf("No, Array does not contain 15 or 20");
			break;
		}
		
	}
	
	
	
}
