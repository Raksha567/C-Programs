#include<stdio.h>
void main(){
	int a[3],new[3],i;
	printf("Enter elements of an array:");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		
			new[i]=a[i];
		}
		for(i=0;i<3;i++){
			if(a[i]==5&&a[i+1]==7){
				new[i+1]=1;
			}
		}
		printf("New array:");
		for(i=0;i<3;i++){
			printf("%d ",new[i]);
		}
			
		
		
	
}
