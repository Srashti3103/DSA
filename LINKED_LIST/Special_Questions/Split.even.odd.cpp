#include<stdio.h>
#include<string.h>
int main(){
	char a[10],b[10],l;
	printf("ENTER NAME \n");
	scanf("%s",a);
	strlwr(a);
	printf("%s",a);
	strupr(a);
	printf("%s",a);	
}