//Delete a node after a given data in a doubly circular linked list
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
void Del_Node_After(int x){
	temp=first;
	while(temp->data!=x){
		temp=temp->next;
	}
	ttemp=temp->next;
	p=ttemp->next;
	temp->next=p;
	p->prev=temp;
	ttemp->prev=ttemp->next=NULL;
	delete ttemp;
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
	Del_Node_After(30);
	cout<<"Linked List after delete a node After a given data"<<endl;
	disp();
}