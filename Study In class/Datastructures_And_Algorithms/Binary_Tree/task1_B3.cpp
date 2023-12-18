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
int Insertion_Node(PrtNode& a,int x){
    if(a!=NULL){
        //node trung nhau
        if(x == a->data){
            return 0;
        }else {
            if(x < a->data){
                return Insertion_Node(a->left,x);
            }else{
                return Insertion_Node(a->right,x);
            }
        }
    }else{
        a = new BRT;
        if(a==NULL)
            // Node la
            return -1;
        a->data = x;
        a->left = a->right = NULL;
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
        if(Insertion_Node(a,x)==-0 || Insertion_Node(a,x) == -1){
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
int main(){
    PrtNode a;
    Enter_element(a);
     Out_Element(a);
}