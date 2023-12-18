#include<iostream>
#include<vector>
using namespace std;
int main(){
	int target;
	cin>>target;
	int n;
	cin>>n;
	int var;
	vector<int> a(n);
	for(int i=0;i<a.size();i++){
		cout<<a[i];
	}
	for(int i=0;i<a.size();i++){
		if(a[i]==target){
			var=i;
		}
	}
	cout<<var;
}

