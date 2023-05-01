#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
this->data = data;
next = NULL;
}
};

class Stack{
Node *head;
int size;
public:
Stack(){
head = NULL;
size = 0;
}

int getSize(){
return size;
}

bool isEmpty(){
return size==0;
}

void push(Node ele){
Node *n = new Node(ele);
n->next = head;
head = n;
size++;
}

void pop(){
if(isEmpty()){
cout<<"Stack empty"<<endl;
return;
}
Node *temp = head;
head = head->next;
temp->next = NULL;
delete temp;
size--;
}

int top(){
if(isEmpty()){
cout<<"Stack empty"<<endl;
return 0;

}
}
};

int main(){
Stack  c;
c.push(10);
c.push(20);
c.push(30);
c.push(40);

cout<<c.top()<<endl;
c.pop();
cout<<c.top()<<endl;
c.pop();
cout<<c.top()<<endl;
c.pop();
cout<<c.getSize()<<endl;
cout<<c.isEmpty()<<endl;
return 0;
}