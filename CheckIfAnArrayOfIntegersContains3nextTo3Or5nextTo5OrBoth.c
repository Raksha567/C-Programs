#include<stdio.h>
void main(){
	int a[]={1,3,3,4,5,5,7};
	int n=sizeof(a)/sizeof(a[0]);
	int found_5nextto_5=0,found_3_nextto_3=0,i;
	for(i=0;i<n;i++){
		if(a[i]==3&&a[i+1]==3){
			found_3_nextto_3++;
		}
		if(a[i]==5&&a[i+1]==5){
			found_5nextto_5++;
		}
	}
	if(found_5nextto_5>0){
		printf("It contains 5");
	}
	if(found_3_nextto_3>0){
		printf("It contains 3");
	}
	if(found_3_nextto_3>0&&found_5nextto_5>0){
		printf("It contains 3 and 5.");
	}
}
