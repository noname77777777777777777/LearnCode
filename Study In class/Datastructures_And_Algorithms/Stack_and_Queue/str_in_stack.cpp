#include "iostream"
#include "string.h"
using namespace std;
typedef struct Creat_Stack
{
    string data;
    struct Creat_Stack*next;
}ST;
typedef ST*Stack;
bool IsEmpty(Stack s){
    return s == NULL;
}
Stack Create_Node_In_Stack(string s){
    Stack p = new ST;
    p->data = s;
    p->next = NULL;
    return p;
}
void Enter_String(string& s){
    cout<<"Enter String : ";
    cin>>s;
}
void Convert_string_to_char(string& s,char c[40]){
    for(int i=0;i<s.length();i++){
        c[i] = s[i];
    }
}
void Cut_Node_to_Stack(Stack& p,string s,char c[40],char q[40]){
    char* token; 
    token = strtok(c," ");
    int temp = 0;
    while (token != NULL)
    {
        strcpy(q[temp++],token);       
        token = strtok(NULL," ");
    }
}

int main(){
    string s;
    char c[40];
    Enter_String(s);
    Convert_string_to_char(s,c);
    
}