#include <iostream>
using namespace std;

int height(int n) {
    if (n==0)
        return 1;
    int height = 1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            height *= 2;
        }else{
            height += 1;
        }
    }
    return height;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
