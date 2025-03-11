#include<bits/stdc++.h>
using namespace std;

class Unary {
private:
    int x, y;   
    
public:
    Unary (int x = 0, int y = 1) : x(x), y(y) {};

    Unary operator/(Unary &obj) {
        Unary result;
        result.x = x / (++obj.x);
        result.y = y / (--obj.y);

        return result;
    }

    void show() {
        cout << x << "\t" << y << "\n";
    }
};

int main() {
    Unary u1(6, 2), u2(2, 2);
    
    Unary u3 = u1 / u2;
    u3.show();

    return 0;
}