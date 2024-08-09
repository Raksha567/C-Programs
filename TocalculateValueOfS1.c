#include<stdio.h>
void main(){
	int i;
	float S=0;
	for(i=1;i<=50;i++){
		S=S+(1.0/i);
	}
	printf("Value of S is %f",S);
}
