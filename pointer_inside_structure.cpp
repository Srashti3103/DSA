//To create a pointer inside a structure
#include<stdio.h>
struct mytype
{
	int a;
	mytype *Postman;
};
int main(){
	mytype m1, *Head_office;
	Head_office= &m1;
	printf("Enter data :\n");
	scanf("%d",&Head_office->a);
	Head_office->Postman=NULL;
	mytype m2;
	Head_office->Postman=&m2;
	printf("Address m1: %d\nAddress: %d\n",Head_office,Head_office->Postman);
	
}