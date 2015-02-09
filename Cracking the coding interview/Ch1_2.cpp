#include<iostream>

using namespace std;


//cases that have been taken care of strings of even or odd length
// you can also check if this is an empty string
// you an also a dictionary to check the validity of the string
char* rev(char* word){

    int len=0;//since the length is unknown to us we will calculate the length of the string and store here.

    int i,j; // a temporary variable for loops
    for(i=0;word[i]!='\0';i++) //loop to calculate the length of the string
        len++;

    for(i=0,j=len-1;i<len/2;i++,j--){
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    return word;

}
int main(){

    char * word = new char[20];// word / string to be reversed
    char * res = new char[20];//result to be stored here
    cout<<"Enter the word to be reversed:";
    cin>>word;

    res = rev(word);
    cout<<res;
    return 0;
}


