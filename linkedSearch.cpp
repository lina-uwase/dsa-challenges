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
    cout << "Null" << endl;
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
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteLastNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *last = temp->next;
    delete (last);
    temp->next = NULL;
    return head;
}
Node *deleteThirdNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}
Node *deleteNode(Node *head, int i)
{
    if (i <= 0)
    {
        return head;
    }
    if (i == 1 && head)
    {
        Node *newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }
    Node *curr = head;
    int count = 1;
    while (count < i - 1 && curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    if (curr && curr->next)
    {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        temp->next = NULL;
        delete temp;
    }
    return head;
}
Node *reverse(Node *head)
{git 
    Node *previous = NULL;
    Node *current = head;
    Node *ahead = NULL;

    while (current != NULL)
    {
        ahead = current->next;
        current->next = previous;
        previous = current;
        current = ahead;
    }
    return previous;
}
Node *midNode(Node *head){
    Node *fast = head;
    Node *slow = head;
    Node *current  = head;

    while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)  {
        fast=fast->next->next;
        slow = slow->next;

    }
    return slow;


}
int main()
{
    Node *n1 = new Node(5);
    Node *n2 = new Node(7);
    Node *n3 = new Node(9);
    Node *n4 = new Node(15);
    Node *n5 = new Node(17);
    Node *n6 = new Node(20);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    Node *head = n1;
    head = reverse(head);
    Node *mid = midNode(head);
    // head = deleteNode(head,4 );
    // Search(head, 8) ? cout << "found" << endl : cout << "not found" << endl;
    // head = DeleteFirstNode(head);
    // head = deleteThirdNode(head);
    // head = deleteLastNode(head);
    display(head);
    cout<<"the middle node is: "<<mid<<endl;

}
