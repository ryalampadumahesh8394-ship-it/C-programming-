#include<stdio.h>
int main (){
	int i,n,x,l,h,a[100],mid;
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 printf("element");
	 scanf("%d",&x);
	 l=0;
	 h=n-1;
	 while(l<=h){
	 	mid=(l+h)/2;
	 	if(x==a[mid]){
		 
		 
	 		printf("%d is found at %d position",x,mid+1);
	 		break;}
	
	    else if(x>a[mid]){
		 
		 l=mid +1;}
		 else{
		 
		 h=mid +1;}
	 }
	 if(l>h || l==n){
	 	printf("%d is not found",x);
	 	
	 }
	 return 0;
}
