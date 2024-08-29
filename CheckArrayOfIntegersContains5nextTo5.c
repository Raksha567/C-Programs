#include<stdio.h>
void main(){
	int n,i,found=0;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==5&&a[i+1]==5){
			found=1;}
			
		
		
	}
	printf("%d\n",found);
	if(found==1){
		printf("The array of integers contains 5 next to 5.");
	}
	else{
		printf("Not found");
	}
}
