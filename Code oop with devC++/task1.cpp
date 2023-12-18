#include<iostream>
using namespace std;
class phanso{
	private :
		int tuso;
		int mauso;
	public :
		void nhapphanso(int tuso,int mauso){
			cout<<"\nNhap tu so : ";
			cin>>this->tuso;
			cout<<"\nNhap mau so : ";
			cin>>this->mauso;
		}
		void kiemtraps(int tuso,int mauso){
            float c = tuso/(float)mauso;
            if(c>0){
                cout<<"phan so nay la so duong ";
            }else if(c==0){
                cout<<"phan so nay bang khong ";
            }else{
                cout<<"phan so nay la so am ";
            }
		}
};
int main(){
    int t,m;
    phanso a;
    a.nhapphanso(t,m);
    a.kiemtraps(t,m);
}
