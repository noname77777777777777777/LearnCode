#include "iostream"
using namespace std;
typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}BRT;
typedef BRT* PrtNode;
bool IsEmtpy(PrtNode a){
        return a==NULL;
}
void Init(PrtNode& a){
    a = NULL;
}
// int Insertion_Node(PrtNode& a,int x){
//     if(a!=NULL){
//         //node trung nhau
//         if(x == a->data){
//             return 0;
//         }else {
//             if(x < a->data){
//                 return Insertion_Node(a->left,x);
//             }else{
//                 return Insertion_Node(a->right,x);
//             }
//         }
//     }else{
//         a = new BRT;
//         if(a==NULL)
//             // Node la
//             return -1;
//         a->data = x;
//         a->left = a->right = NULL;
//         return 1;
//     }
// }
int Insert_Element(PrtNode& b,int x){
    if(b!=NULL){
         if(x==b->data){
            return 0;
        }else{
            if(x<b->data){
                return Insert_Element(b->left,x);
            }else{
                return Insert_Element(b->right,x);
            }
        } 
    }else{
       b = new BRT;
        if(b==NULL)
            return -1;
     
        b->data = x;
        b->left = b->right =NULL;
        return 1;
    }
}
void Enter_element(PrtNode& a){
    int x;
     Init(a);
    do{
        cout<<"\n Enter x  (Press -1 to end ) : ";
        cin>>x;
        if(x==-1){
            break;
        }
        if(Insert_Element(a,x)==0 || Insert_Element(a,x) == -1){
            break;
        }
    }while(true);
}
void Out_Element(PrtNode a){
    if(a!=NULL){
        cout<<a->data<<"->";
        Out_Element(a->left);
        Out_Element(a->right);
    }
}
void findfarther(PrtNode root,int x,PrtNode& preroot){
    if(root == NULL){
        return;
    }
    if(root->data == x){
        return;
    }
    if(root->data > x){
        findfarther(root->left,x,preroot);
    }else{
        findfarther(root->right,x,preroot);
    }
}
void Enter_value(int& x){
    printf("\nEnter value need find");
    cin>>x;
}
 
int main(){
    PrtNode a;
    PrtNode check;
    Enter_element(a);
    Out_Element(a);
    int x;
    Enter_value(x);
    findfarther(a,x,check);
    printf("\n element farther %d",check->data);   
}