#include<bits/stdc++.h>
using namespace std;

class Parent {
public:
    int salary;

    void showPSalary() {
        cout << "Parent salary " << salary << "\n";
    }
};

class Child : public Parent {
public:
    int cSalary;

    void showSalary() {
        cout << "Child Salary " << cSalary << "\n";
    }
};

int main() {
    Child obj; /* 
        Child object has all the properties of the parent
        This obj has child::salary, child::Csalary as data members  
        This obj has child::showPSalary, child::showPSalary as member functions
    */

    obj.salary = 100;
    obj.cSalary = 50;
    obj.showPSalary(); 
    obj.showSalary();

    return 0;
}