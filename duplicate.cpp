#include<iostream>
#include<map>
#include<vector>
#include<set>

using namespace std;


class Solution {
public:
    Solution(){
        vector<int> v {1,1,3,4,5,6};
        bool result = containsDuplicate(v);
        cout<<"The result is "<<result<<endl;
    }

    bool containsDuplicate(vector<int>& nums) {
        set<int> res;
        for(unsigned i = 0;i<nums.size();i++){
            res.insert(nums[i]);
        }
        if(res.size()==nums.size())
            return false;
        else
            return true;
    }
};

int main(){
    Solution s;
    return 0;
}
