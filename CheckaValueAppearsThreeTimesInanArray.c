#include<stdio.h>
void main(){
	int a[]={3,6,6,6,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<n-2;i++){
		if(a[i]==a[i+1]&&a[i]==(a[i+2])){
			printf("Yes A value appers three times.");
		}
	
	}
}
