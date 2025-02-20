#include<bits/stdc++.h>
using namespace std;

class ParamCons {
    int count; double price;

public:
    ParamCons (int count, double prices) : count(count), price(prices) {};

    int getCount() {
        return count;
    }

    double getPrice() {
        return price;
    }
};

int main() {
    ParamCons p(4, 5.2);

    cout << p.getCount() << "\t" << p.getPrice() << "\n";

    return 0;
}