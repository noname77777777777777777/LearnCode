#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
int check(char a[]){
    int temp[26] = {0};
    for(int i=0;i<strlen(a);i++){
        temp[a[i]-'a'] = 1;
    }
    for(int i=0;i<26;i++){
        if(temp[i]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char a[1000];
    gets(a);
    if(check(a)==0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}