//ARRAY IMPLEMENTATION 
#define Max 5
#include<iostream>
using namespace std;
struct Queue{
    int data[Max];
    int front ,rear;
};
Queue *p,q;
void init(){
    p=&q;
    p->front=p->rear=-1;
}
int FULL(){
    if(p->rear==Max-1)
    return 1;
    else
    return 0;
}
int EMPTY(){
    if(p->front==-1)
    return 1;
    else
    return 0;
}
void EnQ(int x){
if(FULL()==1)
return;
if(p->rear==-1)
p->front=p->rear=0;
else
p->rear++;
p->data[p->rear]=x;
}
int DeQ(){
    int x;
    if(EMPTY()==1)
    return ;
    x=p->data[p->front];
    if(p->front==p->rear)
    p->front=p->rear=-1;
    else p->front++;
    return x;
}
int main(){
    init();
    EnQ(10);
    EnQ(20);
    EnQ(30);
    cout<<DeQ()<<endl;
    cout<<DeQ()<<endl;
    EnQ(40);
    cout<<DeQ()<<endl;
    cout<<DeQ()<<endl;
    return 0;
}