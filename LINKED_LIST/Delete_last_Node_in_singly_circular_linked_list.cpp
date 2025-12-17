//Delete last node in a singly circular linked list
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
	cout<<"Entet the data in new Node :"<<endl;
	cin>>ttemp ->data;
	ttemp ->next = first;
	temp ->next = ttemp;
}
void del_Last_Node()
{
	temp=first;
	while(temp->next!=first)
	{
		ttemp= temp;
		temp=temp->next;
	}
	p=first;
	ttemp->next=p;
	temp->next=NULL;
	delete temp;
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
	del_Last_Node();
	cout<<"Linked List after delete last node :"<<endl;
	disp();
}