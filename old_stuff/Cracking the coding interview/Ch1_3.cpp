#include<iostream>

using namespace std;

int main(){
    string orig_string; // string with which to be compared
    string check_string; // we will see if this string is a copy of that string

    cout<<"Enter the orig string";
    cin>>orig_string;

    cout<<"Enter the check_string";
    cin>>check_string;

    int alphabet_array_string[256] ={0}; //Assuming ascii
    int alphabet_array_string1[256] ={0}; //assuming ascii for 2nd string

    if(orig_string.length()!=check_string.length()){
        cout<<"The 2 strings are not equal.. hence not a pm";
        return false;
    }

    for(int i=0;i<orig_string.length();i++){
        alphabet_array_string[int(orig_string.at(i))]++; //increasing it by 1
    }

    for(int i=0;i<check_string.length();i++){
        alphabet_array_string1[int(check_string.at(i))]++; //increasing it by 1
    }

    for(int i=0;i<256;i++){
        if(alphabet_array_string1[i]!=alphabet_array_string[i]){
            cout<<"Not a permutation";
            return false;
        }
    }

    cout<<"It is a permutation";
    return true;
}
