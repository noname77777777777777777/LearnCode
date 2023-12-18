#include "iostream"
using namespace std;
int main(){
	int a[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c[10];
	int m=0;
	int z=0;
	for(int i=0;i<n;i++){
			if(a[z++]!=a[i]){
				c[m++]=a[i];
			}
	}
	for(int i=0;i<m;i++){
		cout<<c[i];
	}
}
