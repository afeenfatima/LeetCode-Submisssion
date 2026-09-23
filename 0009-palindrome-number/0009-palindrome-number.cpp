#include <iostream>
using namespace std;

class Solution {
public:
    long long rem,rev=0,org;
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        org=x;
        while(x!=0){
           rem=x%10;
           rev=rem+rev*10;
           x/=10;
        }
        if(org==rev){
            return true;
           }
        else
             return false;
        }
    
    
};