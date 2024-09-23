#include<stdio.h>
void main(){
	int h,sp,vl;
	int p=9;
	for(h=7;h>=1;h--){
		
		if(h%2==0)
		continue;
		p=p-2;
		for(sp=1;sp<=50-h;sp++){
			printf(" ");
		}
		
		for(vl=1;vl<=h;vl++){
			printf(" %d",p);
	}
		printf("\n");
	}
}
