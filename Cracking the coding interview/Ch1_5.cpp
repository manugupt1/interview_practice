#include<iostream>

using namespace std;


int main(){

    char * word = new char[40]; // assuming that the string is of length 40
    int len = 0;

    cout<<"Give a char stream"<<endl;
    cin>>word;

    //calculate the len of the string
    while(word[len++]!='\0');
    len--;

    char * final_str = new char[len*2];
    char temp;
    int temp_cnt = 1;
    int pos = 0;
    int i=0;
    while(word[i]!='\0'){

        //copy the current character in a temp char and add it to the final string, move the final string to the next position
        //and we will put the count of similar values now. All that is to be done is to look for values.

        temp = word[i];
        final_str[pos++] = temp;

        while(word[++i]==temp){
            temp_cnt++;
        }

        cout<<"In here:"<<temp_cnt<<endl;
        final_str[pos++]= int('0') + temp_cnt;
        //cout<<"In here : "<<temp_cnt;
        temp_cnt=1;
    }
    final_str[pos]='\0';
    cout<<"Length of the string is "<<len<<endl;
    cout<<"Final str is "<<final_str<<endl;
}
