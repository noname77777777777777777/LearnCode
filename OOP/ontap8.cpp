/*: Viết chương trình nhập tọa
tâm và bán kính của một đường
tròn. Tính diện tích và chu vi của
đường tròn*/
#include"iostream"
using namespace  std;
typedef struct Circle{
    int x;
    int y;
}CR;
void Enter_Circle(CR &a,int &radius_circle){
    cout<<"\n Enter radius circle : ";
    cin>>radius_circle;
    cout<<"\n Enter coordinates centriod in Circle : ";
    cout<<"\n Enter x: ";
    cin>>a.x;
    cout<<"\n Enter y: ";
    cin>>a.y;
}
double Area_Circle(CR a,int radius_circle){
    return 3.14*radius_circle*radius_circle;
}
double circumference_circle(CR a,int radius_circle){
    return 2*radius_circle*3.14;
}
int main(){
    CR a;
    int radius_circle;
    Enter_Circle(a,radius_circle);
    cout<<Area_Circle(a,radius_circle)<<endl;
    cout<<circumference_circle(a,radius_circle);
    return 0;
}