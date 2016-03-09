#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


vector<int> find_digits(unsigned long long n){
    vector<int> digits;
    while(n!=0){
        int temp = n%10;
        n /= 10;
       // cout<<"D:"<<temp<<endl;
        if(temp) digits.push_back(temp);
    };
    return digits;
}

int number_digits(int temp,vector<int> digits){
    int number = 0;
    for(vector<int>::iterator it=digits.begin();it!=digits.end();++it){
  //      cout<<"D1:"<<*it<<endl;
    //    cout<<"temp:"<<temp<<endl;
        int mod = temp%(*it);
      //  cout<<"mod:"<<mod<<endl;
        if(!mod){
        //    cout << "In here"<<endl;
            number += 1;
        }
    }
    ///cout<<number<<endl;
    return number;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    vector<int> digits;
    for(int i=0;i<T;i++){
        unsigned long long temp;
        cin>>temp;
        digits = find_digits(temp);
        cout<<number_digits(temp,digits)<<endl;
    }
    return 0;
}
