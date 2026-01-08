//REVERSE OF A SINGLY LINKED LIST 
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
void Rev_SL()
{
	temp = first;
	p = NULL;
	while(temp!=NULL)
	{
		ttemp = temp->next;
		temp->next = p;
		p = temp;
		temp = ttemp;
	}
	first = p;
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
	AddNode();
	cout<< "LINKED LIST "<<endl;
	disp();
	Rev_SL();
	cout<< "REVERSE LINKED LIST "<<endl;
	disp();
}