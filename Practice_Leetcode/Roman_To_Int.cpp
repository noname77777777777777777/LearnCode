#include "iostream"
#include "string"
#include "cstring"
using namespace std;
class Solution {
public:
    void romanToInt(string s) {
        string list_roman[7][2] = {{"I","1"},{"V","5"},{"X","10"},{"L","50"},{"C","100"},{"D","500"},{"M","1000"}};
        string u[100];
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = 0 ; j < 7 ;j++){
                if(string("") + s[i] == list_roman[j][0]){
                    u[i] = list_roman[j][1];
                }
            }
         }
         int int_of_roman = 0; 
         int get_value_int_roman[100];
         int value = 0;
        for(int i = 0 ; i < s.length() ; i++){
            get_value_int_roman[i] = stoi(u[i]);
            value++;   
        }
        int sum = 0 ;
        for(int i = 0 ; i < value-1 ;i++){
            if(get_value_int_roman[i] == get_value_int_roman[i+1]&& get_value_int_roman[i] != 1000){
                sum+=get_value_int_roman[i];
            }else if(get_value_int_roman[i] > get_value_int_roman[i+1] && get_value_int_roman[i] != 1000){
                sum+=get_value_int_roman[i];
            }else if(get_value_int_roman[i] < get_value_int_roman[i+1]&& get_value_int_roman[i] != 1000){
                sum-=get_value_int_roman[i];
            }else if(  get_value_int_roman[i] == 1000){
                sum+=get_value_int_roman[i];
            }
            }
            sum+=get_value_int_roman[value-1];
        cout<<"\n result : ";
        cout<<sum;
    }
    void EnterValue(string& s){
        cin>>s;
       }
};
int main(){
    string s;
    Solution a;
    a.EnterValue(s);
    a.romanToInt(s);
}