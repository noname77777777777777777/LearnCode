// s(x,n) = x1 + x2 + x3 + ... + xn
// Xây dựng danh sách liên kết đơn có pHead, pTail. Nhập x, n tạo thành danh sách liên kết ( Mỗi nút có 2 giá trị x và i, i chạy từ 1 -> n ), dùng con trỏ để khai báo cho danh sách liên kết .
// Viết hàm xuất ra tổng những thành phần trong danh sách liên kết .
#include  "iostream"
using namespace std;
typedef struct tagNode{
    int datax;
    int datai;
    struct tagNode* next;
}Node,*PrtNode;
bool  IsEmpty(PrtNode a){
    return a==NULL;
}
void Init(PrtNode& a){
    a=NULL;
}
PrtNode Create_Node(int x,int i){
    PrtNode b = new Node;
    b->datax = x;
    b->datai = i;
    b->next = NULL;
        return b;
}
PrtNode LastNode(PrtNode& a){
    PrtNode q = a;
    while(q->next==NULL){
        q=q->next;
    }
    return q;
}
void Insert_Last(PrtNode& a,int x,int i){
    PrtNode b = Create_Node(x,i);
    if(IsEmpty(a)==true){
         b = a;
    }else{
        LastNode(b)->next = a;
    }
}
void Enter_Element(PrtNode& a){
        int x,i,n;
        cout<<"\nEnter x : ";
        cin>>x;
        cout<<"\n Enter n : ";
        cin>>n;
        for(int i = 0 ;i< n;i++){
            Insert_Last(a,x,i);
        }
}
void Out_put(PrtNode p){
    while (p!=NULL )
    {
        cout<<p->datax<<"^"<<p->datai<<"  ";
        p=p->next;
    }
}

int main(){
    PrtNode a;
    Enter_Element(a);
    Out_put(a);
}