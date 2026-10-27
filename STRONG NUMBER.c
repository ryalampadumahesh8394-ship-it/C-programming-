#include<stdio.h>
void strong(int x);
int main (){
	int x;
	
	printf("enter the integer");
	scanf("%d",&x);
	strong(x);
	return 0;
}
void strong(int x){
	int fact,digit,sum=0,i,n=x;
	while(x>0){
	
	fact =1;
	digit=x%10;
	for(i=1;i<=digit;i++){
		fact=fact*i;}
		x=x/10;
	
	sum=sum+fact;
}
if(sum==n)
	printf("strong number ");

else
printf("not strong number");
}
