#include<stdio.h>
void main(){
	float x,y;
	printf("Enter the x coordinate:");
	scanf("%f",&x);
	printf("Enter the y coordinate:");
	scanf("%f",&y);
	if(x>0&&y>0){
		printf("QuadrantI");
	}
	else if(x<0&&y>0){
		printf("QuadrantII");
	}
	else if(x<0&&y<0){
		printf("QuadrantIII");
	}
	else if(x>0&&y<0){
		printf("QuadrantIV");
	}
	else if(x==0&&y!=0){
		printf("Y-axis");
	}
	else if(x!=0&&y==0){
		printf("x-axis");
	}
	else {
		printf("Origin");
	}
}
