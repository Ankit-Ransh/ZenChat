#include<bits/stdc++.h>
using namespace std;

class A {

private:
    string gfName, status; /* Derived class XX(cannot)XX access it */

public:
    void setParams(string gfName, string status) {
        this -> gfName = gfName;
        this -> status = status;
    }

    void showParams() {
        cout << "My " << this -> gfName << " is " << this -> status;
    }
};

class B : protected A { 

private:
    string name;

public:
    B(string name = "Me") : name(name) {};

    /* Public and protected data members and member functions are protected now */
    void setParams(string gfName, string status) {
        /* cannot access private members
            this->gfName = gfName;
            this->status = status; 
        */
    }

    void showParent() {
        A::setParams("Shreya", "Single"); 
        /* This can set the parent members but it is bound to an object */
        A::showParams(); /* It will always show the same regardless of the object */
        cout << ". She belongs to " << this->name;
    }
};

int main() {
    A objA; objA.setParams("Shreya", "Single");

    B obj;
    obj.showParent();

    return 0;
}