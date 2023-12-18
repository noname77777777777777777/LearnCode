#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    // vector<int> plusOne(vector<int>& digits) {
    //     int value = digits.size();
    //     int count = 0;
    //     int check = 0;
    //     int loop = 0;
    //     int var = 0;
    //     bool index = false;
    //     for(int i = 0 ; i < digits.size() ; i++){
    //         if(digits[value - 1 ] == 9 && digits[value - 2 ]==9 && value >1 && digits[0]==9){
    //             index = true;
    //         }
    //     }
    //     cout<<index;
    //     if(digits[value-1]==9){
    //         for(int i = 0 ; i < digits.size() ; i++){ 
    //         if(digits[i] == 9){
    //             count++;
    //             digits[i] = 0;
    //             if(count == value){
    //                 digits.insert(digits.begin(),1);
    //                 return digits;
    //             }else if(index == false){
    //                 loop++;
    //                  if(digits[i] == 0){
    //                     if(i == (value-1)){
    //                         digits[i-1]++;
    //                     }else if(i!=0){
    //                             cout<<"\nvao";
    //                             digits[i] = digits[i] + 9;
    //                     }
    //                 }
    //             }
    //         }else if( count == 0){
    //             check++;
    //             if(check == value){
    //                 digits[value-1]++;
    //             }
    //         }
    //     }
    //     }else{
    //         digits[value-1]++;
    //     }
    //     return digits;
    // }
    vector<int> plusOne(vector<int>& digits) {
        int value = digits.size();
        for(int  i =  value - 1 ; i >= 0  ; i--){
            if(digits[i] < 9){// if have value less than 9  , decreale 1 dv
                digits[i]++;
                return digits;
            }else{
                digits[i] = 0;
            }
        }
             digits.insert(digits.begin(),1);
            return digits;        
    }
    void Enter_Vector(vector<int>& digits){
        int amount_element;
        cout<<"\nEnter Amount Element : ";
        cin>>amount_element;
        for(int i = 0 ; i < amount_element ; i++){
            int x;
            cin>>x;
            digits.push_back(x);
        }
    }
    void Output_Vector(vector<int> digist){
        cout<<"\n Output Element : ";
        for(int i = 0 ; i < digist.size(); i++){
            cout<<"\t"<<digist.at(i);
        }
    }   
};
int main(){
    Solution Plus_One;
    vector<int> digits;
    Plus_One.Enter_Vector(digits);
    Plus_One.Output_Vector(Plus_One.plusOne(digits));
}