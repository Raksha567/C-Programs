#include<stdio.h>
void main(){
	int x,y,z,result1,result2;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	result1=(x+y)*z;
	result2=x*y+y*z;
	printf("Output of (x+y).z is: %d\n",result1);
	printf("Output of x.y+y.z is: %d",result2);
}
