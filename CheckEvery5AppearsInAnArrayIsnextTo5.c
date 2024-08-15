#include<stdio.h>
void main(){
	int a[]={1,2,5,5,7,5,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i,count;
	for(i=0;i<n-1;i++){
		if(a[i]==5&&a[i+1]!=5){
			count=0;
		}
		else{ 
		count=1;
		}
		
		
	}
	printf("%d\n",count);
	if(count==0){
		printf("Every 5 is not follwed by another 5.");
	}
	else{
		printf("Every 5 is followed by 5.");
	}
	
}
