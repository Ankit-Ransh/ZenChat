#include<bits/stdc++.h>
using namespace std;

class Parent {

public:
    int id;

    void showPId() {
        cout << "Parent id --> " << id << "\n";
    }
};

class Child : public Parent {

public:
    int id;

    void showId() { 
        cout << "Child id --> " << id << "\n";
    }
};

int main() {
    Child obj;

    /* 
        When the object is initialised then both the parent::id, child::id is undefined,
        obj.id = X, then child::id = X, but parent::id is still undefined
    */

    obj.id = 5;
    obj.showPId(); // parent::id is undefined till now --> garbage value
    obj.showId();

    return 0;
}