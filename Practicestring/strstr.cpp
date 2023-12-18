#include "iostream"
#include "string.h"
using namespace std;
int main(){
    char a[1000],b[1000000];
    gets(a);
    gets(b);
    if(strstr(b,a)!=NULL){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}