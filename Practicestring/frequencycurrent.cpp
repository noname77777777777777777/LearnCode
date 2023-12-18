#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
int main(){
    char c[100];
    gets(c);
    char e;
    int count[26] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        count[c[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            e=(i+'a');
        cout<<e<<":"<<count[i]<<endl;
        }
    }
}