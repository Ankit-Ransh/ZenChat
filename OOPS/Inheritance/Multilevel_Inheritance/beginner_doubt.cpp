#include<bits/stdc++.h>
using namespace std;

class A {
    
protected:
    A() {
        cout << "Constructor A\n";
    }
};

class B : protected A {

protected:
    B() {
        cout << "Constructor B\n";
    }
};

class C : protected B {

protected:
    C() {
        cout << "Constructor C\n";
    }
};

int main() {
    // C obj;
    /* Error: cannot call a protected constructor */

    return 0;
}