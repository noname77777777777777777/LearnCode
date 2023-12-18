#include "iostream"
using namespace std;
    int current_size = -1;
    const int Max_Size = 5;
    int stack[Max_Size];
bool isEmpty(){
    return (current_size == -1);
}
bool isFULL(){
    return Max_Size == current_size;
}
void push(int data){
            if(!isFULL()){
                current_size++;
                stack[current_size] = data;
            }else{
                cout<<" memory overflow ";
            }
}
int top(){
    if(!isEmpty()){
        int data = stack[current_size];
            return data;
    }else{
        
    }
}
int main(){
    int stack[Max_Size] = {0,1,2,3};
    push(3);
    for(int i=0;i<Max_Size;i++){
        cout<<stack[i]<<" ";
    }
    return 0;
}