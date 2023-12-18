#include"iostream"
using namespace std;
class Test{
    private: 
        int a;
        void f();
    public:
        int b;
        void c();
    protected:
        int x;
        void e();
};
void Test::f(){
    a=1;
    b=2;
    x=3;
}
void Test::c(){
    a=4;
    b=5;
    x=6;
}
void Test::e(){
    a=10;
    b=11;
    x=12;
}
int main(){
 Test x;
 x.a=10;
 x.f();
 x.b=12;
 x.c();
    x.x=13;
    x.e();

}