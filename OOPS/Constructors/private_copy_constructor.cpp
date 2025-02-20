#include<bits/stdc++.h>
using namespace std;

class A {

private:
    int data; string name;
    A* node;

    A (A &obj) {
        this -> data = obj.data;
        this -> name = obj.name;
        this -> node = obj.node ? new A(*obj.node) : nullptr;
    }  // cannot be copied

public:
    A (int x, string y, A* z) : data(x), name(y), node(z) {};

    void show() {
        cout << data << "\t" << name << "\t" << node << "\n";
    }
};

int main() {
    A a1(41, "Ankit", nullptr);
    // A a2(a1); 

    return 0;
}