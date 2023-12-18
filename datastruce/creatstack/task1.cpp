#include<stdio.h>

typedef struct tagNode
{
    int info;
    struct tagNode *pNext;
}Node, *PtrNode;

void Init(PtrNode &pHead)
{
    pHead = NULL;
}
bool IsEmpty(PtrNode pHead)
{
    return pHead==NULL;
}
void InsertFirst(PtrNode &pHead, PtrNode pNew)
{
    if(IsEmpty(pHead)==true)
        pHead = pNew;
    else
    {
        pNew->pNext = pHead; //Noi pNew vao pHead
        pHead = pNew; //Cap nhat pHead la phan tu pNew
    }
}
PtrNode LastNode(PtrNode pHead)
{
    PtrNode p = pHead;
    while(p->pNext!=NULL)
        p = p->pNext;
    return p;
}
void InsertLast(PtrNode &pHead, PtrNode pNew)
{
    if(IsEmpty(pHead)==true)
        pHead = pNew;
    else
    {
        PtrNode p = LastNode(pHead); //Tim node cuoi cung
        p->pNext = pNew;
    }
}
PtrNode CreateNode(int x)
{
    PtrNode p = new Node;
    p->info = x;
    p->pNext = NULL;

    return p;
}
void Nhap(PtrNode& pHead)
{
    /*int n;
    printf("So luong phan tu = ");
    scanf("%d", &n);

    Init(pHead);
    for (int i = 0; i < n; i++)
    {
        int x;
        printf("Gia tri = ");
        scanf("%d", &x);
        PtrNode pNew = CreateNode(x);
        InsertLast(pHead, pNew);
    }*/
    int x;
    Init(pHead);
    do{
        printf("Nhap gia tri (Nhap 0 ket thuc): ");
        scanf("%d", &x);
        if(x==0)
            break;
        PtrNode pNew = CreateNode(x);
        InsertLast(pHead, pNew);
    }while(true);
}
void Xuat(PtrNode pHead)
{
    PtrNode p=pHead;
    while(p!=NULL)
    {
        printf("%d ", p->info);
        p=p->pNext;
    }
}
void InsertAfterP(PtrNode &pHead, PtrNode p, PtrNode pNew)
{
    PtrNode pSau = p->pNext;
    p->pNext = pNew;
    pNew->pNext=pSau;
}
PtrNode TimMax(PtrNode pHead)
{
    PtrNode pMax = pHead;
    for(PtrNode p=pHead->pNext; p!=NULL; p=p->pNext)
        if(p->info>pMax->info)
            pMax=p;
    return pMax;
}

void ChenXSauMax(PtrNode &pHead, int x)
{
    PtrNode pMax = TimMax(pHead);
    PtrNode pX= CreateNode(x);
    InsertAfterP(pHead, pMax, pX);
}
// dem so luong 
// int count(PtrNode )
// find node have value x
PtrNode Search(PtrNode phead,int x){
    for(PtrNode p=phead; p!=NULL;p=p->pNext){
        if(p->info==x){

            return p;
        }
    }
    return NULL;
}
//fing vga node odd number 
// double Avg(PtrNode phead){
//     int d=0, s=0;
//     for(p = phead ;p!=NULL ;p->pNext){
//         if(p->info%2!=0){
//             d++;
//             s+=p->info;
//         }
//     }

// }
// void Insert_Before(PtrNode &pHead, PtrNode p ,PtrNode pNew){
//     InsertAfterP(pHead,pNew);
//     Swap((p->info,pNew->info));
// }
void Swap(int &a,int &b){
    int temp = a;
    a= b;
    b=temp;
}

bool Insertyintox(PtrNode &pHead,int x,int y){
    PtrNode px = Search(pHead,x);
    if(px==NULL){
        return false;
    }else{
    InsertAfterP(pHead,px,CreateNode(y));
    return true;
    }
}
bool Del1node(PrtNode &pHead)
int main()
{
    PtrNode pHead,px;
    int x,y;
    Nhap(pHead);
    printf("Gia tri cua danh sach lien ket don: ");
     Xuat(pHead);
    // printf("\nNhap gia tri can chen = ");
    // scanf("%d", &x);
    // ChenXSauMax(pHead, x);
    // printf("Gia tri cua danh sach lien ket don sau khi chen: ");
    // Xuat(pHead);
    // printf("\n Enter value need find = ");
    // scanf("%d",&x);
    // px = Search(pHead,x);
    // if(px == NULL){
    //     printf("\n Khong ton tai");
    // }else{
    //     printf("\n Ton tai");
    // }
    printf("\nNhap gia tri can chen = ");
     scanf("%d", &x);
     printf("\nNhap gia tri can chen = ");
     scanf("%d", &y);
    bool kq =Insertyintox(pHead,x,y);
    if(kq==false){
        printf("\n Ktt");
    }else{
        printf("\ncdcvd");
        Xuat(pHead);
    }
    return 0;
}
