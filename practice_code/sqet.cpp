#include"iostream"
#include"math.h"
#define Min 0.0001f;
using namespace std;
class Square{
    public:
        void Enter(int& n);
        int Sprt(int n);
};
void Square::Enter(int& n){
    cout<<"\n Enter element  n : ";
    cin>>n;
}
int Square::Sprt(int n){
    long int var = 0;
    while(var*var<=n){
        var++;
    }
        return var-1;
}
int main(){
   int n;
    Square a;
    a.Enter(n);
    cout<<a.Sprt(n);

}