#include<stdio.h>
void main(){
	int a[10]={3,6,5,8,3,2,5,6,1,9};
	int i,j,count=0,duplicate;
	printf("Array of unique Elements:");
	for(i=0;i<10;i++){
		duplicate=0;
		for(j=i+1;j<10;j++){
			if(a[j]==a[i]){
				count++;
				duplicate=1;
			}
		}
		if(duplicate==0){
			printf("%d ",a[i]);
		}
	}
	printf("\nCount of duplicate is %d",count);
}
