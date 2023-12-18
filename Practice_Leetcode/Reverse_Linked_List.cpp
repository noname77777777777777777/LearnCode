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
    ListNode* reverseList(ListNode* &head) {
        ListNode* prev  = NULL;
        ListNode* tail = head;
        while (head!=NULL)
        {
            ListNode* next = tail->next;
            tail->next = prev;
            prev = tail;
            tail = next;
        }
        return tail;
        
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
};
int main(){

}