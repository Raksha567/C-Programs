#include<stdio.h>
void main(){
	int a[]={3,3,4,5,5,3,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int found3=0,found5=0,i;
	for(i=0;i<n;i++){
		if(a[i]==3){
			found3++;
		}
		if(a[i]==5){
			found5++;
		}
	}
	if(found3>found5){
		printf("True number of 3 is greater than number of 5.");
	}
	else if(found3<found5){
		printf("Number of 5 is greater than number of 3.");
	}
	else{
		printf("Repeatation of 5 and 3 is equal.");
	}
}
