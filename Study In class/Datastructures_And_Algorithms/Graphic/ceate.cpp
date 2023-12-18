#include "stdio.h"
typedef struct Create_Node
{
    int data;
    struct Create_Node* next;
}CN;
typedef CN *Graphic;
typedef struct MatrixKe{
    Graphic DinhDau;
    Graphic Dinhcuoi;
    int sodinh;
}MK;
typedef struct MAtix_tongso
{
    Graphic Dinhdau;
    Graphic Dinhcuoi;
    Graphic Trongso;
    int sodinh;
}MKT;
bool Check_Empty(Graphic x){
    return x==NULL;
}
Graphic Last_Node(Graphic& x){
    Graphic p = x;
    while (x->next == NULL)
    {
        x = x->next;
    }
    return x;
}
void Insert_Last(Graphic& x,Graphic b,int p){
    if(Check_Empty(x)==true){
        b = x;
    }else{
        b = Last_Node(x);
        x = b->next;
    }
}
void Enter_Element(){
    
}
int main(){

}