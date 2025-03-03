#include<bits/stdc++.h>
#include <format>
using namespace std;

class Parent {

public:
    int pid;

    void showPid() {
        cout << "Parent id " << pid << "\n";
    }
};

class Child : public Parent{

public:
    int cid;

    void modify() {
        this -> pid = 50; // it is accessible as it is public
    }
    
    void showCid() {
        cout << "Child id " << cid << "\n"; 
    }
};

int main() {
    Child obj;
    obj.pid = 100, obj.cid = 100;
    obj.showPid(); // Initialised as 100
    obj.showCid(); // Initialised as 100

    Parent obj1;
    obj1.pid = 150; 

    obj.modify(); // modify derived parent member
    obj.showPid(); // parent derived data member modified by child 
    obj1.showPid(); // Initialised as 150

    return 0;
}