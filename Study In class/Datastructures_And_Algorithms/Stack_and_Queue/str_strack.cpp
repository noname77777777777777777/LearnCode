#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
typedef struct Stack
{
    char data[40];
    struct Stack* next;
}ST;
typedef ST* PrtStack;
bool IsEmpty(PrtStack s){
    return s==NULL;
}
void Init(PrtStack& s){
    s = NULL;
}
void Enter_String(char s[]){
    cout<<"\n Enter string ";
    cin.getline(s,sizeof(s));
}
void stringtostack(PrtStack& a,char s[]){
    PrtStack p = a;
    char* token = strtok(s," ");
    while (token!=NULL)
    {   
        token = strtok(NULL," ");
        token = p->data  ;
        p= p->next;
    }
}
void Output_Elemnt(PrtStack a){
    PrtStack p = a;
    while (p!=NULL)
    {
        cout<<"->" <<p->data;
        p=p->next; 
    }
    cout<<"\\";
}
int main(){
    char  b[40];
    PrtStack a;
    Enter_String(b);
    stringtostack(a,b);
    Output_Elemnt(a);
}