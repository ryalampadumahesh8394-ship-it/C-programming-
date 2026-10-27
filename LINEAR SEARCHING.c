#include<stdio.h>
int main (){
	int n,i,a[100],v=0,x;
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("element");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(n==a[i]){
			printf("%d is at postion %d",n,i+1);
			v++;
			break;
		}
	}
	if(v==0){
		printf("element is not find ");
	}
	return 0;
}
