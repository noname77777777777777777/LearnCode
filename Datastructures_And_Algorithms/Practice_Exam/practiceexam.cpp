#include "iostream"
using namespace std;
typedef struct DataNode{
    int data;
    struct DataNode* next;
}Node;
typedef  Node* PrtNode;
PrtNode Create_Node(int x){
    PrtNode p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}
bool Check_Node(PrtNode p){
    return p == NULL;
}
void Infirst(PrtNode &p){
    p =NULL;
}
void Insert_Element_Frist(PrtNode &p,PrtNode x){
   if(Check_Node(p)==true){
        p = x;
   }else {
    x->next = p;
    p=x;
   }
}

void Enter_Data(PrtNode &p){
    int x;
    Infirst(p);
    do{
        cout<<("\n Enter Value (Enter 0 to end) : ");
        cin>>x;
        if(x==0){
            break;
        }
        PrtNode pNew = Create_Node(x);
        Insert_Element_Frist(p,pNew);
        //Insert_Element_Last(p,pNew);
    }while(true);
}
void Showlist(PrtNode& p){
    PrtNode x = p;
    cout<<"\n";
    while(x!=NULL){
        cout<<x->data<<"->";
        x=x->next;
    }
}
void Insertvaluex(PrtNode& head,int x){
    PrtNode p = Create_Node(x);
    if(Check_Node(head)==true){
        head = p;
    }
    p->next = head;
    head = p;
}

void Insertvaluebefore(PrtNode& head,int x){
    PrtNode p = Create_Node(x);
    if(Check_Node(head)==true){
        head = p;
    }
    head->next = p;
    p->next = head->next;
}
PrtNode Timxs(PrtNode& head,int x){
    PrtNode q = head;
    while (q!=NULL)
    {
            if(q->next->data == x){
                return q;
            }
            q = q->next;
    }
    
}
PrtNode Timxt(PrtNode& head,int x){
    PrtNode q = head;
    while (q!=NULL)
    {
            if(q->data == x){
                return q;
            }
            q = q->next;
    }
    
}
void Delnode(PrtNode& head,int x){
    PrtNode p = head;
    if(p->data==x){
        p->data  = p->next->data;
        p->next = p->next->next;
    }else{
    Timxs(head,x)->next = Timxt(head,x)->next;
    }
}
int main(){
    PrtNode Head =NULL;
    Enter_Data(Head);
    Showlist(Head);
    int x;
    cin>>x;
    Insertvaluex(Head,x); Showlist(Head);
    int k;
    cin>>k;
    Delnode(Head,k);Showlist(Head);
}