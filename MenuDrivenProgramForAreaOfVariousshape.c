#include<stdio.h>
void main(){
	int choice;
	float area,radius,side,length,width,base,height;
	const pi=3.14;
	printf("Enter 1 for area of circle:\n");
	printf("Enter 2 for area of square:\n");
	printf("Enter 3 for area of rectangle:\n");
	printf("Enter 4 for area of Triangle:\n");
	printf("Enter 5 for area of parallelogram:\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter radius of circle:");
			scanf("%f",&radius);
			area=pi*radius*radius;
			printf("Area of Circle is %f",area);
			break;
		case 2:
			printf("Enter side of square:");
			scanf("%f",&side);
			area=side*side;
			printf("Area of square is %f",area);
			break;
		case 3:
			printf("Enter length and width of rectangle:");
			scanf("%f%f",&length,&width);
			area=length*width;
			printf("Area of Rectangle is %f",area);
			break;
		case 4:
			printf("enter base and height of triangle:");
			scanf("%f%f",&base,&height);
			area=0.5*base*height;
			printf("Area of triangle is %f",area);
			break;
		case 5:
			printf("enter base and height of parellelogram:");
			scanf("%f%f",&base,&height);
			area=base*height;
			printf("Area of parallelogram is %f",area);
			break;
		default:
			printf("Invalid Choice");
			
	}
}
