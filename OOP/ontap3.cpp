#include "iostream"
#include "math.h" 
using namespace std;
typedef struct Coordinates{
    int x;
    int y;
}CD;
void EnterCoordinates(CD &a,CD &b){
    cout<<"\nEnter x1 : ";
    cin>>a.x;
    cout<<"\nEnter y1 : ";
    cin>>a.y;
    cout<<"\nEnter x2 : ";
    cin>>b.x;
    cout<<"\nEnter y2 : ";
    cin>>b.y;
}
void OutputCoordinates(CD a,CD b){
    cout<<"\n x1 = "<<a.x;
    cout<<"\n y1 = "<<a.y;
    cout<<"\n x2 = "<<b.x;
    cout<<"\n y2= "<<b.y;
}
double  Distance_of_Two_Coordiantes(CD a,CD b){
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}
int main(){
    CD a,b;
    EnterCoordinates(a,b);
    OutputCoordinates(a,b);
    cout<<"\nDistance of two vector : ";
    cout<<Distance_of_Two_Coordiantes(a,b);
    return 0;
}