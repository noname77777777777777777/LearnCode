#include "iostream"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
using namespace std;
void standardization(char c[]){
    c[0] = toupper(c[0]);
    for(int i=1;i<strlen(c);i++){
        c[i] = tolower(c[i]);
    }
}
int main(){
    char a[100][100];
    int n=0;
    char c[1000];
    gets(c);
    char *token = strtok(c," ");
    while(token!=NULL){
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    for(int i=0;i<n;i++){
        standardization(a[i]);
        cout<<a[i]<<" ";
        
    }
        standardization(a[n-1]);
        cout<<","<<a[n-1];
}