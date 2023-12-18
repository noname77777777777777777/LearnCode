/*Hãy khai báo và định nghĩa các
phương thức thiết lập cơ bản cho lớp đối
tượng CPhanSo*/
#include "iostream"
using namespace std;
class Fraction{
    private:
        int numerals;
        int denominator;
    public:
        Fraction();
        Fraction(int ,int );
        Fraction(const Fraction&);            
};
Fraction::Fraction(){
    numerals = 0;
    denominator =1;
}
Fraction ::Fraction(const Fraction &a){
    numerals = a.numerals;
    denominator = a.denominator;
}
Fraction ::Fraction(int m,int n){
    numerals = m;
    denominator =n;
}
int main(){
    Fraction();
    int m,n;
    cin>>m>>n;
    Fraction(m,n);
}