#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void display(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        cout << "next address: " << node->next << endl;
        node = node->next;
    }
}

int main()
{
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->data = 10;
    first->next = second;
    second->data = 15;
    second->next = third;
    third->data = 20;
    third->next = NULL;

    display(second);
}