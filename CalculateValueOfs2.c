#include<stdio.h>
void main(){
	int i;
	float s=0.0;
	float numerator=1.0;
	float denominator=1.0;
	for(i=0;i<4;i++){
		s=s+(numerator/denominator);
		numerator=numerator+2;
		denominator=denominator*2;
	}
	printf("Value of s is %f",s);
}
