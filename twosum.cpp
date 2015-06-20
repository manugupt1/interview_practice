#include<iostream>
#include<vector>


using namespace std;

class Solution {

public:
    Solution(){
        vector<int> v {1,2,3,4,6,8};
        int target = 5;
        vector<int> res = twoSum(v,target);
        cout<<"Manu"<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int twosum  = nums[i]+nums[j];
                //cout<<"Check"<<twosum<<endl;
                if(target==twosum){
                    //cout<<"Successful"<<i<<","<<j<<endl;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};


int main(){
    Solution s;
    return 0;
}
