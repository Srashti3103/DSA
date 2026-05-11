//Swap mth and nth node in a doubly linked list 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next,*prev;
};
Node *first,*temp,*ttemp,*p,*ptemp,*pttemp,*pp;
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
void Swap_mth_nth(){
	int m,n;
	cout<<"Enter the mth term "<<endl;
	cin>>m;
	cout<<"Enter the nth term "<<endl;
	cin>>n;
	temp=first;
	ptemp=first;
	while(temp->data!=m){
		ttemp=temp;
		temp=temp->next;
	}
	p=temp->next;
	while(ptemp->data!=n){
		pttemp=ptemp;
		ptemp=ptemp->next;
	}
	pp=ptemp->next;
	if(temp->next==NULL){
		pttemp->next=temp;
		ptemp->prev=ttemp;
		ptemp->next=p;
		pp->prev=temp;
		temp->prev=pttemp;
		temp->next=pp;
	}else if(ptemp->next==NULL){
		ttemp->next=ptemp;
		temp->prev=pttemp;
		temp->next=pp;
		p->prev=ptemp;
		ptemp->prev=ttemp;
		ptemp->next=p;
	}else if(temp->prev==NULL){
		temp->prev=pttemp;
		temp->next=pp;
		p->prev=ptemp;
		ptemp->prev=NULL;
		ptemp->next=p;
		pp->prev=temp;
		first=ptemp;
	}else if(ptemp->prev==NULL){
		ptemp->prev=ttemp;
		ptemp->next=p;
		pp->prev=temp;
		temp->prev=NULL;
		temp->next=pp;
		p->prev=ptemp;
		first=temp;
	}else if(temp->prev==NULL && ptemp->next==NULL){
		temp->prev=pttemp;
		temp->next=NULL;
		p->prev=pttemp;
		pttemp->next=temp;
		ptemp->prev=NULL;
		ptemp->next=p;
		first=ptemp;
	}else if(ptemp->prev==NULL && temp->next==NULL){
		ptemp->prev=ttemp;
		ptemp->next=NULL;
		pp->prev=temp;
		ttemp->next=ptemp;
		temp->prev=NULL;
		temp->next=pp;
		first=temp;
	}else{
	ttemp->next=ptemp;
	temp->prev=pttemp;
	temp->next=pp;
	p->prev=ptemp;
	pttemp->next=temp;
	ptemp->prev=ttemp;
	ptemp->next=p;
	pp->prev=temp;
}
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
	Add_Node();
	Add_Node();
	cout<<"Doubly Linked List :"<<endl;
	disp();
	Swap_mth_nth();
	cout<<"Linked List after Swap mth and nth  node :"<<endl;
	disp();
}
