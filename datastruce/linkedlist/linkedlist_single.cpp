#include"iostream"
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node *head = new Node();
    head->data= 1;
    head->next= NULL;
    Node *second = new Node();
    second->data = 2;
    second->next = NULL;
    Node *third = new Node();
    third->data = 3;
    third->next = NULL;
    head->next = second;
    second->next = third;
    int data = head->data;

    Node* p =head;
    while(p!=NULL){
        data=p->data;
        p=p->next;
        cout<<data<<" - > ";
    }
}