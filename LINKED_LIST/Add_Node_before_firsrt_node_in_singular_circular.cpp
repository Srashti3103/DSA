//Add a node before a first node in a singly circular linked list
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;	
};
Node *first, *temp ,*ttemp,*p;
void init()
{
	first = temp = ttemp = NULL;
}
void create_first()
{
	first = new Node;
	first -> next = first;
	cout<<"Enter the data in first node :"<<endl;
	cin>>first->data;
}
void Add_new_Node()
{
	temp = first;
	while(temp->next!=first)
	{
		temp = temp -> next;
	}
	ttemp= new Node;
	cout<<"Enter the data in new Node :"<<endl;
	cin>>ttemp ->data;
	ttemp ->next = first;
	temp ->next = ttemp;
}
void Add_Before_first()
{
	temp = first;
	while(temp->next!=first)
	{
		temp=temp->next;
	}
	ttemp = temp->next;
	p= new Node;
	cout<<"Enter the data for new node :"<<endl;
	cin>>p->data;
	p->next=ttemp;
	temp->next=p;
	first = p;
}
void disp()
{
	temp =first;
	do{
		cout<<temp->data<<endl;
		temp = temp->next;
	}while(temp!=first);
}
int main()
{
	init();
    create_first();
	Add_new_Node();
	Add_new_Node();
	Add_new_Node();
	Add_new_Node();
	cout<<"Linked List :"<<endl;
	disp();
	Add_Before_first();
	cout<<"Linked list after adding a node before first node:"<<endl;
	disp();
}