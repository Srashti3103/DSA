//Swap mth and nth node in singly linked lsit
#include<bits/stdc++.h>
using namespace std;
struct Node 
{
	int data;
	Node *next ;
};
Node *first , *temp ,*ttemp , *p,*ptemp,*pttemp,*pp;
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
void Swap_mth_nth(){
	int m,n;
	cout<<"Enter the mth term "<<endl;
	cin>>m;
	cout<<"Enter the nth term "<<endl;
	cin>>n;
	temp=first;
	ptemp=first;
	ttemp=NULL;
	pttemp=NULL;
	p=NULL;
	pp=NULL;
	while(temp!=NULL && temp->data!=m){
		ttemp=temp;
		temp=temp->next;
	}
	p=temp->next;
	while(ptemp!=NULL && ptemp->data!=n){
		pttemp=ptemp;
		ptemp=ptemp->next;
	}
	pp=ptemp->next;
	if(temp->next==NULL){
		pttemp->next=temp;
		ptemp->next=NULL;
		ttemp->next=ptemp;
		temp->next=pp;
	}else if(ptemp->next==NULL){
		ttemp->next=ptemp;
		temp->next=NULL;
		pttemp->next=temp;
		ptemp->next=p;
	}else if(temp==first){
		temp->next=pp;
		pttemp->next=temp;
		ptemp->next=p;
		first=ptemp;
	}else if(ptemp==first){
		ptemp->next=p;
		ttemp->next=ptemp;
		temp->next=pp;
		first=temp;
	}else if(temp==first && ptemp->next==NULL){
		temp->next=NULL;
		pttemp->next=temp;
		ptemp->next=p;
		first=ptemp;
	}else if (ptemp==first && temp->next==NULL){
		ptemp->next=NULL;
		ttemp->next=ptemp;
		temp->next=p;
		first=temp;
	}else{
		ttemp->next=ptemp;
		temp->next=pp;
		pttemp->next=temp;
		ptemp->next=p;
	}
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
	Swap_mth_nth();
	cout<<"LINKED LIST AFTER SWAPPING"<<endl;
	disp();
}