/*Viết chương trình nhập
vào 2 số phức. Tính tổng, hiệu,
tích và xuất kết quả.*/
#include "iostream"
using namespace std;
//complex number == số phức
//virtual part == phần ảo 
typedef struct Complex{
    int realpart;
    int virtualpart;
}CP;
void Enter_complex(CP &a,CP &b){
    cout<<"\n Enter complex number";
    cout<<"\n Enter first the real part : ";
    cin>>a.realpart;
    cout<<"\n Enter first the virtual part : ";
    cin>>a.virtualpart;
    cout<<"\n Enter second the real part : ";
    cin>>b.realpart;
    cout<<"\n Enter second the virtual part : ";
    cin>>b.virtualpart;
}
void Output_Complex(CP a,CP b){
    cout<<"\n Output first complex number "<<endl;
    cout<<a.realpart<<" + "<<a.virtualpart<<"i";
    cout<<"\n Output second complex number "<<endl;
    cout<<b.realpart<<" + "<<b.virtualpart<<"i";
}
void Output_One_complex(CP a){
    cout<<a.realpart<<" + "<<a.virtualpart<<"i";
} 
CP Sum_two_complex(CP a,CP b){
    CP c;
    c.realpart = a.realpart+b.realpart;
    c.virtualpart=a.virtualpart+b.virtualpart;
        return c;
}
CP Subtract_two_complex(CP a,CP b){
    CP c;
    c.realpart = a.realpart - b.realpart;
    c.virtualpart = a.virtualpart - b.virtualpart;
    return c;
}
CP Mutiplites_two_complex(CP a,CP b){
    CP c;
    c.realpart = (a.realpart*b.realpart)-(a.virtualpart*b.virtualpart);
    c.virtualpart = (a.realpart*b.virtualpart)+(a.virtualpart*b.realpart);
    return c;
}
int main(){
    CP a,b;
    Enter_complex(a,b);
    Output_Complex(a,b);
    cout<<"\nSum two complex\n";
    Output_One_complex(Sum_two_complex(a,b));
    cout<<"\nSubtract two complex\n";
    Output_One_complex(Subtract_two_complex(a,b));
    cout<<"\nMutiplites two complex\n";
    Output_One_complex(Mutiplites_two_complex(a,b));
}