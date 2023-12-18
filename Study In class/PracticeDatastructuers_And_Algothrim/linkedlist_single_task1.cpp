#include "iostream"
using namespace std;
typedef struct node{
    int data;
    struct node* next;
}Node;
typedef Node* Prtnode;
bool Isempty(Prtnode p){
    return p==NULL;
}
void Init(Prtnode& p){
    p = NULL;
}
Prtnode Create_node(int x){
    Prtnode p = new Node;
    p->data =x;
    p->next = NULL;
    return p;
}
void Insert_First(Prtnode& p,Prtnode b){
    if(Isempty(p)==true){
        p=b;
    }else{
        b->next = p;
        p=b;
    }
}
int Cout_Element_List(Prtnode& p){
    Prtnode k = p;
    int count = 0;
    while (k!=NULL)
    {
        count ++;
        k = k->next;
    }
    return count;
}
Prtnode Last_Node(Prtnode p){
    if(Isempty(p)==true){
        return NULL;
    }
    Prtnode c = p;
    while (c->next!=NULL)
    {   
        c=c->next;
    }
    return c;
}
void Insert_Last(Prtnode& p,Prtnode b){
    if(Isempty(p)==true){
        p=b;
    }else{
       Last_Node(p)->next = b;
    }
}
void Enter_Node(Prtnode& p){
    int n;
    Init(p);
    do{
        cout<<"\nEnter value to list (Enter -1 to end ) : ";
        cin>>n;
        if(n==-1){
            break;
        }
        Prtnode b = Create_node(n);
        //Insert_First(p,b);
        Insert_Last(p,b);
    }while(true);
}
void Output_node(Prtnode p){
    Prtnode c = p;
    while (c!=NULL)
    {
        cout<<c->data<<"-> ";
        c = c->next;
    }
    cout<<"NULL"<<endl;
}
void Enter_Value_Need_find(int& x){
    cout<<"\n Enter Value Need Find : ";
    cin>>x;
}
bool check_value_need_find(Prtnode& p,int x){
    Prtnode c = p;
    while (c!=NULL)
    {
        if(c->data == x){
            return true;
        }
        c= c->next;
    }
    return false;
}

void Enter_Value_Need_Insert(int& y){
    cout<<"\n Enter Value Need Insert : ";
    cin>>y;
}
Prtnode findinsertafternode(Prtnode& p,int x){
    Prtnode k = p;
    while (k!=NULL)
    {
       if(k->next->data==x){
        return k;
       }
        k=k->next;
    }
}
Prtnode findinsertbeforenode(Prtnode& p,int x){
    Prtnode k = p;
    while (k!=NULL)
    {
       if(k->data==x){
        return k;
       }
        k=k->next;
    }
}
void Insertafter(Prtnode& p,int y,int x){
    Prtnode k = p;
    Prtnode q = Create_node(y);
    if(k->data == x){
        q->next = k->next;
        k->next = q;
    }else
    {
        q->next = findinsertafternode(k,x)->next;
        findinsertafternode(k,x)->next = q;
    }
}
void Insertbefore(Prtnode& p,int y,int x){
    Prtnode k =p;
    Prtnode q = Create_node(y);
    if(k->data == x){
        q->next = k->next;
        k->next = q;
    }else
    {
        q->next=findinsertbeforenode(k,x)->next;
        findinsertbeforenode(k,x)->next=q;
    }     
}
void Insert_y_to_location_x(Prtnode& p,int x,int y){
    if(check_value_need_find(p,x)==true){
        Enter_Value_Need_Insert(y);
        //Insertafter(p,y,x);
        Insertbefore(p,y,x);
    }else{
        cout<<"\n error, so not find x in list\n";
    }
}
void Enter_value_need_delete(int& x){
    cout<<"\n Enter value need delete : ";
    cin>>x;
}
Prtnode find_node_delete(Prtnode& p,int x){
    Prtnode k = p;
    while(k!=NULL){
        if(k->next->data == x){          
            return k;
        }
        k=k->next;
    }
}
Prtnode find_node_delete2(Prtnode& p,int x){
    Prtnode k = p;
    while(k!=NULL){
        if(k->data == x){          
            return k;
        }
        k=k->next;
    }
}
void Delete_Node(Prtnode& p,int x){
    Enter_value_need_delete(x);
    Prtnode k = p;
    if(k->data == x){
        k->data = k->next->data;
        k->next = k->next->next;
    }
    else{
        find_node_delete(k,x)->next =  find_node_delete2(k,x)->next;
    }
}
void swap(int& a,int& b){
    int temp = a;
    a = b;
    b= temp;
}

void SortNode(Prtnode& p){
    cout<<"\nSort Interchange ";
    for(Prtnode i = p ; i != NULL;i = i->next){
        for(Prtnode j = i->next ;j!=NULL;j=j->next){
            if(i->data > j->data){
                swap(i->data,j->data);
            }
        }
    }
}
int main(){
    Prtnode phead;
    int x,y,z;
    Enter_Node(phead);
    Output_node(phead);
    Enter_Value_Need_find(x);
    Insert_y_to_location_x(phead,x,y);
    Output_node(phead);
    Delete_Node(phead,z);
    Output_node(phead);
    SortNode(phead);
    Output_node(phead);
}