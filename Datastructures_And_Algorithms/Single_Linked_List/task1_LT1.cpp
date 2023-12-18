#include "iostream"
#include "string"
using namespace std;
typedef struct Student{
    char CST[9];
    char Name[31];
    float AVG;
}ST;
typedef struct DataNode{
    ST data;
    struct DataNode* next;
}Node;
typedef Node* PrtNode;
PrtNode Create_Node(){
    ST s;
    cout<<"\n Enter Code Student : ";
    cin>>s.CST;
    cout<<"\n Enter Name Student : ";
    cin>>s.Name;
    cout<<"\n Enter AVG point : ";
    cin>>s.AVG;
    PrtNode temp = new Node;
    temp->data = s;
    temp->next = NULL;
    return temp;
}
bool IsEmpty(PrtNode sv){
    return sv == NULL;
}
void Insert_Element_Last(PrtNode sv, int x){
    PrtNode tmp = Create_Node();
    if(sv == NULL){
        sv=tmp;
    }else{
        tmp->next = sv;
        sv = tmp;
    }
}
void Output_Student(ST a){
    cout<<"\n ===============";
    cout<<"\n Code Student : "<<a.CST;
    cout<<"\n Name : "<<a.Name;
    cout<<"\n AGV : "<<a.AVG; 
}
void D_DS(PrtNode a){
    cout<<"\n============\n";
    while (a!=NULL)
    {
        Output_Student(a->data);
        a= a->next;     
    }
}
int main(){
    PrtNode Head = NULL;
    int x;
    cin>>x;
    Insert_Element_Last(Head,x);
    D_DS(Head);
}