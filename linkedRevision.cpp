#include <iostream>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->"<<endl;
        head= head->next;
    }

}

int main()
{
    Node *n1 = new Node(6);
    Node *n2 = new Node(5);
    Node *n3 = new Node(8);
    n1->next = n2;
    n2->next = n3;
    Node *head = n1;
    cout<<n2<<endl;
    display(head);

    
 
    
}