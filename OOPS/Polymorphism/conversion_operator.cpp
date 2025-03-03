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

    operator double() {
        return (double(num) * double(den)) / (double(num) + double(den));
    }
};

int main() {
    Complex c1(2, 5);
    float val = c1;

    cout << val;

    double value = c1;
    cout << " " << value;
    
    return 0;
}