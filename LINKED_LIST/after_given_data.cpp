// Add a node after given data 
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
void after_given_data()
{
	int x;
	temp = first ;
	cout<<"Enter the given data :";
	cin>>x;
	while(temp->data!=x)
	{
		temp = temp ->next;
		ttemp = temp -> next;
	}
	p = new Node;
	cout<< "Enter the data in a new node";
	cin>>p->data;
	temp->next=p;
	p->next = ttemp;
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
	after_given_data();
	disp();
}