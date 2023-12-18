#include "iostream"
using namespace std;
int main(){
	int A[10];
	for(int i = 0;i<3;i++){
		cin>>A[i];
	}
	int count =0;
	for(int i = 0;i<3;i++){
		for(int j = i+1 ;j < 3 ;j++){
			if(A[i]+A[j]==4){
				count++;
			}
		}
	}
	cout<<"\n dd "<<count;
}
