/*Viết
chƣơng trình nhập
họ tên, điểm toán,
điểm văn của một
học sinh. Tính điểm
trung bình và xuất
kết quả*/
#include "iostream"
using namespace std;
class I4Student{
    private:
        char name[31];
        float score_math;
        float score_literature;
        float avegarge_score;
    public : 
        void Enter_I4();
        void Output_I4();
        float Processing();
};
void I4Student ::Enter_I4(){
    fflush(stdin);
    cout<<"\n Enter Name : ";
    gets(name);
    cout<<"\n Enter score math : ";
    cin>>score_math;
    cout<<"\n Enter score literature : ";
    cin>>score_literature;
}
float I4Student ::Processing(){
    return (score_literature+score_math)/2;
}
void I4Student ::Output_I4(){
    cout<<"\nName : "<<name;
    cout<<"\nScore Math : "<<score_math;
    cout<<"\nScore Literature : "<<score_literature;
    cout<<"\n Score Avegrage : "<<Processing();
}
int main(){
    I4Student a;
    a.Enter_I4();
    a.Processing();
    a.Output_I4();
    return 0;
}