#include<iostream>
using namespace std;
typedef struct Phanso
{
    /* khai bao tu so mau so */
    int mauso;
    int tuso;
void Nhapphanso(int tuso,int mauso){
    cout<<"Nhap tu so : ";
    cin>>mauso;
    cout<<"Nhap mau so : ";
    cin>>tuso;
}
void xuatphanso(int tuso,int mauso){
    cout<<"\nPhan so la "<<endl;
    cout<<tuso<<"/"<<mauso<<endl;
}
void CheckPS(int tuso,int mauso){
    if(tuso*mauso>0){
        cout<<"\n Phan so nay la so duong"<<endl;
    }else if(tuso*mauso<0){
        cout<<"\n Phan so nay la so am"<<endl;
    }else{
        cout<<"Phan so nay bang 0"<<endl;
    }
    }
}PS;
int main(){
    PS a;
    a.Nhapphanso(a.tuso,a.mauso);
    a.xuatphanso(a.tuso,a.mauso);
    a.CheckPS(a.tuso,a.mauso);
}
