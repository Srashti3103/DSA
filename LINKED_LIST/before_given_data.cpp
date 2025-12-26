//Add a node before a given data 
#include<bits/stdc++.h>
using namespace std;
struct Node 
{
	int data;
	Node *next ;
};
Node *first,*temp,*ttemp,*p;
void init()
{
	first = temp = ttemp = NULL;
}
void createfirst()
{
	first = new Node;
	first -> next = NULL;
	cout<< "Enter data for the first node :";
	cin>>first->data;
}
void AddNode()
{ 
	temp = first;
	while(temp->next!=NULL)
	{
		temp = temp -> next ;
	}
		ttemp = new Node;
		cout<< "Enter the data for new node :";
		cin>>ttemp -> data ;
		ttemp -> next = NULL;
		temp ->next = ttemp;
}
void before_given_data()
{
	int x;
	cout<<"Enter the given data ";
	cin>>x;
	temp = first;
	while(temp -> data!=x)
	{
		ttemp = temp;
		temp = temp->next ;
	}
	p= new Node;
	cout<<"Enter the data:";
	cin>> p->data;
	p->next=temp;
	ttemp -> next =p;
	
}
void disp()
{
	temp = first;
	while(temp!= NULL)
	{
		cout<<temp->data<<endl;
		temp = temp -> next;
	}
}
int main()
{
	init();
	createfirst();
	AddNode();
	AddNode();
	AddNode();
	AddNode();
	cout<< "Linked list :"<<endl;
	disp();
	before_given_data();
	cout <<"Linked List after insertion";
	disp();
}