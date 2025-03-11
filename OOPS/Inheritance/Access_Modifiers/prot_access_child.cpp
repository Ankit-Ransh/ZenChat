#include<bits/stdc++.h>
using namespace std;

class A {

private:
    string gfName; /* Derived class XX(cannot)XX access it */

protected:
    string status; /* Derived class can access it */

public:
    int age; /* Derived class can access it */
    
    void setParams(string gfName, string status, int age) {
        this -> gfName = gfName;
        this -> status = status;
        this -> age = age;
    }
};

class B : protected A { 
public:
    /* Public and protected data members and member functions are protected now */
    void setParams(string status, int age) {
        this -> status = status;
        this -> age = age;
    }

    void showParent() {
        cout << "Status -> " << status << " Age -> " << age << "\n";
    }
};

int main() {
    A objA; objA.setParams("Shreya", "Single", 22);

    B obj;
    obj.setParams("Couple", 22);
    obj.showParent();

    return 0;
}