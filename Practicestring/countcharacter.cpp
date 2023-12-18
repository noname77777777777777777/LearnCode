#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
int main(){
    char a[100];
    gets(a);
    char *token = strtok(a," ");
    int n=0;
    while (token != NULL)
    {   
        n++;
        token=strtok(NULL," ");
    }
    cout<<n;
    return 0;
}