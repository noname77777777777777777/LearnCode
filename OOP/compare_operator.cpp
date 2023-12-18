/*Hãy định nghĩa tất cả các
phương thức toán tử so sánh
cho lớp đối tượng CDiem trong
mặt phẳng Oxy. Biết rằng tiêu
chuẩn so sánh 2 điểm là so
sánh theo khoảng cách tới gốc
toạ độ. Điểm nào ở xa gốc hơn
thì lớn hơn.
*/
#include "iostream"
#include "math.h"
using namespace std;
class Compare_Coordinates{
    private:
        int x;
        int y;
    public:
        void Output_Coordinates();
        void Enter_Coordinates();
        // Compare_Coordinates();
        // Compare_Coordinates(const Compare_Coordinates&);
         Compare_Coordinates operator-(Compare_Coordinates);
         int operator<=(Compare_Coordinates);
};
void Compare_Coordinates::Enter_Coordinates(){
    cout<<"\n Enter coordinate x : ";
    cin>>x;
    cout<<"\n Enter coordinates y : ";
    cin>>y;
}
void Compare_Coordinates::Output_Coordinates(){
    cout<<"\n Coordinates : ("<<x<<","<<y<<")";
}
// Compare_Coordi nates::Compare_Coordinates(const Compare_Coordinates &a){
       
// }
Compare_Coordinates Compare_Coordinates::operator-(Compare_Coordinates a){
    Compare_Coordinates temp;
        temp.x = x-a.x;
        temp.y = y-a.y;
            return temp;
}

int Compare_Coordinates::operator<=(Compare_Coordinates a){
    Compare_Coordinates temp;
       if(sqrt(pow(x,2)+pow(y,2))<=sqrt(pow(a.x,2)+pow(a.y,2))){
            return 1;
       }
        return 0;
}
int main(){
    Compare_Coordinates a,b,c;
    cout<<"\n Enter coordinates A ";
    a.Enter_Coordinates();
    cout<<"\n Enter Coordinates B ";
    b.Enter_Coordinates();
    c=b-a;
    c.Output_Coordinates();
    if(a<=b){
        cout<<"cc";
    }else{
        cout<<"LL";
    }
}