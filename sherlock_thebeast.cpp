#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


 string find_digits( long long n){
     string result;
     long long count_3=0,count_5=0;
     while(n>0){
        if(n%3!=0){
            count_3 += 5;
            n = n - 5;
        }else{
            count_5 += 3;
            n = n- 3;
        }
    }

    if(n==0){
        while(count_5>0){
            string s5 = "5";
            result.append(s5);
            count_5--;
        }
        while(count_3>0){
            string s3 = "3";
            result.append(s3);
            count_3--;
        }
    }else{
        result = "-1";
//        return "-1";
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    string res;
    vector<int> digits;
    for(int i=0;i<T;i++){
         long long temp;
        cin>>temp;
        res = find_digits(temp);
        cout<<res<<endl;
    }
    return 0;
}
