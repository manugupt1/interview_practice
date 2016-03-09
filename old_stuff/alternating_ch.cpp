#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<string> input;
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string temp;
        cin>>temp;
        input.push_back(temp);
    }

    for(vector<string>::iterator it=input.begin();it<input.end();it += 2){
        cout<<it[0]<<'\t'<<it[1]<<endl;
    }
    return 0;
}
