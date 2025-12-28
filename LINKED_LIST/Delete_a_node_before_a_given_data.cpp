//Delete a node before a given data in a doubly linked list
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
void Del_Node_Before(int x)
{
	temp = first;
	while(temp->next->data!=x)
	{
		ttemp=temp;
		temp = temp ->next;
	}
	p= temp ->next;
	ttemp ->next=p;
	p->prev=ttemp;
	temp->prev = temp->next= NULL;
	delete temp;
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
	Del_Node_Before(30);
	cout<<"Linked list after deleting a node before a given data:"<<endl;
	disp();
}
