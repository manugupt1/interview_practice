#include<iostream>

using namespace std;

class Base{
public:
    virtual const char* getName() { return "Base"; }
};

class Derived : public Base{
public:
    virtual const char * getName() { return "Derived";}
};

int main(){
    Derived cDerived;
    Base &rBase = cDerived;
    cout<<"rBase is "<<rBase.getName()<<endl;
    return 0;
}
