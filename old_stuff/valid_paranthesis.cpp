#include<stack>
#include<iostream>

using namespace std;

class Solution {

public:

    Solution(int s){
        cout<<"The result is "<<isPalindrome(s)<<endl;
    }

    bool isPalindrome(int x) {
        long temp =0;
        long y = x;
        for(int i=1;x!=0;i*=10){
            temp = temp*i + (x%10);
            x = x/10;
        }
        cout<<temp<<'\t'<<y<<endl;
        if(y==temp){
            return true;
        }
        return false;
    }
};

int main(){

    new Solution(-1);
}
