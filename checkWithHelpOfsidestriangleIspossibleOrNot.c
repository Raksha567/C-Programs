#include<stdio.h>
void main(){
	float a,b,c,perimeter;
	printf("Enter Three sides:");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		perimeter=a+b+c;
		printf("Perimeter of triangle is %f",perimeter);
	}
	else{
		printf("The Numbers can not form atriangle");
	}
}

