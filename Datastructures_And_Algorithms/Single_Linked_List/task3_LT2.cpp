#include "iostream"
using namespace std;
typedef struct tagNode{
    int data;
    tagNode * next;
}Node;
typedef Node * PrtNode;
bool IsEmtpy(PrtNode Head){
    return Head == NULL;
}
void Init(PrtNode &pHead){
    pHead = NULL;
}
PrtNode CreateNode(int x){
    PrtNode p = new Node;
    p->data = x;
    p -> next = NULL;
    return p;
}
void InsertFirst(PrtNode &p , PrtNode x){
    if(IsEmtpy(p) == true){
        p=x;
    }
    else{
        x->next = p;
        p=x;
    }

}
void  Enter_Element(PrtNode& pHead){
   int x;
    Init(pHead);
   do{

    cout<<"\n Enter Value (Enter 0 to end) : ";
    cin>>x;
    if(x==0){
        break;
    }
    PrtNode p = CreateNode(x);
    InsertFirst(pHead,p);
   }while(true);
}
void showElement(PrtNode p){
    PrtNode x = p;
    cout<<"\n";
    while (x!=NULL)
    {
        cout<<"->"<<x->data;
        x=x->next;
    }
    
}
int main(){
    PrtNode pHead =NULL;
    Enter_Element(pHead);
    showElement(pHead);
}