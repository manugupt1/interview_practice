#include<iostream>

using namespace std;

int main(){

    int a[] = {2,5,7,8};
    int b[] = {3,5,6,10};
    int *c = new int[8];

    int i=0,j=0;
    int x=0;

    for(x=0;x<8;x++){
       if(i<4){
            if(a[i]<b[j]){
                c[x] = a[i];
                i++;
                continue;
            }else{
                if(j<4){
                    c[x]=b[j];
                    j++;
                    continue;
                }
            }
       }
       if(j<4){
            if(b[j]<a[i]){
                c[x] = b[j];
                j++;
                continue;
            }else{
                if(i<4){

                }
            }
       }
    }

    for(x=0;x<8;x++){
        cout<<c[x]<<'\t'<<endl;
    }

}
