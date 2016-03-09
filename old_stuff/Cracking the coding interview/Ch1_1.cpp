#include<iostream>

using namespace std;

int main(){
    string word; // The string that is supposed to be checked
    cout<<"Enter the string :";
    cin>>word;
    int len = word.length(); // length of the string
    bool res=true;// = true; // result to be stored here
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j){
                if(word.at(i)==word.at(j)){
                    res = false;
                    break;
                }
            }
        }
    }

    cout<<"The string has all unique characters is "<<res;
    return 0;
}
