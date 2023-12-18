#include"iostream"
#include"string.h"
#include"stdlib.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        char a[100];
        gets(a);
        char b[20][50];
        char* token = strtok(a," ");
        int h=0;
        while (token!=NULL)
        {
            strcpy(b[h++],token);
            token = strtok(NULL," ");
        }
        for(int i=h;i>0;i--){
            cout<<b[i]<<" ";
        }
    }
    
}