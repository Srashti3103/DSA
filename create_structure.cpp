//create a structure data type
#include<stdio.h>
struct mytype
{
	int a;
	float b;
};
int main()
{
	mytype m1,m2,*p,*q;
	p=&m1;
	p=&m2;
	printf("Enter the Data :\n");
	scanf("%d%f",&m1.a,&m1.b);
	printf("Enter the Data :\n");
	scanf("%d%f",&m2.a,&m2.b);
	printf("m1=%d %f\nm2=%d %f\n",m1.a,m1.b,m2.a,m2.b);
	printf("Address of m1.a = %d\nAddress of m1.b = %d\n",p->a,p->b);
	printf("Address of m2.a = %d\nAddress of m2.b = %d\n",q->a,q->b);
}