/*Viết chương trình nhập
vào một ngày. Tìm ngày hôm
qua và xuất kết quả
*/
#include"iostream"
using namespace std;
typedef struct Again_Tomorrow{
    int day;
    int month;
    int year;
}AG;
void Enter_Date(AG& a){
    cout<<"\n Today ";
    cout<<"\n Enter day : ";
    cin>>a.day;
    cout<<"\n Enter month : ";
    cin>>a.month;
    cout<<"\n Enter year : ";
    cin>>a.year;
}
void find_yesterday(AG a){
    int NgayThang[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((a.year%400==0)&&(a.year%4==0&&a.year%100!=0)){
        NgayThang[1]=29;
        a.day--;
        if(a.day==0){
            a.month--;
            if(a.month==0){
                a.year--;
                a.month=12;
            }
            a.day=NgayThang[a.month-1];
        }
    }else{
        NgayThang[1]=28;
        a.day--;
        if(a.day==0){
            a.month--;
            if(a.month==0){
                a.year--;
                a.month=12;
            }
            a.day=NgayThang[a.month-1];
        }
    }
    cout<<"\n Date yesterday : ";
     cout<<a.day<<"/"<<a.month<<"/"<<a.year<<endl;
}
void Output_Date(AG a){
    cout<<a.day<<"/"<<a.month<<"/"<<a.year<<endl;
}
int main(){
        AG a;
        Enter_Date(a);
        Output_Date(a);
        find_yesterday(a);
        return 0;
}