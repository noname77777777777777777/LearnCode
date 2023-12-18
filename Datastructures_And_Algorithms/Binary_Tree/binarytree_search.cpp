#include "iostream"
using namespace std;
typedef struct Create_Binary_Tree
{
    int data;
    struct Create_Binary_Tree* left;
    struct Create_Binary_Tree* right;
}BT;
typedef BT*Binary_Tree;
bool Isempty(Binary_Tree b){
    return b==NULL;
}
void Init(Binary_Tree& b){
    b=NULL;
}
Binary_Tree Create_Binary(int x){
    Binary_Tree b = new BT;
    b->data = x;
    b->left = NULL;
    b->right = NULL;
        return b;
}
// int Insert_Element(Binary_Tree& b,int x){
//     if(Isempty(b)==true){
//         Binary_Tree a = Create_Binary(x);
//         if(a==NULL){
//             return -1;
//         }
//         a=b;
//         return 1;
//     }else{
//         if(x==b->data){
//             return 0;
//         }else if(x<b->data){
//             return Insert_Element(b->left,x);
//         }else{
//             return Insert_Element(b->right,x);
//         }
//     }
//}
int Insert_Element(Binary_Tree& b,int x){
    if(b!=NULL){
         if(x==b->data){
            return 0;
        }else{
            if(x<b->data){
                return Insert_Element(b->right,x);
            }else{
                return Insert_Element(b->left,x);
            }
        } 
    }else{
       b = new BT;
        if(b==NULL)
            return -1;
        b->data = x;
        b->left = b->right =NULL;
        return 1;
    }
}
void Enter_Element(Binary_Tree& b){
    int x;
    Init(b);
    do{
        cout<<"Enter Element to Binary Tree(Press -1 to end ) : ";
        cin>>x;
        if(x==-1){
            break;
        }
        if(Insert_Element(b,x) == 0 || Insert_Element(b,x)==-1){
            break;
        }
    }while(true);
}
void Out_Element_type_NLR(Binary_Tree b){
    if (b!=NULL)
    {
    cout<<b->data<<"->";
    Out_Element_type_NLR(b->left);
    Out_Element_type_NLR(b->right);
    }    
    cout<<"NULL";
}
void Out_Element_type_LNR(Binary_Tree b){
    if(b!=NULL)
    {
    Out_Element_type_NLR(b->left);
    cout<<b->data<<"->";
    Out_Element_type_NLR(b->right);
    }    
    cout<<"NULL";
}
void delete_note(Binary_Tree& p,int x){
    
}
int main(){
    Binary_Tree pHead;
    Enter_Element(pHead);
    Out_Element_type_NLR(pHead);
}