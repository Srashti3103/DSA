//Swap first and Second last in a doubly circular linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *prev,*next;
};
Node *first,*temp,*ttemp,*p,*ptemp;
void init(){
	first=temp=ttemp=NULL;
}
void Create_first(){
	cout<<"Enter the data for first node:"<<endl;
	first=new Node;
	cin>>first->data;
	first->prev=first->next=first;
}
void Add_Node(){
	temp=first->prev;
	ttemp=new Node;
	cout<<"Enter the data for the new Node:"<<endl;
	cin>>ttemp->data;
	first->prev=ttemp;
	ttemp->prev=temp;
	ttemp->next=first;
	temp->next=ttemp;
}
void Swap_First_Second_last(){
	temp=first;
	while(temp->next->next->next!=first){
		temp=temp->next;
	}
	ttemp=temp->next;
	p=ttemp->next;
	ptemp=first->next;
	first->prev=temp;
	first->next=p;
	temp->next=first;
	ttemp->prev=p;
	ttemp->next=ptemp;
	p->prev=first;
	p->next=ttemp;
	first=ttemp;
}
void disp(){
	temp=first;
	do{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	while(temp!=first);
}
int main(){
	init();
	Create_first();
	Add_Node();
	Add_Node();
	Add_Node();
	Add_Node();
	cout<<"Linked List:"<<endl;
	disp();
	Swap_First_Second_last();
	cout<<"Linked List after Swap first and second last node "<<endl;
	disp();
}