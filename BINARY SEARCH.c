#include <stdio.h>
int main(){
	int a[20],n,l,h,mid,s,i;
	printf("size");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	l=0;
	h=n-1;
	printf("key element");
	scanf("%d",&s);
	while(l<=h)
	{
	 mid=(l+h)/2;
	 if(s==a[mid])
	 {
	 	printf("%d is at position %d",s,mid+1);
	 	return 0;
	 }
	 else if(s>a[mid])
	 {
	 	l=mid+1;
	 }
	 else
	 {
	 	h=mid-1;
	 }
		
	}
	if(l>h)
	{
		printf("%d is not found",s);
	}
	return 0;
}
