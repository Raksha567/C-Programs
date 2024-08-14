#include<stdio.h>
void main(){
	int a[]={1,5,5,3,5,6,5,5,6,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i,count5_nextTo_eachOther=0,count5_followedby_6=0;
	for(i=0;i<n-1;i++){
		if(a[i]==5){
			if(a[i+1]==5){
			count5_nextTo_eachOther++;	
			}
			if(a[i+1]==6){
				count5_followedby_6++;
			}
		}
	}
	printf("Count of 5 next to eachother is %d\n",count5_nextTo_eachOther);
	printf("Count of 5 followed by 6 is %d",count5_followedby_6);
}
