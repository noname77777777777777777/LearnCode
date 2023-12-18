#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
int main(){
    char s[100];
    gets(s);
    char *token = strtok(s," ");
    while((token)!=NULL){
        cout<<token<<endl;
        token = strtok(NULL," ");
    }
    return 0;
}