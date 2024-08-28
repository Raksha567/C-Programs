#include<stdio.h>
float area(){
float r,result;
printf("enter radius:");
scanf("%f",&r);
result=3.14*r*r;
return (result);
	
}
void main(){
	float k;
	k=area();
	printf("area of circle is %f",k);
}
