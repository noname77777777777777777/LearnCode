#include "iostream"
using namespace std;
struct Node{
    int data;
    Node*next;
};
Node* creatNode(int x){
    Node* temp = new Node;
    temp->data=x;
    temp->next=NULL;
        return temp;
}
    Node* addelement(Node* p,int x){
        Node* temp = creatNode(x);
        p->next = temp;
        return temp;
    }
void printNode(Node* p){
    Node* l = p;
    while (l!=NULL)
    {
        cout<<l->data<<" ";
        l=l->next;
    }
    
}
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    Node* l = creatNode(x);
    Node* p = l;
    for(int i=1;i<n;i++){
        cin>>x;
        p=addelement(p,x);
    }
    printNode(l);
}