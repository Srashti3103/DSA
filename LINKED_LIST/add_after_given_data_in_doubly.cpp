//Add a node after a given data in a doubly linked list 
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
void Add_after(int x)
{
	temp = first;
	while(temp->data!=x)
	{
		temp=temp->next;
		ttemp=temp->next;
	}
	p=new Node;
	cout<<"Enter data for new node:"<<endl;
	cin>>p->data;
	p->prev=temp;
	p->next=ttemp;
	temp->next=p;
	ttemp->prev=p;
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
	Add_after(30);
	cout<<"Linked List after add a node :"<<endl;
	disp();
}
