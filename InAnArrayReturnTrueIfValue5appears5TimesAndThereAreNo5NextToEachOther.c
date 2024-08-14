#include<stdio.h>
void main(){
	int a[]={1,5,2,5,4,5,6,5,8,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i,count=0;
	for(i=0;i<n;i++){
		if(a[i]==5&&a[i+1]!=5&&a[i-1]!=5){
			count++;
		}
	
	
	}

	if(count==5){
		printf("True,The value of 5 appers 5 times and there are no 5 next to each other.");

}
else{
	printf("False");
}
}
