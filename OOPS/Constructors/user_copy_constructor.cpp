#include<bits/stdc++.h>
using namespace std;

class A {
    int data; string name;

public:
    A(int data, string name) : data(data), name(name) {};

    A (const A &obj) {
        data = obj.data;
        name = "Shreya";
    }

    int getData() const { return data; }
    string getName() const { return name; }
};

int main() {
    A a1(41, "Ankit");
    A a2(a1);

    cout << a1.getData() << "\t" << a1.getName() << "\n";
    cout << a2.getData() << "\t" << a2.getName() << "\n";

    return 0;
}