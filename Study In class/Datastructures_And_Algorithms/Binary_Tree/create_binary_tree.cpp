#include "iostream"
using namespace  std;
typedef struct TagNode{
    int data;
    struct TagNode* left;
    struct TagNode* rigth;
}Node;
typedef Node* PrtNode;
bool IsEmtpy(PrtNode p){
    return p==NULL;
}
void Init(PrtNode &p){
    p = NULL;
}
PrtNode Create_Node(int x){
    PrtNode p = new Node;
    p->data = x;
    p->left = NULL;
    p->rigth = NULL;
    return p;
}
int InsertNode(PrtNode& p,int x){
    if(p == NULL)
    {    PrtNode k = Create_Node(x);
        p = k ;
        return -1; 
    }
    else if (p->data == x)   
    {
        return 0;
    }else if(p->data < x){
        return InsertNode(p->left,x);
    }else{
        return InsertNode(p->rigth,x);
    }
}
void InsertRight(PrtNode& p,int x){
    if(p==NULL)
        cout<<" EMtry";
    else
        if(p->rigth != NULL)
            cout<<"Node is leaf";
        else 
            p->rigth = Create_Node(x);
            p=p->rigth;
}
int Root(PrtNode& p){
    if(IsEmtpy(p)==true){
        return 0;
    }
    int head = p->data;
    return head;
}
void Enter_Element(PrtNode& p){     
    int x;
    Init(p);
    do{
        cout<<"\nEnter value (Press 0 to end )";
        cin>>x;
        if(x==0)
            break;
     //   p = Create_Node(x);
       // if(x>Root(p)){
         //   InsertRight(p,x);
        //}else if(x<Root(p)){
            p=Create_Node(x);
            InsertRight(p,x);
        //}
    }while(true);
}
void ShowList(PrtNode& a){
    PrtNode q= a;
    while (q!=NULL)
    {
        cout<<"->"<<q->data;
        q= q->rigth;
    }   
}
int SearchBinary(PrtNode &p ,int x){
    if(x==p->data){
        return 0;
    }
    else if(x<p->data){
        InsertLeft(p,x);
        
    }else{
        InsertRight(p,x);
    }
}
int main(){
    PrtNode y;
    Enter_Element(y);
    ShowList(y);

}