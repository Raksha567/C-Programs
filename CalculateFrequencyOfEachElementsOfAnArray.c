#include<stdio.h>
void main(){
	int a[]={1,2,2,3,4,5,5};
	int n=sizeof(a)/sizeof(a[0]);
	int count[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		count[i]=1;
		if(a[i]!=-1)
		{
		for(j=i+1;j<n;j++)	
		{
		if(a[i]==a[j])
		{
		count[i]++;
		a[j]=-1;	
		}
		}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]!=-1){
			printf("%d occurs %d times\n",a[i],count[i]);
		}
	}
}
