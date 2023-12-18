#include "iostream"
#include "string.h"
#include "math.h"
using namespace std;
int cc(int n){
	for(int i=0;i<n/2;i++){
        if(pow(i,3)==n){
                return 1;
            }
         else{
         	return 0;
		 }
	}
}
int main(){
	int n;
	cin>>n;
	if(cc(n)==1){
		cout<<"cc";
	}else{
		cout<<"ck";
	}
}
