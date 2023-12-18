#include<iostream>
using namespace std;
typedef struct Phanso
{
    /* khai bao tu so mau so */
    int mauso;
    int tuso;
}PS;
void Nhapphanso(int tuso,int mauso){
    cout<<"Nhap tu so : ";
    cin>>tuso;
    cout<<"Nhap mau so : ";
    cin>>mauso;
    cout<<"\nPhan so la "<<endl;
    cout<<tuso<<"/"<<mauso<<endl;
    if(tuso*mauso>0){
        cout<<"\n Phan so nay la so duong"<<endl;
    }else if(tuso*mauso<0){
        cout<<"\n Phan so nay la so am"<<endl;
    }else{
        cout<<"Phan so nay bang 0"<<endl;
    }
}
int main(){
    PS a;
    Nhapphanso(a.tuso,a.mauso);
}