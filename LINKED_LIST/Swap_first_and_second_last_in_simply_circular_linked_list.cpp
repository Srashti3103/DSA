//Swap First and Second last node in a singly circular linked list
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;	
};
Node *first, *temp ,*ttemp,*p,*ptemp;
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
void Swap_First_Secondlast_Node()
{
	temp=first;
	while(temp->next->next!=first)
	{
		ttemp=temp;
		temp=temp->next;
	}
	p=first->next;
	ptemp=temp->next;
	first->next=ptemp;
	ttemp->next=first;
	temp->next=p;
	ptemp->next=temp;
	first=temp;
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
	Swap_First_Secondlast_Node();
	cout<<"Linked List after Swap First and Secondlast node :"<<endl;
	disp();
}