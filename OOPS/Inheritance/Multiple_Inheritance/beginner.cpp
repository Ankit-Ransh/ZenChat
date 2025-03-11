#include<bits/stdc++.h>
using namespace std;

class A {
    
public:
    A() {
        cout << "This is parent class A \n";
    }
};

class B {

public: 
    B() {
        cout << "This is parent class B \n";
    }
};

class C : public B, public A {

public: 
    C() {
        cout << "This is the child class C \n";
    }
};

int main() {
    C obj;

    return 0;
}   