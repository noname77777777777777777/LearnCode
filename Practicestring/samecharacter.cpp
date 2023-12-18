#include "stdlib.h"
#include "string.h"
#include "iostream"
using namespace std;
class SameName{
    private :
        int n;
        char* c;
        char** a;
    public:
        void allocationpointer(int n,char* c,char** a);
        void cutcharacter(int n,char* c,char** a);
        int resultsamecharacter(int n,char **a);
};
void SameName::allocationpointer(int n,char* c,char** a){
            c = new char[1001];
            a = new char[20][1000];
}
void SameName::cutcharacter(int n,char* c,char** a){
    char* token = strtok(c," ");
    int n=0;
    while (token != NULL)
    {
        strcmp(a[n++],token);
        token = strtok(NULL," ");
    }
}
int SameName::resultsamecharacter(int n,char){

}
int main(){
    int amount;
    cin>>amount;
    while (amount--)
    {
    }
    cout<<;    
}