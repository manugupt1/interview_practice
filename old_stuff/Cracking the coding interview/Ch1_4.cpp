#include<iostream>

using namespace std;

int main(){

    char * word = new char[40]; // Assuming that the string can hold a maximm of 40 characters
    char *array = new char[4]; //We will replace 3 characters at a time.

    int len = 0; // length of the string will be stored here. // well we actually do not need the length of the string, we can also do it using a while statement
    int len_newstr = 0;
    int no_of_spaces = 0;
    int i = 0;


    cout<<"Enter the word"<<endl;
    cin.getline(word,40);
    while(word[i]!='\0'){
        i++;len++;
        if(word[i] == ' '){
            no_of_spaces++;
        }
    }

    len_newstr = len+no_of_spaces*2;
    cout<<"Length of the new string is "<<len_newstr<<endl;

    char * final_str = new char[len_newstr];
    while(len>=0){
        if(word[len]=='\0')
            cout<<"NULL"<<endl;
        cout<<word[len]<<'\t';
        final_str[len_newstr] = word[len];
        cout<<final_str[len_newstr]<<endl;
        if(word[len]==' '){
            cout<<"Replacing the spaces now"<<endl;
            final_str[len_newstr--]='0';
            final_str[len_newstr--]='2';
            final_str[len_newstr--]='%';
            len--;
            continue;
        }
        len--;
        len_newstr--;
    }

    cout<<"Original word was "<<word<<endl;
    cout<<"New Str is "<<final_str<<endl;
}
