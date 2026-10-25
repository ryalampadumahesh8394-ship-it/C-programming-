#include<stdio.h>
int main (){
	int i,j;
	char str[3][30];
	for(i=0;i<3;i++){
		
			scanf("%s",str[i]);
		
	}
	for(i=0;i<3;i++){
		printf("%s",str[i]);
		printf("\n");
	}
	return 0;
}
