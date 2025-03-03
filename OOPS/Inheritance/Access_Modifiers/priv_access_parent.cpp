#include<bits/stdc++.h>
using namespace std;

class Animal {

private:
    string name, color, sex;
    int age;
    
public:
    void setParams(string name, string color, string sex, int age) {
        this -> name = name;
        this -> color = color;
        this -> sex = sex;
        this -> age = age;
    }

    string getName() {
        return this -> name;
    }

    string getColor() {
        return this->color;
    }

    string getSex() {
        return this->sex;
    }

    int getAge() {
        return this->age;
    }

    /*
        // ERROR --> cannot be used for default values as these are not constant whereas instance
        void getInfo(string name = this->name, string color = this->color, string sex = this->sex, int age = this->age) {}
        // this->X are non-static data members that depend on the object instance and are not constant expressions.

    */
    
    void getInfo() {
        cout << "Animal name is " << name << " color is " << color << " sex and age is " << 
        sex << " " << age << "\n";
    }
};  

class Child : public Animal {

private:
    string name, color, sex;
    int age;

public:
    Child(string name, string color, string sex, int age) : name(name), color(color), sex(sex), age(age) {};

    void setParams() {
        Animal::setParams(name, color, sex, age);
    }

    void setChildParams(string name, string color, string sex, int age) {
        this -> name = name;
        this -> color = color;
        this -> sex = sex;
        this -> age = age;
        setParams();
    }

    void getParentInfo() {
        getInfo(); 
        this->getInfo();  // this is a pointer 
    }
};

int main() {
    Animal animal;
    animal.setParams("Lion", "Yellow", "Male", 32);
    
    Child obj("Tiger", "Shallow yellow", "Female", 41);
    obj.getParentInfo();
    
    obj.setChildParams("Lion", "Yellow", "Male", 32);

    obj.getParentInfo();

    return 0;
}