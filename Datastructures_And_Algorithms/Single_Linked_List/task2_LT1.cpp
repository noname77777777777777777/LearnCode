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
PrtNode Last_Node(PrtNode p){
    PrtNode q= p;
    while (q->next == NULL)
    {
        q=q->next;
    }
    return q;
    
}
void Insert_Element_Last(PrtNode &p,PrtNode x){
    if(Check_Node(p)==true){
        p =x;
    }
    else{
        PrtNode k = Last_Node(p);
        k->next=x;
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
        //Insert_Element_Frist(p,pNew);
        Insert_Element_Last(p,pNew);
    }while(true);
}
void Showlist(PrtNode p){
    PrtNode x = p;
    cout<<"\n";
    while(x!=NULL){
        cout<<x->data<<"->";
        x=x->next;
    }
}
int Cout_Node(PrtNode p){
    int count =0;
    for(PrtNode pt = p; pt!=NULL; pt = pt -> next){
        count++;
    }
    return count;
}
PrtNode find_node_max(PrtNode p){
    PrtNode max = p;
    for(PrtNode ps = p;ps!=NULL;ps=ps->next){
        if(max->data<ps->data){
            max=ps;
        }
    }
    return max;
}
PrtNode Search_Node_Have_Value_X(PrtNode p,int x){
    for(PrtNode ps = p;ps!=NULL;ps=ps->next){
        if(ps->data==x){
            return ps;
        }
    }
}
void Output_Value_even(PrtNode p){
    for(PrtNode ps = p;ps!=NULL;ps=ps->next){
        if(ps->data%2==0){
            cout<<"\n "<<ps->data;
        }
    }
}
double avgs(PrtNode p){
    int sum =0 ;
    for(PrtNode ps = p ;ps != NULL;ps=ps->next){
        sum+=ps->data;
    }
    return sum/Cout_Node(p);
}
int main(){
    PrtNode Head =NULL;
    Enter_Data(Head);
    Showlist(Head);
    cout<<"\nCount element in list : "<<Cout_Node(Head);
    cout<<"\n Max in list : "<<find_node_max(Head)->data;
    int x;
    cout<<"\n enter value need find ";
    cin>>x;
    cout<<"\n check : "<<Search_Node_Have_Value_X(Head,x)->data;
    cout<<"\n Note have even";
    Output_Value_even(Head);
    cout<<"\n Point avg : "<<avgs(Head);
}