#include "iostream"
#define MAX 100
#define inputfile "4.txt"
#include "fstream"
#include "string.h"
#include "conio.h"
using namespace std;
typedef struct Array{
    int n;
    int A[MAX][MAX];
}A;
class Readfile_Recordfile
{
private:
    A a;
public:
    void Read_File(const char name_file[100]);
    void Record_File();
};

void Readfile_Recordfile::Read_File(const char name_file[100]){
    fstream f;
    f.open(name_file,ios::in);
    f >> a.n;
    for(int i = 0 ;i < a.n ; i++){
        for(int j = 0;j < a.n ; j++){
            f>>a.A[i][j];
        }
    }
    f.close();
    return;
}
void Readfile_Recordfile::Record_File(){
        cout<<"\n Name file "<<inputfile;
    cout<<"\n Amount Elemnt In Array ";
    cout<<a.n;
    cout<<"\n";
    for(int i = 0 ; i < a.n ; i++){
        for(int j = 0 ; j < a.n ; j++){
            cout<<"\t";
            cout<<a.A[i][j];
        }
        cout<<"\n";
    }
}

