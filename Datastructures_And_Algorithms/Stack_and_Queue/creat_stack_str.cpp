#include "iostream"
#include "string.h"
using namespace std;
typedef struct tagNode  
{
    string data;
    struct tagNode* next;
}Node;
typedef Node* PrtNode;
bool IsEmpty(PrtNode p){
    return p==NULL;
}
void Init(PrtNode& p){
    p = NULL;
}
PrtNode Create_Node(string s){
    PrtNode p = new Node;
    p->data = s;
    p->next = NULL;
    return p;
}
void Push(PrtNode& Head,string& s){
    PrtNode p = Create_Node(s);
    if(IsEmpty(p)==true){
        Head =p;
    }else{
        p->next = Head;
        Head = p;
    }

}
void Enter_Element(PrtNode &p){
    string s;
    Init(p);
    do
    {   
        cout<<"\n Enter string a(to end ,please press 'pause' ) : ";
        getline(cin,s);
        if(s=="pause"){
            break;
        }
        Push(p,s);
    } while (true);
}
void Output_element(PrtNode p){
    PrtNode x = p;
    while (x!=NULL)
    {
        cout<<"->"<<x->data;
        x=x->next;
    }
    
}
int main(){
    PrtNode head = NULL;
    Enter_Element(head);
    Output_element(head);
}