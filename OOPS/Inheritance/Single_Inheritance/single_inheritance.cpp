#include<bits/stdc++.h>
using namespace std;

class Vehicle {

public:
    Vehicle() {
        cout << "This is a vehicle \n";
    }
};

class Car : public Vehicle {

public:
    Car() {
        cout << "This is a car \n";
    }
};

int main() {
    Car obj; /* First parent constructor will be called then child */

    return 0;
}