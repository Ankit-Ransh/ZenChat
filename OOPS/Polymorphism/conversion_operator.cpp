#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int num, den;

public:
    Complex(int num = 0, int den = 0) : num(num), den(den) {};

    operator float() {
        return float(num) / float(den);
    }
};

int main() {
    Complex c1(2, 5);
    float val = c1;

    cout << val;
    
    return 0;
}