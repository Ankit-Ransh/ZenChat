#include<bits/stdc++.h>
using namespace std;

class A {

private:
    string name;

public:
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
    /*
    void setParams(string name, int age) {
        this -> name = name;
        this -> age = age;
    }

    void showParams() {
        cout << "Name is " << this -> name << " and age is " << this -> age << "\n"; 
        // Name and age belongs to class A
    }
    */
};

int main() {
    B obj;
    // obj.showParams(); // cannot access it

    return 0;
}