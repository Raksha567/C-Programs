#include<stdio.h>
void main(){
	int x,y;
	printf("Enter x coordinate:");
	scanf("%d",&x);
	printf("enter y coordinate:");
	scanf("%d",&y);
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
}
