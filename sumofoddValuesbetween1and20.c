#include<stdio.h>
void main(){
	int i=1,sum=0;
	while(i<=20){
		if(i%2!=0){
			sum=sum+i;
		}
		i++;
	}
	printf("sum of odd values is %d",sum);
}
