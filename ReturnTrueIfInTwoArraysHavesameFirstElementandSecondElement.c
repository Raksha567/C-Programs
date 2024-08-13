#include<stdio.h>
void main(){
	int n,m,i;
	printf("Enter size of first Array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of first Array");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);	
	}
	printf("Enter size of second array:");
	scanf("%d",&m);
	int b[m];
	printf("Enter elements of second array:");
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	if((a[0]==b[0])||(a[n-1]==b[m-1])){
		printf("True");
	}
	else{
		printf("false");
	}
	
}
