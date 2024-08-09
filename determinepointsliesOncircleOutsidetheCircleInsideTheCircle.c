#include<stdio.h>
#include<math.h>
void main(){
	int x1,x2,y1,y2,r;
	float cp;
	printf("enter center points:");
	scanf("%d%d",&x1,&y1);
	printf("enter coordinates of point:");
	scanf("%d%d",&x2,&y2);
	printf("Enter radius:");
	scanf("%d",&r);
	cp=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	if(cp>r){
		printf("point outside circle");
	}
	else if(cp<r){
		printf("point inside the circle");
	}
	else{
		printf("point on the circle");
	}
}
