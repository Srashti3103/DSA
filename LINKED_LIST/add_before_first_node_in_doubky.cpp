//Add a node before the first node in doubly linked list 
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
	first = temp = ttemp = p = NULL;
}
void create_first()
{
	cout<<"Enter the data for first node "<<endl;
	first = new Node;
	cin>>first->data;
	first->next=first->prev=NULL;
}
void Add_Node()
{
	temp = first;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	ttemp = new Node;
	cout<<"Enter the data for new node "<<endl;
	cin>>ttemp->data;
	ttemp->next = NULL;
	ttemp->prev = temp;
	temp->next = ttemp;
}
void Add_Before_first()
{
	temp = first;
	p= new Node;
	cout<<"Enter the data for newnode :"<<endl;
	cin>>p->data;
	p->next = temp;
	p->prev=NULL;
	temp->prev=p;
	first = p;
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
	Add_Before_first();
	cout<<"Linked List after add a node before first node"<<endl;
	disp();
}
