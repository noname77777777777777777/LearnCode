#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
int main(){
    char c[100];
    gets(c);
    char temp[26] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        temp[c[i]-97]++;
    }
    int res=0;      
    char kt;
    for(int i=0;i<26;i++){
            if(res<=temp[i]){
               res=temp[i];
                kt = char(i)+97;
            }
    }
    cout<<kt;
}