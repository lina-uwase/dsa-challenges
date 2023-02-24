#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        next = NULL;
    };
};
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "Null"<<endl;
}
bool Search(Node *head, int x)
{
    int position = 1;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}
Node *DeleteFirstNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteLastNode(Node *head){
    if(head==NULL){
        return NULL;
    }if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node *last = temp->next;
    delete(last);
    temp->next = NULL;
    return head;
}
Node *deleteThirdNode(Node *head){
    if(head==NULL){
        return NULL;
    }else{
        Node *head = head->next;
        head->next = head->next->next;
    }
    
}
int main()
{
    Node *n1 = new Node(5);
    Node *n2 = new Node(6);
    Node *n3 = new Node(8);
    Node *n4 = new Node(10);
    Node *n5 = new Node(15);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    Node *head = n1;
    Search(head, 8) ? cout << "found" << endl : cout << "not found" << endl;
    head = DeleteFirstNode(head);
    head = deleteLastNode(head);
    display(head);
}
