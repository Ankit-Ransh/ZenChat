#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int real = 0, int imag = 0) : real(real), imag(imag) {};

    Complex operator+(Complex &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;

        return result;
    }

    void display() {
        cout << real << "\t" << imag << "\n"; 
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4), c3(3, 1);

    Complex c4 = c1 + c2 + c3;
    c4.display();
    
    return 0;
}