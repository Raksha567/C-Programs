#include<stdio.h>
void main(){
	int i=1;
	int sum=0;
	do{
		if(i%2!=0){
			sum=sum+i;
		}
		i++;
		
	}while(i<=20);
	printf("Sum of odd values is %d",sum);
}
