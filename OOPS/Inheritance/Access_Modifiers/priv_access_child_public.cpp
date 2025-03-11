#include<bits/stdc++.h>
using namespace std;

class A {

public:
    string name;
    int age;

    A(string name, int age) : name(name), age(age) {};

    void setParams(string name, int age) {
        this -> name = name;
        this -> age = age;
    }
};

class B : private A {
    /* 
        All the data members and member functions will become private we cannot access it 
        through base class
    */

public:
    B(string name, int age) : A(name, age) {}; // By this way we can initialise the parent data members

    void setParams(string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    void showParams() {
        cout << "Name is " << this -> name << " and age is " << this -> age << "\n"; 
    }
};

int main() {
    B obj("Ankit", 22);
    obj.showParams(); 

    return 0;
}