#include<stdio.h>
#include<string.h>
int main (){
	char st1[10],st2[10];
	scanf("%s",st1);
	scanf("%s",st2);
	if(strcmp(st1,st2)==0){
		printf("both are equal");
	}else{
		printf("not equal ");
	}
	return 0;
}
