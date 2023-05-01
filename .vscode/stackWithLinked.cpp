#include<iostream>
using namespace std;
class Node{
    public:
	int data;
	Node *next;
	Node(int x){
		this->data=x;
		this->next=NULL;
	}
};
class Stack{
    public:
    int size;
	Node *head;
	public:
		Stack(){
			head=NULL;
		}
void push(int ele){
	Node *ne= new Node(ele);
	ne->next=head;
	head=ne;
}
int getSize(){
return size;
}


bool isEmpty(){
return size==0;
}

void pop(){
if(isEmpty()){
cout<<"Stack empty"<<endl;
return;
}
};
};

int main(){
	Node *first= new Node(10);
    Node *second = new Node(20);
    first->next=second;
    second->next = NULL;
    
    
	
}