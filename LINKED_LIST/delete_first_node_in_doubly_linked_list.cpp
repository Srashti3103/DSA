//Delete first node in a doubly linked list 
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
void Del_First()
{
	temp = first;
	ttemp = temp->next;
	ttemp->prev=NULL;
	temp->next=NULL;
	delete temp; 
	first = ttemp;      
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
	Del_First();
	cout<<"Linked list after deleting first node:"<<endl;
	disp();
}
