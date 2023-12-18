#include<stdio.h>

typedef struct tagNode
{
    int info;
    struct tagNode *pNext;
}Node, *PtrNode;
void Swap(int &a,int &b){
    int temp = a;
    a= b;
    b=temp;
}
void Insert_Before(PtrNode &pHead, PreNode p ,PreNode pNew){
    Insert_After(pHead,pNew);
    Swap((p->info,pNew->info));
}
int main{

}