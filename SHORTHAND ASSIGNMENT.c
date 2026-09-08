#include<stdio.h>
int main (){
	int a,b;
	float k;
	scanf("%d%d",&a,&b);
	k=(float)a/b;
	printf("%d %d %d %f",a+=b,a*=b,a-=b,k);
	return 0;
	
}
