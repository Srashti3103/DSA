//Add a node before a given data in doubly circular linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *prev,*next;
};
Node *first,*temp,*ttemp,*p;
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
void Add_Before(int x){
	temp=first;
	while(temp->data!=x){
		ttemp=temp;
		temp=temp->next;
	}
	p= new Node;
	cout<<"Enter the data for new node :"<<endl;
	cin>>p->data;
	p->next=temp;
	p->prev=ttemp;
	ttemp->next=p;
	temp->prev=p;
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
	Add_Before(30);
	cout<<"Linked List after add node before a given data:"<<endl;
	disp();
}