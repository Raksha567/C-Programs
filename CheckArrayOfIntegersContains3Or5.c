#include<stdio.h>
void main(){
	int a[]={3,4,5,6,3,5,7,1};
	int n=sizeof(a)/sizeof(a[0]);
	int i,found3=0,found5=0;
	for(i=0;i<n;i++){
		if(a[i]==3){
			found3++;
		}
		if(a[i]==5){
			found5++;
		}
	}
	if(found3>0||found5>0){
		printf("True,Array contains 3 or 5");
	}
	else{
		printf("Does not contains 3 or 5");
	}
}
