#include "iostream"
#include "string.h"
using namespace std;
int main(){
    int q;
    cin>>q;
    getchar();
    for(int i=1;i<=q;i++)
    {
        char a[50];
        gets(a);
        char c[20][100];
        int n=0;
        char* token = strtok(a," ");
        while (token!=NULL)     
        { 
            strcpy(c[n++],token);
            token = strtok(NULL," ");
        }
        int res = 0;
        for(int i=0;i<n;i++){
            int ok =0;
            for(int j=0;j<i;j++){
                if(strcmp(c[i],c[j])==0){
                    ok = 1;
                    break;
                }
            }
            if(ok==1){
                cout<<c[i];
                res=1;
                break;
            }
            else if(ok!=1){
                cout<<"-1";
                break;
            }
        }
    }
}