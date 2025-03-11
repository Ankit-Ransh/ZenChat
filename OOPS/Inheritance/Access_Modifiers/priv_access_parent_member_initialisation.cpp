#include<bits/stdc++.h>
using namespace std;

class Animal {

private:
    string name, color, sex;
    int age;
    
public:
    Animal(string name, string color, string sex, int age) : name(name), color(color), sex(sex), age(age) {};

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

    void getInfo() {
        cout << "Animal name is " << name << " color is " << color << " sex and age is " << 
        sex << " " << age << "\n";
    }
};  

class Child : public Animal {

public:
    Child() : Animal("DefaultName", "DefaultColor", "DefaultSex", 0) {};
};

int main() {
    Animal animal("Lion", "Yellow", "Male", 32);

    Child obj;
    obj.getInfo();


    return 0;
}