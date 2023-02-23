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
    }
};

void display(Node *f)
{
    while (f != NULL)
    {
        cout << f->data << ""<<endl;
        f = f->next;
    }
}

int length(Node *head)
{
    int counter;
    while (head != NULL)
    {
        head = head->next;
        counter++;
    }
    return 0;
    cout << "The size of the linked list is: " << counter << endl;
}
int main()
{
    Node n1(5);
    Node n2 = Node(10);
    n1.next = &n2;
    display(&n1);
    Node *n3 = new Node(20);
    n2.next = n3;

    Node *head = &n1;
    display(head);
    return 0;
    length(head);
}