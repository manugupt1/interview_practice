#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        cout<<version1.find(".");
        return 0;
    }
};

int main(){
    Solution *s = new Solution();
    int iRes = s->compareVersion("22.3.4","2.3.4");
    cout<<iRes;
    return 0;

}
