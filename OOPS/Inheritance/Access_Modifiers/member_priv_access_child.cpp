#include<bits/stdc++.h>
using namespace std;

class A {

private:
    string gfName, status; /* Derived class XX(cannot)XX access it */

public:
    A(string gfName = "Shreya", string status = "Single") : gfName(gfName), status(status) {};

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
    string name, gfName, status;

public:
    B(string name = "Me", string gfName = "Shreya", string status = "Single") : name(name), gfName(gfName), status(status) {};

    void setParams(string gfName = "Shreya", string status = "Single", string name = "Me") {
        this -> name = name;
        this -> gfName = gfName;
        this -> status = status;
    }

    void showParent() {
        A::setParams(this->gfName, this->status); 
        /* This can set the parent members but it is bound to an object */
        A::showParams(); /* the instance of the object will decide the values */
        cout << ". She belongs to " << this->name << "\n";
    }
};

int main() {
    B shreya;
    shreya.showParent();

    B priya;
    priya.setParams("Priya", "Coupled"); // default works from right to left
    priya.showParent();

    /* 
        priya.setParams(, "Priya", "Coupled"); // Wrong syntax
    */

    B riya;
    riya.setParams("Riya", "Coupled", "Ankit"); // default works from right to left
    riya.showParent();

    return 0;
}