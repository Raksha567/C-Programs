#include<stdio.h>
void main(){
	float marks;
float	count=0;
float sum=0;
float avg;
printf("Enter marks(Enter 0 or negative number to end):");
while(1){
	printf("Enter marks:");
	scanf("%f",&marks);
	if(marks<=0){
		break;
	}
	count++;
	sum=sum+marks;
}
if(count>0){
	avg=sum/count;
	printf("Average marks of students is %f",avg);
}
else{
	printf("No valid marks Entered.");
}
}
