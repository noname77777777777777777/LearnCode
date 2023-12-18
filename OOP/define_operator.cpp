/*Bài 01: Hãy định nghĩa các toán 
tử +,-,*,/,+=,-=,*=,/=,++,-- cho lớp 
đối tượng CPhanSo
 Bài 02: Hãy định nghĩa các toán 
tử +,-,*,/,+=,-=,*=,/= cho lớp đối 
tượng CSoPhuc.
 Bài 03: Hãy định nghĩa các toán 
tử *,/,*=,/= cho lớp đối tượng 
CDonThuc.
 Bài 04: Hãy định nghĩa các toán 
tử +,-,*,/,+=,-=,*=,/= cho lớp đối 
tượng CDaThuc*/
#include"iostream"
using namespace std;
class Fraction{
    private:
        int numerals;
        int denominator;
    public:
        Fraction operator+(Fraction);
        Fraction operator-(Fraction);
        Fraction operator*(Fraction);
        Fraction operator/(Fraction);
        Fraction operator+=(Fraction);
        
};
int main(){

}