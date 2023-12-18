#include "iostream"
#include "string.h"
using namespace std;
class Solution {
    public:
    int strStr(char haystack, char needle) {
        if(strstr(haystack,needle)!=NULL){
            return 2;
        }
            return-1;
    }
};
int main(){

}