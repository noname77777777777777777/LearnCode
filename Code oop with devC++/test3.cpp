#include "iostream"
using namespace std;
int General_Mutiple_maximun(int a,int b){
    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<General_Mutiple_maximun(a,b);
}

