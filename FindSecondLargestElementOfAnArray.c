#include<stdio.h>
void main(){
	int a[]={10,20,5,15};
	int n=sizeof(a)/sizeof(a[0]);
	int i,l1,l2;
	l1=a[0];
	l2=a[0];
	for(i=1;i<n;i++){
		if(a[i]>l1){
		
			l2=l1;
			l1=a[i];
		}
		if(a[i]>l2&&a[i]!=l1){
			l2=a[i];
		}
	}
	printf("The second largest number of an array is %d",l2);
}
