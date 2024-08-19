#include<stdio.h>
void main(){
	int a[]={3,6,6,6,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	int triple=0
	for(i=0;i<n-2;i++){
		if(a[i]==a[i+1]&&a[i]==(a[i+2])){
			triple=1;
		}
	
	}
	if(triple==1){
		printf("A value is apeears three times");
			}
	else{
		printf("A value doesnot appears three times");
			}
}
