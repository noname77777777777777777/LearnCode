#include "iostream"
using namespace std;
typedef struct tagStack{
    int data;
    struct tagStack* next;
}Stack;
typedef Stack* PrtStack;
// check empty
bool IsEmpty(PrtStack p){
    return p == NULL;
}
// create element head
void Init(PrtStack& x){
    x = NULL;
}
PrtStack Create_Node(int x){
    PrtStack p = new Stack;
    p->data = x;
    p->next =NULL;
    return p;
}
// add elemet
void Push(PrtStack& a,int& newitem){
    PrtStack p = Create_Node(newitem);
    if(IsEmpty(p) == true ){
        a= p;
    }else{
        p->next =a;
        a=p;
    }
}
//get element 
void Pop(PrtStack& a,int& input){
    if(IsEmpty(a)){
        cout<<"Stack is Emtpy";
    }
    a->data =input;
    a = a->next; 
}
// get element in top
void Top(PrtStack s,int &outitem){
    if(IsEmpty(s)){
        cout<<"Stack is emtpy";
    }
    s->data = outitem;
}
void Enter_ELement(PrtStack& p){
    int n;
    Init(p);
    do{
        cout<<"\n enter element (enter 0  to end ) : ";
        cin>>n;
        if(n==0){
            break;
        }
        Push(p,n);
    }while(true);
}
void ShowList(PrtStack p){
    PrtStack x = p;
    while (x!=NULL)
    {   
        cout<<"->" <<x->data;
        x=x->next;
    }
}
int main(){
    int n;
    PrtStack phead = NULL;
    Enter_ELement(phead);   
    ShowList(phead);
}