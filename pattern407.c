#include<stdio.h>
void main(){
	int h,sp,vl;
	int p;
	for(h=7;h>=1;h--){
		
		if(h%2==0)
		continue;
		p=1;
		for(sp=1;sp<=50-h;sp++){
			printf(" ");
		}
		
		for(vl=1;vl<=h;vl++){
			printf(" %d",p);
			p++;
	}
		printf("\n");
	}
}
