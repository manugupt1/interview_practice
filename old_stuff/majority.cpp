#include<iostream>
#include<vector>
#include<map>

using namespace std;

int majorityElement(vector<int> &num) {
        std::map<int,int> m;

        for(int i=0;i<num.size();i++){
            m[num[i]]++;
        }

        map<int,int>::const_iterator it = m.begin();
        int max = 0;
        for(;it!=m.end();it++){
            if(it->second>max) max = it->second;
        }
        return max;
}


int main(){
    vector<int> value;
    int val[] = {1,1,2,3,1,2,1,1,4,5,6,0};
    value.assign(val,val+11);
    cout<<majorityElement(value);
}
