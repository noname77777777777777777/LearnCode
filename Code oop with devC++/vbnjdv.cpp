#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;
int main(){
	char c[100];
    gets(c);
    char *token = strtok(c," ");
    if(token!=NULL){
        cout<<token<<endl;
        token = strtok(NULL," ");
    }
}
