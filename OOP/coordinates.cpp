/*Viết
chƣơng trình nhập
vào tọa độ 2 điểm
trong mặt phẳng Oxy.
Tính khoảng cách
giữa chúng và xuất
kết quả*/
#include "iostream"
#include "math.h"
using namespace std;
class Coordinates{
    private: 
        int x;
        int y;
    public: 
        void Enter_Coordinates();
        double Space_Coordinates(Coordinates);
        void Output_Coordinates();
};
void Coordinates::Enter_Coordinates(){
    cout<<"\n enter  coordinates  x : ";
    cin>>x;
    cout<<"\n enter coordinates y : ";
    cin>>y;
} 
void Coordinates::Output_Coordinates(){
    cout<<"\n Coordinates Result : ";
    cout<<"("<<x<<","<<y<<")";
}
double Coordinates::Space_Coordinates(Coordinates p){
    return sqrt(pow(p.x - x,2)+pow(p.y - y,2));
}
int main(){
    Coordinates A,B;
    A.Enter_Coordinates();
    B.Enter_Coordinates();
    double Space = A.Space_Coordinates(B);
    cout<<"\n Space : "<<Space;
    return 0;
}