#include<iostream>

using namespace std;

int len(char s1[]){

    int len=0;
    while(s1[len++]!='\0');
    return len-1;

}

bool isSubstring(char s1[],char s2[]){

    int l1 = len(s1);
    int l2 = len(s2);

    if(l1>l2){
        int i=0,j=0;
        while(s1[i]!='\0'){
            if(s1[i]==s2[j]){
                while(j<l2){
                    if(s1[i]==s2[j]){
                        i++;
                        j++;
                    }else{
                        break;
                    }
                }
                if(j==l2)
                    return true;
            }
            i++;
        }
    }
    return false;
}

int main(){


    char * s1 = new char[40];
    char * s2 = new char[40];

    cout<<"Enter s1: ";
    cin>>s1;
    cout<<"Enter s2: ";
    cin>>s2;

    int l1 = len(s1);
    int l2 = len(s2);

    if(l2>l1){
        cout<<"l2 is lengthier than l1"<<endl;
        return -1;
    }

    cout<<isSubstring("manu","an");
    if(l1==l2){

    }
    cout<<l1<<endl;
    cout<<l2<<endl;

    return 0;
}
