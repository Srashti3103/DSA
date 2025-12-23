//REVERSE OF NUMBER IN ARRAY IMPLIMENTATION OF STACK 
#include<iostream>
#define max 5
using namespace std;
struct stack{
	int data[max];
	int top;
};
stack *p,s1;
void init(){
	p=&s1;
	p->top=-1;
}
int Empty(){
	if(p->top==-1){
		cout<<"Stack is empty"<<endl;
		return 1;
	}else{
		return 0;
	}
}
int Full(){
	if(p->top==max-1){
		cout<<"Stack is full"<<endl;
		return 1;
	}else{
		return 0;
	}
}
void push(){
	if(Full()){
		return;
	}
	p->top++;
	cout<<"Enter data";
	cin>>p->data[p->top];
}
int pop(){
	if(Empty()){
		return 1;
	}
	cout<<p->data[p->top];
	p->top--;
	return 0;
}
int Reversenumber(int n){
	int rev;
	while (n > 0) {
        int digit = n % 10;
        push(digit);
        n /= 10;
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversed = Reversenumber(num);
    cout << "Reversed number = " << reversed;o
    return 0;
}