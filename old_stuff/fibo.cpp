#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ULL unsigned long long

string isFibo(double n){

    double t1, t2;
    double d1, d2;

    t1 = floor(sqrt(5 * pow(n,2) + 4));
    t2 = floor(sqrt(5 * pow(n,2) - 4));
    d1 = sqrt(5 * pow(n,2) + 4);
    d2 = sqrt(5 * pow(n,2) - 4);

    if(d1==double(t1) || d2==double(t2)){
        return "IsFibo";
    }

    return "IsNotFibo";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        double temp;
        cin>>temp;
        cout<<isFibo(temp)<<endl;
    }

    return 0;
}
