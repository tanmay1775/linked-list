#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertatposition(node *&head, int position, int d)
{
    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1){
    temp = temp->next;
    cnt++;
    }
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
};
void insertAthead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void display(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertAthead(head, 18);
    // display(head);
    insertAthead(head, 15);
    // display(head);
    insertAthead(head, 14);
    // display(head);
    display(head);
    insertatposition(head, 3, 16);
    display(head);

    return 0;
}