#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size(); 
        int count = 0 ;
        for(int i = 0 ;i < flowerbed.size() ; i++){
            if(flowerbed[i] == 0){
                if(flowerbed[i-1] ==1 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(count == n){
            return true;
        }
        if(count < n){
            return false;
        }
        return true;   
    }
    void Enter_vector(vector<int>& flowerbed){
        int size;
       cout<<"\n Enter size vector : ";
        cin>>size;
        for(int i = 0 ; i < size ; i++){
            int n;
            cin>>n;
            flowerbed.push_back(n);    
        }
    }
    void Enter_Location_Check(int& n){
        cout<<"\n Enter location : ";
        cin>>n;
    }  
    void Output_vector(vector<int> flowerbed){
        cout<<"\n Output vector : ";
        for(int i = 0 ; i < flowerbed.size() ; i++){
            cout<<flowerbed[i];
        }
    }
};
int main(){
    Solution z;
    vector<int> flowerbed;
    int n;
    z.Enter_vector(flowerbed);
    z.Enter_Location_Check(n);
    cout<<z.canPlaceFlowers(flowerbed,n);    
}