#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(node*&head,int d){
    node*temp=new node(d);
    temp->next=head;
    head=temp;

}
void update(node*&head,int position,int d){
     int cnt=1;
     node*temp=head;
     while(cnt<=position){
        temp=temp->next;
        cnt++;
     }
     temp->data=d;
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){ 
    node*node1=new node(13);
    node*head=node1;
    insertAthead(head,10);
    print(head);
     insertAthead(head,13);
 print(head);
  insertAthead(head,18);
 print(head);
 update(head,3,2);
 print(head);
return 0;
}