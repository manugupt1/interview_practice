// rotating array
#include<iostream>

using namespace std;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        int *rotates = new int[n];


        if(k>n){k = k%n;};
        int diff = n-k;
        if(diff<0) diff = diff*(-1);
        int i,size=0;

        while(size<n){
            for(int i=diff;i<n;i++,size++) rotates[size]=nums[i];
            for(int i=0;i<diff;i++,size++) rotates[size]=nums[i];
        }

        for(i=0;i<n;i++){
            nums[i] = rotates[i];
            cout<<nums[i];
        }
        cout<<endl;
        for(i=0;i<n;i++){
            cout<<rotates[i];
        }
    }
};


int main(){
    int nums[] = {1,2,3};
    Solution sln;
    sln.rotate(nums,3,4);
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<nums[i];
    }

    return 0;
}
