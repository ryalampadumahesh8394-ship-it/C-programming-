#include <stdio.h>
int main(){
	int *p,n,s,i,a[20],b=0;
	printf("size");
	scanf("%d",&n);
	p=a;
	printf("enter the array");
	for(i=0;i<n;i++)
	   scanf("%d",p+i);
	printf("element");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(*(p+i)==s){
		    printf("%d is at position %d",s,i+1);
		    b=1;
		    break;}
		}
	if(b==0){	
	   printf("%d is not found",s);
	   }
    return 0;
     }
