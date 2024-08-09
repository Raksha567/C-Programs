#include<stdio.h>
void main(){
	int x1,y1;
	printf("Enter point:");
	scanf("%d%d",&x1,&y1);
	if(x1==0&&y1!=0){
		printf("point lie on y-axis");
	}
	else if(x1!=0&&y1==0){
		printf("point lie on x-axis");
	}
	else if(x1==0&&y1==0){
		printf("point lie on origin");
	}
}
