#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
int main(){
    char c[100];
    gets(c);
    char w[10];
    cin>>w;
    int n=0;
    char a[20][100];
    char *token = strtok(c," ");
    while (token!=NULL)
    {
        if(strcmp(token,w)!=0){
                //  cout<<token<<" ";
            strcpy(a[n],token);
            n++;
        }
        token = strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
}