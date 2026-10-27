#include<stdio.h>
int main (){
	int i,j,temp,min,n,a[100];
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
	
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		
	}
	for(i=0;i<n;i++){
	
	printf("%d",a[i]);}
	return 0;
}
