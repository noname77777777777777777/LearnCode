/*Viết chương trình nhập họ
tên, điểm toán, điểm văn của
một học sinh. Tính điểm
trung bình và xuất kết quả.*/
#include "iostream"
// literature  == môn văn ;
using namespace std;
typedef struct Score{
    char Name[100];
    float Math;
    float literature;
}SC;
void Enter_Infomation(SC& a){
    fflush(stdin);
    cout<<"\n Enter name : ";
    gets(a.Name);
    fflush(stdin);
    cout<<"\n Enter score math : ";
    cin>>a.Math;
    fflush(stdin);
    cout<<"\n Enter score literature : ";
    cin>>a.literature;
}
float avearge_score(SC a){
    return (a.Math+a.literature)/2;
}
void output_information(SC a){
    cout<<" \nName  : "<<a.Name;
    cout<<" \nScore Math  : "<<a.Math;
    cout<<" \nScore Literature : "<< a.literature;
    cout<<" \nAvegarge score : "<<avearge_score(a);
}
int main(){
    SC a;
    Enter_Infomation(a);
    output_information(a);
}
