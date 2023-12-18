#include "iostream"
using namespace std;
class addbinary
{
private:
    string a;
    string b;
public:
    void addelement();
    string mustbinary();
};
void addbinary::addelement(){
    cout<<"\nEnter number binary a = ";
    cin>>a;
    cout<<"\nEnter num,ber binary b =";
    cin>>b;
}
string addbinary::mustbinary(){
    
}
int main(){
    addbinary z;
    z.addelement();
    cout<<"\nResult == "<<z.mustbinary();
    return 0;
}