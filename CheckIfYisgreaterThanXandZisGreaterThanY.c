#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	if(y>x&&z>y){
		printf("yes y is greater than x and z is greater than y");
	}
	else{
		printf("No condtion is not satisfied");
	}
}
