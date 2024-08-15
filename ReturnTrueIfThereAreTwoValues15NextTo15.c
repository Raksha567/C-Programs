#include<stdio.h>
void main(){
	int a[]={1,2,3,6};
	int n=sizeof(a)/sizeof(a[0]);
	int i,found15_nextTo15=0;
	for(i=0;i<n;i++){
		if(a[i]==15&&a[i+1]==15){
			found15_nextTo15++;
		}
	}
	if(found15_nextTo15>0){
		printf("True");
	}
	else{
		printf("False");
	}
}
