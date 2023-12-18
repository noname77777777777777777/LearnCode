#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
void function(char a[][50],int n){
    for(int i=0;i<n;i++){
        int m=i;
        for (int j = i+1; j < n; j++)
        {
            if(strcmp(a[j],a[m])<0){
                m=j;
            }
        }   
        char temp[100];
            strcpy(temp,a[m]);
            strcpy(a[m],temp);
            strcpy(a[i],temp);
    }
}
int cmp(const void* a,const void* b){
    char* x = (char*)a;
    char* y = (char*)b;
    if(strcmp(x,y)<0){
        return -1;
    }
    else return 1;
}
int main(){
    char e[20][50];
    int n=0;
    char c[1000];
    gets(c);
    char *token = strtok(c," ");
    while (token!=NULL)
    {
        strcpy(e[n],token);
        ++n;
        token = strtok(NULL," ");
    }
    // function(e,n);
    
    qsort(e,n,sizeof(e[0]),cmp);
    for(int i=0;i<n;i++){
        cout<<e[i]<<" ";
    }
    return 0;
}