#include<stdio.h>
void main(){
	int a[]={1,4,4,1,2,3,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	int i,appears=0;
	for( i=0;i<n;i++){
		if(a[i]==1&&a[i+1]==2&&a[i+2]==3){
			appears=1;
			
			}
	}
	if(appears==1){
		printf("True, Sequence of 1,2,3 is present in an array");
	}
	else{
		printf("False,Sequence of 1,2,,3 is not present in an array ");
	}
		
	}
		
	
	
	
