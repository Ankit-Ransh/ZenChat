#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void inp(string x, char y, int z) {
        cout << "X\t";
    }

    void inp(string x, char y, double z) {
        cout << "Y\t";
    }
};

int main() {
    A obj;
    obj.inp("X", '3', 4); // 4 (4.02)
    obj.inp("T", '3', 4.02);

    return 0;
}