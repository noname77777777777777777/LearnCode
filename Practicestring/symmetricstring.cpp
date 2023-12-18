#include "iostream" 
#include "stdlib.h"
#include "string.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    while (n--)
    {
        char c[1000];
        gets(c);
        int temp[256]={0};
        for(int i=0;i<strlen(c);i++){
            temp[c[i]]++;
        }
        int res = 0;
        for(int i=0;i<256;i++){
            if(c[i]%2==1){
                res ++;
            }
        }
            if(res<=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO";
            }
        }
}