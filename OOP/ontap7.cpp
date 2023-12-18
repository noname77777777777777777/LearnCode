/*Viết chương trình nhập toạ
độ 3 đỉnh A,B,C của 1 tam giác
trong mặt phẳng Oxy. Tính chu
vi, diện tích và tìm tọa độ trọng tâm*/
#include"iostream"
#include"math.h"
using namespace std;
typedef struct Coordinate{
    int x;
    int y;
}CD;
void Enter_coordinates(CD& a,CD& b,CD& c){
    cout<<"\nEnter peak coordinate A : ";
    cout<<"\nx = ";
    cin>>a.x;
    cout<<"\ny = ";
    cin>>a.y;
    cout<<"\nEnter peak coordinates B : ";
    cout<<"\n x = ";
    cin>>b.x;
    cout<<"\n y = ";
    cin>>b.y;
    cout<<"\n Enter peak coordinates C : ";
    cout<<"\nx = ";
    cin>>c.x;
    cout<<"\ny = ";
    cin>>c.y;
}
void Output_coordinates(CD a,CD b,CD c){
    cout<<"\nPeak Coordinates A : \n x = "<<a.x<<"\n y = "<<a.y;
    cout<<"\nPeak Coordinates B : \n x = "<<b.x<<"\n y = "<<b.y;
    cout<<"\nPeak Coordinates C : \n x = "<<c.x<<"\n y = "<<c.y;
}
void output_ont_cootdinates(CD a){
        cout<<"\nPeak Coordinates A : \n x = "<<a.x<<"\n y = "<<a.y;

}
// circumference ==  chu vi
// triangle == tam giác
// centroid =trọng tâm
double Space_two_peak_coordinates(CD a,CD b){
    return sqrt((pow((b.x-a.x),2)+pow((b.y-a.y),2)));
}
double Circumference_of_traingle(CD a,CD b,CD c){
    return Space_two_peak_coordinates(a,b)+Space_two_peak_coordinates(a,c)+Space_two_peak_coordinates(b,c);
}
double Area_of_Traingle(CD a,CD b,CD c){
    return 0.5*(b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y);
}
CD Coordinates_centroid_of_traingle(CD a,CD b,CD c){
    CD temp;
    temp.x=(a.x+b.x+c.x)/3;
    temp.y=(a.y+b.y+c.y)/3;
    return temp;
}
int main(){
    CD a,b,c;
    Enter_coordinates(a,b,c);
    Output_coordinates(a,b,c);
    cout<<"\nCircuference of traingle : ";
    cout<<Circumference_of_traingle(a,b,c);
    cout<<"\nArea of traingle : ";
    cout<<Area_of_Traingle(a,b,c);
    cout<<"\n The Coordinates of centroid of traingle : ";
    output_ont_cootdinates(Coordinates_centroid_of_traingle(a,b,c));
}