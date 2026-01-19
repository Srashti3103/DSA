//Swap first and second last
#include<bits/stdc++.h>
using namespace std;
struct Node 
{
	int data;
	Node *next ;
};
Node *first , *temp ,*ttemp , *p, *pt;
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
void Swap_FSL()
{
	temp = first;
	while(temp->next->next!=NULL)
	{
		ttemp = temp;
		temp = temp -> next;
	}
	p = temp -> next;
	pt = first -> next;
	first -> next = p;
	ttemp -> next = first;
	temp -> next = pt;
	first = temp ;
	
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
	cout<< "Swap first and secomd last "<<endl;
	Swap_FSL();
	disp();
}