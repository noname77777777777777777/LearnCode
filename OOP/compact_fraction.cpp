/*Viết
chƣơng trình nhập
vào một phân số. Rút
gọn phân số đó và
xuất kết quả.
*/
#include "iostream"
using namespace std;
// typedef struct FractionCP{
//         int numerals;
//         int denominator;
// }FP;
class Fraction{
    private:
            int numerals;
            int denominator;
    public:
        void Enter_Fraction();
        void Compact_Fraction();
        // int General_Mutiple_Maximun();
        void Output_Fraction(); 
};
void Fraction::Enter_Fraction(){
    cout<<"\n Enter numerals : ";
    cin>>numerals;
    cout<<"\n Enter denominator : ";
    cin>>denominator;
}
int General_Mutiple_Maximun(int a,int b){
    // if(denominator*numerals==0){
    //     return denominator+numerals;
    // }
    //     return General_Mutiple_Maximun(denominator,numerals%denominator);
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
void Fraction::Compact_Fraction(){
    int variables = General_Mutiple_Maximun(numerals,denominator);
    numerals =  numerals / variables;
    denominator = denominator / variables;
}
void Fraction::Output_Fraction(){
    cout<<"\n Fraction after compact : ";
    cout<<numerals<<"/"<<denominator;
}
int main(){
    Fraction a;
    a.Enter_Fraction();
    a.Compact_Fraction();
    a.Output_Fraction();
    return 0;
}