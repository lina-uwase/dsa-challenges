#include<iostream>
using namespace std;
class Node {
public:
int data;
Node *next;
Node(int data){
this->data = data;
next = NULL;
}
};
void display(Node* n)
{
while (n != NULL) {
cout << n->data << " ";
n = n->next;
}
}

int main(){
/// Statically
Node n1(1);
Node n2(2);
//To create a linked list n1.next should be the address of n2
n1.next = &n2;
cout<<n1.data<<" "<<n2.data<<endl;
//Head is not a node but a pointer to the first node
Node *head = &n1;
cout<<head->data<<endl;
//Dynamically
Node *n3=new Node(3);
Node *n4=new Node(4);
//Connect the second node and the third node
n2.next=n3;
//Link the third node and the fourth node
n3->next=n4;
display(head);
return 0;
}