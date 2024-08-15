#include<stdio.h>
void main(){
	int a[]={1,3,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	int count;
	for(i=1;i<n;i++){
	
		 if(!(a[i]>a[i-1])){
			count=0;
		}
		
		
	}

	if(count==0){
		printf("Each elements is not greater than previous element.");
	}
	else{
		printf("Each element is  greater than previous element.");
	}
}
