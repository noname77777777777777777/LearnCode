/*Viết chương trình nhập
vào 2 phân số. Tìm phân số lớn
nhất và kết quả*/
#include"iostream"
using namespace std;
typedef struct Fraction{
    int numerals;
    int denominator;
}FR;
void Enter_Fraction(FR &a,FR &b){
    cout<<"\n Enter first  numerals : ";
    cin>>a.numerals;
    cout<<"\n Enter first denominator : ";
    cin>>a.denominator;
    cout<<"\n Enter second  numerals : ";
    cin>>b.numerals;
    cout<<"\n Enter second denominator : ";
    cin>>b.denominator;
} 
void Output_Fraction(FR a,FR b){
       cout<<"\n Output first Fraction : ";
       cout<<a.numerals<<"/"<<a.denominator;
       cout<<"\n Output second fraction : ";
       cout<<b.numerals<<"/"<<b.denominator;
}
FR compare_fraction(FR a,FR b){
    if((a.numerals/(float)a.denominator)>(b.numerals/(float)b.denominator)){
        return a;
    }
    return b;
}
void Output_max_fraction(FR a){
        cout<<"\n fraction max  is : ";
       cout<<a.numerals<<"/"<<a.denominator;   
}
int main(){
    FR a,b;
    Enter_Fraction(a,b);
    Output_Fraction(a,b);
    Output_max_fraction(compare_fraction(a,b));
}