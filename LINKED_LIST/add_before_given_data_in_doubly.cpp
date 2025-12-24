//Add a node before a given data in doubly
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next,*prev;
};
Node *first,*temp,*ttemp,*p;
void init()
{
	first = temp = ttemp = NULL;
}
void create_first()
{
	int x;
	cout<<"Enter the data for first node "<<endl;
	cin>> x;
	first = new Node;
	first->data=x;
	first->next=first->prev=NULL;
}
void Add_Node()
{
	int y;
	temp = first;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	ttemp = new Node;
	cout<<"Enter the data for new node "<<endl;
	cin>> y;
	ttemp->data=y;
	ttemp->next = NULL;
	ttemp->prev = temp;
	temp->next = ttemp;
}
void Add_Before(int x)
{
	temp = first;
	while(temp->data!=x)
	{
		ttemp = temp ;
		temp = temp ->next;
	}
	p=new Node;
	cout<<"Enter data for new node:"<<endl;
	cin>>p->data;
	p->prev=ttemp;
	p->next=temp;
	ttemp->next=p;
	temp->prev=p;
}
void disp()
{
	temp = first;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	init();
	create_first();
	Add_Node();
	Add_Node();
	Add_Node();
	Add_Node();
	cout<<"Doubly Linked List :"<<endl;
	disp();
	Add_Before(30);
	cout<<"Linked List before add a node :"<<endl;
	disp();
}
