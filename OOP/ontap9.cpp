/*Viết chương trình nhập vào
hai phân số. Tính tổng, hiệu, tích,
thương giữa chúng và xuất kết quả va rut gon fraction.*/
#include "iostream"
using namespace std;
//fraction == Phân Số
//numerals == Tử Số
//denominator == mẩu số
typedef struct {
    int numerals;
    int denominator;
}FR;
void Enter_Fraction(FR &a,FR &b){
    cout<<"\n Enter numerals fraction a : ";
    cin>>a.numerals;
    cout<<"\n Enter denominator fraction a : ";
    cin>>a.denominator;
    cout<<"\n Enter numerals fraction b : ";
    cin>>b.numerals;
    cout<<"\n Enter denominator fraction b : ";
    cin>>b.denominator;
}
void Output_Fraction(FR a){
    cout<<"\n"<<a.numerals<<"/"<<a.denominator;
}
// use algorithm Eculid 
// use recusive
// int General_Mutiple_maximun(int a,int b){
//     if(a*b==0){
//         return a+b;
//     }
//     return General_Mutiple_maximun(b,a%b);
// }
// use logic
int General_Mutiple_maximun(int a,int b){
    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
FR Compact_Fraction(FR a){
    if(a.numerals>0){
    a.numerals = a.numerals / General_Mutiple_maximun(a.numerals,a.denominator);
    a.denominator = a.denominator / General_Mutiple_maximun(a.numerals,a.denominator);
    return a;
    }else{
        a.numerals = -a.numerals;
        a.numerals = a.numerals / General_Mutiple_maximun(a.numerals,a.denominator);
        a.denominator = a.denominator / General_Mutiple_maximun(a.numerals,a.denominator);
        a.numerals = -a.numerals;
        return a;
    } 
}
FR Sum_Fraction(FR a,FR b){
    FR temp;
    temp.numerals = (a.numerals*b.denominator + b.numerals*a.denominator);
    temp.denominator = a.denominator*b.denominator;
    return temp;
}
FR Subtract_Fraction(FR a,FR b){
    FR temp;
    temp.numerals = (a.numerals*b.denominator - b.numerals*a.denominator);
    temp.denominator = a.denominator*b.denominator;
    return temp;
}
FR multiplies_Fraction(FR a,FR b){
    FR temp;
    temp.numerals = a.numerals*b.numerals;
    temp.denominator = a.denominator*b.denominator;
    return temp;
}
FR Divice_Fraction(FR a,FR b){
    FR temp;
    temp.numerals = a.numerals*b.denominator;
    temp.denominator = a.denominator*b.numerals;
    return temp;
}
int main(){
    FR a,b;
    Enter_Fraction(a,b);
    cout<<" \n sum two fraction ";
    Output_Fraction(Compact_Fraction(Sum_Fraction(a,b)));
    cout<<" \n subtract two fraction ";
    Output_Fraction(Compact_Fraction(Subtract_Fraction(a,b)));
    cout<<" \n mutiples two fraction ";
    Output_Fraction(Compact_Fraction(multiplies_Fraction(a,b)));
    cout<<" \n divice two fraction ";
    Output_Fraction(Compact_Fraction(Divice_Fraction(a,b)));
    return 0;
}