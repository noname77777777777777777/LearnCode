#include "iostream"
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        while (list1!=NULL)
        {
            if(list1->val > list1->next->val){
                swap(list1->val,list1->next->val);
            }
        }
        return list1;      
    }
    void Enter_List_Node(ListNode* &list){
        int n;
        cout<<"\n Enter Amount Element : ";
        cin>>n;
        int x;
        ListNode* temp = nullptr;
        for(int i = 0 ; i < n ; i++){
            cout<<"\nEnter Elment other "<<i+1<<" : ";
            cin>>x;
            if(list == NULL){
                list = new ListNode(x);
                temp = list;
            }else{
                temp->next = new ListNode(x);
                temp = temp->next;  
            }
        }
    }
    void Out_put_List_Node(ListNode* list){
        cout<<"\n Output list : ";
        if(list == NULL ){
            cout<<"\n The list is empty ";
        }
        while (list!=NULL)
        {
           cout<<"\n" << list->val;
            list = list->next;
        }
    }
    ListNode* merge_two_list(ListNode* ListNode1,ListNode* ListNode2){
        ListNode* merge_listnode=NULL;
        ListNode* tail = NULL;
        while (ListNode1!=NULL && ListNode2!=NULL)
        {
            ListNode* newNode;
            if(ListNode1->val < ListNode2->val){
                newNode = new ListNode(ListNode1->val);
                ListNode1 = ListNode1->next;
            }else{
                newNode = new ListNode(ListNode2->val);
                ListNode2 = ListNode2->next;
            }
            if(merge_listnode == NULL){
                merge_listnode = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
            if (ListNode1 != NULL) {
                if (merge_listnode == NULL) {
                    merge_listnode = ListNode1;
                } else {
                    tail->next = ListNode1;
                }
            }
            if (ListNode2 != NULL) {
                if (merge_listnode == NULL) {
                    merge_listnode = ListNode2;
                } else {
                    tail->next = ListNode2;
                }
            }
            
        }
        return merge_listnode;
    }
    
};
int main(){
    ListNode* a = NULL;
    ListNode* b = NULL;
    Solution z;
    z.Enter_List_Node(a);
    z.Enter_List_Node(b);  
    z.Out_put_List_Node(z.merge_two_list(a,b));
    
}