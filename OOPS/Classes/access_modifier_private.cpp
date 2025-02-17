#include<bits/stdc++.h>
using namespace std;

class Cars {

private:
    string modelName;
    int mileage;
    
public:
    void setModel(string modelName) {
        this->modelName = modelName;
    }

    string getModel() {
        return modelName;
    }
};

int main() {
    Cars alto;
    /*  
        * Cannot set directly as private members can be accessed inside class only
    */
    // alto.modelName = "Maruti"; /* Error ->> cannot access data member outside class */
    alto.setModel("Alto");

    cout << "Model name -> " << alto.getModel() << "\n";

    return 0;
}