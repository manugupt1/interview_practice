#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    vector<unsigned int> x;

    for(int it=0;it<t;++it){
        unsigned int temp;
        cin>>temp;
        x.push_back(temp);
    }

    unsigned int mask = UINT_MAX;
    //cout<<UINT_MAX<<endl;

    for(int it=0;it<t;++it){
      //  cout<<x[it] << ":" ;
        unsigned int res = x[it] xor mask;
        cout<<res<<endl;
    }
    return 0;
}
