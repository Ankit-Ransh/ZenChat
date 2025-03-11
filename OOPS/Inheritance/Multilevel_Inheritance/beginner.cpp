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

public:
    C() {
        cout << "Constructor C\n";
    }
};

int main() {
    C obj; /* A --> B --> C */

    return 0;
}