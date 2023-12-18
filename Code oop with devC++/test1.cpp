#include<iostream>
using namespace std;
int sqrtt(int n){
	if(n==0){
		return 0;
	}	
	if(n==1){
		return 1;
	}
	return n/sqrtt(n-1);
}
int main(){
	int a;
	cin>>a;
	cout<<sqrtt(a);
}
