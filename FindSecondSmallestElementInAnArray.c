#include<stdio.h>
void main(){
	int a[]={10,20,5,15};
	int n=sizeof(a)/sizeof(a[0]);
	int i,s1,s2;
	s1=a[0];
	s2=a[0];
	for(i=1;i<n;i++){
		if(a[i]<s1){
		
			s2=s1;
			s1=a[i];
		}
		if(a[i]<s2&&a[i]!=s1){
			s2=a[i];
		}
	}
	printf("The second smallest number of an array is %d",s2);
}
