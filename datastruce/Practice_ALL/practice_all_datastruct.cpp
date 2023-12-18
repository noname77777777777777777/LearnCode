#include "iostream" 
using namespace std;
typedef struct tagNode{
    int data;
    struct tagNode*next;
}Node;
typedef struct List{
     Node* pHead;
     Node* pEnd;
}LinkedList;
bool checkEmpty(LinkedList list){
    return list.pHead==NULL;
}
void Init(LinkedList& list){
    list.pEnd = list.pHead = NULL;
}
Node* CreateNode(int variable){
    Node* list  = new Node;
    if(list == NULL){
        cout<<"\nerror";
        return NULL;
    }
    list->data = variable;
    list->next = NULL;
    return list;
}
void AddFirst(LinkedList&  list , Node* newList){
    if(checkEmpty(list)==true){
        list.pHead =  newList;
        list.pEnd = newList;
    }else{
        newList->next = list.pHead;
        list.pHead = newList;
    }
}
void AddLast(LinkedList&  list , Node* newList){
    if(checkEmpty(list)==true){
        list.pHead =  newList;
        list.pEnd = newList;
    }else{
       list.pEnd ->next = newList;
       list.pEnd = newList;
    }
}
void EnterList(LinkedList& list,int& number){
    int x;
    Init(list);
    do{
        cout<<"\n Enter Data (Press -1 to end) : ";
        cin>>x;
        if(x==-1){
            break;
        }
        Node* listenter;
        listenter = CreateNode(x);
        if(number == 2|| number == 1){
        AddFirst(list,listenter);
        }else if(number == 3){
        AddLast(list,listenter);
        }
    }while(true);
}
void OuputList(LinkedList& list){
    cout<<"\n output : ";
    while (list.pHead!=NULL)
    {
        cout<<list.pHead->data<<"->";
        list.pHead = list.pHead->next;
    }
    cout<<"NULL";
}
typedef struct BinaryNode{
    int info;
    struct BinaryNode *left;
    struct BinaryNode *right;   
}Binary;
typedef Binary* BinaryTree;
bool CheckBinary(BinaryTree tree){
    return tree==NULL;
}
void InitBinary(BinaryTree& Tree){
    Tree=NULL;
}
BinaryTree Create_Node_To_Tree(int variable){
    BinaryTree tree = new Binary;
    if(tree == NULL){
        return NULL;
    }
    tree->info = variable;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}
int InsertTree(BinaryTree& tree , int data){
    if(CheckBinary(tree)==true){
        BinaryTree p = Create_Node_To_Tree(data);
        if(p==NULL){
            return 0;
        }
        tree = p;
    }else{
        if(tree->info == data){
            return -1;
        }
        if(tree->info < data){
            InsertTree(tree->right,data);
        }else{
            InsertTree(tree->left,data);
        }
    }
}
void Enter_Element_In_Tree(BinaryTree& tree){
    int data;
    InitBinary(tree);
    do{
        cout<<"Enter element in tree (enter -1 to end ): ";
        cin>>data;
        if(data == -1){
            break;
        }
        
        if(InsertTree(tree,data)==-1||InsertTree(tree,data)==0){
            break;
        }
    }while(true);
}
void Output_TreeNLR(BinaryTree tree){
    if(tree!=NULL){
        cout<<"->"<<tree->info;
        Output_TreeNLR(tree->left);
        Output_TreeNLR(tree->right);
    }
}
const char hr = -1;
const char eh = 0;
const char hl = 1;
typedef struct AVL{
    int data;
    char bf;
    AVL*left;
    AVL*right;
}*TreeAVL;
// void RotateLL(TreeAVL &tree){
// //     AVL* tree1 =  tree->left;
// //     tree->left  =  tree1->right;
// //     tree1->right = tree;

// // }
void Menu(){
    cout<<"\n ================================================\n";
    cout<<"\n =1.linked list                                 =\n";
    cout<<"\n =2.Stack                                       =\n";
    cout<<"\n =3.Queue                                       =\n";
    cout<<"\n =4.Binary Tree                                 =\n";
    cout<<"\n =5.Binary Tree NL                              =\n";
    cout<<"\n =6.Graphic                                     =\n";
    cout<<"\n =Press -7 to end                               =\n";
    cout<<"\n ================================================\n";
}   
int main(){
    LinkedList list;
    LinkedList stack;
    LinkedList Queue;
    BinaryTree tree;
    int number;
    Menu();
    do{
        cout<<"\nEnter manipulation need do :"; 
        cin>>number;
        if(number == -7){
            break;
        }
        switch (number)
        {
        case 1:
            EnterList(list,number);
            OuputList(list);
            break;
        case 2:
            EnterList(stack,number);
            OuputList(stack);
            break;
        case 3:
            EnterList(Queue,number);
            OuputList(Queue);
            break;
        case 4:
            Enter_Element_In_Tree(tree);
            Output_TreeNLR(tree);
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            break;
        }
    }while(true);
}