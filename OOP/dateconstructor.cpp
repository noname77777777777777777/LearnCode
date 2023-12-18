/*Hãy khai báo và định nghĩa
các phương thức thiết lập cơ bản cho
lớp đối tượng ngày*/
#include "iostream"
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int,int,int);
        Date(const Date&);
};
Date::Date(){
    day=2;
    month=7;
    year=2022;
}
Date::Date(int m,int n,int x){
    day=m;
    month=n;
    year=x;
}
Date::Date(const Date &a){
    day = a.day;
    month = a.month;
    year = a.year;
}
int main(){

}