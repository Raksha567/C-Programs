#include<stdio.h>
void main(){
	int  n,number=1,i,j;
	printf("Enter number of lines:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
			printf("%d %d %d\n",number,number*number,number*number*number);
			number++;
	}
}
