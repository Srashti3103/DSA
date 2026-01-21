//Swap first and second last node in a doubly linked list
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next,*prev;
};
Node *first,*temp,*ttemp,*ptemp,*p;
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
void Swap_First_Secondlast()
{
	temp = first;
	while(temp->next->next!=NULL)
	{
		ttemp = temp;
		temp =temp->next;
	}
	p = temp->next;
	ptemp=first->next;
	first->prev=ttemp;
	first->next=p;
	ptemp->prev=temp;
	ttemp->next=first;
	temp->prev=NULL;
	temp->next=ptemp;
	p->prev=first;
	first =temp;
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
	Swap_First_Secondlast();
	cout<<"Linked list after swapping first and second last node:"<<endl;
	disp();
}
