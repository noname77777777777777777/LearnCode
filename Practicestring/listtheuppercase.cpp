#include "iostream"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
using namespace std;
int chech(char c[]){
    for(int i=0;i<strlen(c);i++){
        if(!isupper(c[i])){
            return 0;
        }
    }
    return 1;
}
int main(){
    char c[100];
    fflush(stdin);
    gets(c);
    char *token = strtok(c," ");
    while (token!=NULL)
    {
        if(chech(token)==1){
            cout<<token<<endl;
        }
        token = strtok(NULL," ");
    }
}
