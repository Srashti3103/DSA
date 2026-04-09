//Add a node before a given data in a doubly circular linked list
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
void Add_Before(int x)
{
	temp = first;
	while(temp->data!=x)
	{
		ttemp =temp;
		temp =temp->next;
	}
	p=new Node;
	cout<<"Enter the data for new node :"<<endl;
	cin>>p->data;
	p->next=temp;
	ttemp->next=p;
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
	Add_Before(30);
	cout<<"Linked list after adding a node before the given data:"<<endl;
	disp();
}