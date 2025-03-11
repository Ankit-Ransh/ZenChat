#include<bits/stdc++.h>
using namespace std;

class Parent {
public:
    void functionCall() {
        print();
    }

    virtual void print() {
        cout << "Printing parent\n";
    }
};

class Base : public Parent {
public:
    void print() {
        cout << "Printing child\n";
    }
};

int main() {
    Parent p1; p1.functionCall();
    Base b1; b1.functionCall();

    return 0;
}