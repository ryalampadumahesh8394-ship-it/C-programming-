#include<stdio.h>
void fibonacci(int x);
	int main (){
		int x;
		printf("enter number of fibonacci series");
		scanf("%d",&x);
		fibonacci(x);
		return 0;
	
     }
void fibonacci(int x){

	int i,a=0,b=1,c,n=x;
	for(i=1;i<=n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
    }}
