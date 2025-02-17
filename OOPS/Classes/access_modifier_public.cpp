#include<bits/stdc++.h>
using namespace std;

class Cars {

public:
    string modelName;
    int mileage;

    /* 
        ** As data members are public this function is useless
    */
    void setModel(string modelName) {
        this -> modelName = modelName;
    }

    string getModel() {
        return modelName;
    }
};

int main() {

    /*          
        ** Here new Cars will return a pointer Cars* as it dynamically allocates an instance of Cars
        ** Cars *maruti = new Cars(); is a dynamic allocation, so maruti is a pointer
    */
    Cars *maruti = new Cars();
    maruti->modelName = "Maruti";
    maruti->mileage = 10;

    cout << "Maruti Model -> " << maruti->modelName << "\n";
    cout << "Maruti Model -> " << maruti->getModel() << "\n";
    
    /*  
        ** Here alto is an object, so we can access it's member using (.)
    */
    Cars alto;
    alto.modelName = "Alto";
    alto.mileage = 20;
    cout << "Alto model -> " << alto.modelName << "\n";
    cout << "Alto model -> " << alto.getModel() << "\n";

    return 0;
}