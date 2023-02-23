#include <iostream>
using namespace std;
class BusinessData
{
public:
    string name;
    BusinessData *next;
};
void push(BusinessData **head_ref, string newData)
{
    BusinessData *new_node = new BusinessData();
    new_node->name = newData;
    new_node->next = (*head_ref);
    *(head_ref) = new_node;
}
void insertAfter(BusinessData *prevNode, string new_data)
{
    BusinessData *new_node = new BusinessData();
    new_node->name = new_data;
    new_node->next = prevNode->next;
    prevNode->next = new_node;
}
void display(BusinessData *node)
{
    while (node != NULL)
    {
        cout << node->name << endl;
        node = node->next;
    }
}
int main()
{
    BusinessData *data1 = new BusinessData();
    BusinessData *data2 = new BusinessData();
    BusinessData *data3 = new BusinessData();
    data1->name = "light energy";
    data2->name = "kigali city";
    data3->name = "manager";
    data1->next = data2;
    data2->next = data3;
    data3->next = NULL;
    cout << "===inserting before===" << endl;
    push(&data1, "lina light");
    insertAfter(data2, "ceo");
    display(data1);
}