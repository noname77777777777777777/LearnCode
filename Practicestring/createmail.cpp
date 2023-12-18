#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
char Getcharfirt(char a[]){
      for(int i=0;i<strlen(a);i++){
        a[0] = tolower(a[0]);
            return a[0];
    }
}
void lower(char a[]){
    for(int i=0;i<strlen(a);i++){
        a[i] = tolower(a[i]);
    }
}
int main(){
    char c[100];
    gets(c);
    char a[10][100];
    int n=0;
    string s = "@gmail.com";
    char* token = strtok(c," ");
    while (token!=NULL)
    {
        strcpy(a[n],token);
        n++;
        token = strtok(NULL," ");
    }
    lower(a[n-1]);
    cout<<a[n-1]<<Getcharfirt(a[0])<<Getcharfirt(a[1])<<s;
}