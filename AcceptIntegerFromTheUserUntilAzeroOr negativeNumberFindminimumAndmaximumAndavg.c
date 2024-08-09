#include<stdio.h>
void main(){
	float number,count=0,sum=0,avg,min,max;
	printf("Enter  numbers untill zero or negative number");
	while(number>0){
		
		scanf("%f",&number);
		count++;
		sum=sum+number;
		if(count==1){
			min=max=number;
		}
		else{
			if(min>number){
				min=number;
			}
			if(max<number){
				max=number;
			}
		}
	}
	if(count>0){
	printf("Number of positive values is %f\n",count);
	printf("Maximum value is %f\n",max);
	printf("Minimum value is %f\n",min);
	avg=sum/count;
	printf("average of positive number is %f\n",avg);
}
else{
	printf("Enter positive integer");
}
}

