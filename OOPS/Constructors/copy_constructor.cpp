#include<bits/stdc++.h>
using namespace std;

class A {
    int data;
    string name;

public:
    A(int data) : data(data) {};
    A(int data, string name) : data(data), name(name) {};

    int getData() {
        return data;
    }

    string getName() {
        return name;
    }
};

int main() {
    A a1(4, "Ankit");
    A a2(a1);

    cout << a1.getData() << "\t" << a2.getData() << "\n";
    cout << a1.getName() << "\t" << a2.getName() << "\n";

    return 0;
}