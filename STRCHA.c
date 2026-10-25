#include<stdio.h>
#include<string.h>
int main (){
	
	char x='a';
	char str[10];
	scanf("%s",str);
	strchr(str,x);
	printf("%s",str);
	return 0;
}
