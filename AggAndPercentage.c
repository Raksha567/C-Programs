#include<stdio.h>
#include<conio.h>
void main(){
	float English,Maths,Hindi,Sanskrit,Science,Agg,per;
	printf("Enter Marks of Five Subject:");
	scanf("%f%f%f%f%f",&English,&Maths,&Hindi,&Sanskrit,&Science);
	Agg=English+Maths+Hindi+Sanskrit+Science;
	per=(Agg*100)/500;
	printf("Aggregate is %f\n",Agg);
	printf("Percentage of student is %f",per);
	getch();
}
