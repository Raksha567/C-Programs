#include<stdio.h>
void main(){
	int i,j=0,k,temp;
	int a[3]={5,4,9};
	int b[3]={8,2,6};
	int newArr[6];
	for(i=0;i<3;i++){
		newArr[j]=a[i];
		j++;
	}
	for(i=0;i<3;i++){
		newArr[j]=b[i];
		j++;
	}
	printf("Merged Array is:");
	for(j=0;j<6;j++){
		printf("%d ",newArr[j]);
	}

	for(k=0;k<6;k++){
		for(i=0;i<5;i++){
			if(newArr[i]<newArr[i+1]){
				temp=newArr[i];
				newArr[i]=newArr[i+1];
				newArr[i+1]=temp;
			}
			
		}
	}
		printf("\nDescending Order of Merged array:");
		for(i=0;i<6;i++){
			printf("%d ",newArr[i]);
		}
}
