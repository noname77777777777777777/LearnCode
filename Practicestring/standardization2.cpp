#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
void standardization2(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i] = toupper(a[i]);
    }
}
void standardization(char a[]){
    a[0] = toupper(a[0]);
    for(int i=1;i<strlen(a);i++){
        a[i] = tolower(a[i]);
    }
}
int main(){
    char c[100];
    gets(c);
    char a[20][100];
    int n=0;
    char* token= strtok(c," ");
    while (token!=NULL)
    {   
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    standardization2(a[n-1]);
    cout<<a[n-1]<<",";
    for(int i=0;i<n-1;i++){
        standardization(a[i]);
        cout<<a[i]<<" ";
    }             
    return 0;                                                                              
}