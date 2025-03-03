#include<bits/stdc++.h>
using namespace std;

class LightVehicle {
public:
    string serialNumber, modelNumber, modelName, owner;

    LightVehicle(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") 
        : serialNumber(serialNumber), modelNumber(modelNumber), modelName(modelName), owner(owner) {}; 
        /* Member initialisation of Light Vehicle class */
};

class LowWeightVehicle {
public:
    string serialNumber, modelNumber;

    LowWeightVehicle(string serialNumber, string modelNumber) : serialNumber(serialNumber), modelNumber(modelNumber) {};
         /* Member initialisation of Low Weight Vehicle class */
};

class HeavyVehicle {
public:
    string modelNumber, owner;

    HeavyVehicle(string modelNumber, string owner) : modelNumber(modelNumber), owner(owner) {};
        /* Member initialisation of heavy Weight Vehicle class */
};

class TwoVehicle {
private:
    LightVehicle lightVehicle; /* User defined data type */
    LowWeightVehicle lowWeightVehicle;  /* User defined data type */

public: 
    TwoVehicle(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") 
        : lightVehicle(serialNumber, modelNumber, modelName, owner),
            lowWeightVehicle(serialNumber, modelNumber) {};
         /* Copy object data to user defined variables */

    LightVehicle getLightVehicleInfo() {
        return lightVehicle; /* return user defined data */
    }

    LowWeightVehicle getLowWeightVehicleInfo() {
        return lowWeightVehicle; /* return user defined data */
    }
};

class FourVehicle {
private:
    HeavyVehicle heavyVehicle;

public:
    FourVehicle(string modelNumber, string owner = "Ankit") : heavyVehicle(modelNumber, owner) {};
    /* Member initialisation of Heavy Vehicle class */

    HeavyVehicle getFourVehicleInfo() {
        return heavyVehicle; /* return user defined data */
    }
};

class Bicycle : protected TwoVehicle, protected FourVehicle {

public:
    Bicycle(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") 
        : TwoVehicle(serialNumber, modelNumber, modelName, owner),
            FourVehicle(modelNumber, owner) {};
        /* Initialise parent members as it has parameterised constructors */

    void getTwoVehicleLightVehicleInfo() {
        LightVehicle lightVehicle = TwoVehicle::getLightVehicleInfo(); /* Get child Object data from parent function */
        cout << "Serial Number : " << lightVehicle.serialNumber
            << "\nModel Number : " << lightVehicle.modelNumber
            << "\nModel Name : " << lightVehicle.modelName
            << "\nOwner : " << lightVehicle.owner << "\n";
    }

    void getTwoVehicleLowWeightVehicleInfo() {
        LowWeightVehicle lowWeightVehicle = TwoVehicle::getLowWeightVehicleInfo(); /* Get child Object data from parent function */
        cout << "Serial Number : " << lowWeightVehicle.serialNumber
            << "\nModel Number : " << lowWeightVehicle.modelNumber << "\n";
    }

    void getFourtVehicleHeavyVehicleInfo() {
        HeavyVehicle heavyVehicle = FourVehicle::getFourVehicleInfo(); /* Get child Object data from parent function */
        cout << "Model Number : " << heavyVehicle.modelNumber
            << "\nOwner : " << heavyVehicle.owner << "\n";
    }
};

int main() {
    Bicycle bike("TKD23012345678", "DOM-AL2-2023", "Domane AL 2");
    bike.getTwoVehicleLightVehicleInfo();
    cout << "------------------------------\n";
    bike.getTwoVehicleLowWeightVehicleInfo();
    cout << "------------------------------\n";
    bike.getFourtVehicleHeavyVehicleInfo();

    /* In this code the parameters are the properties of the object so we cannot set the params explicitly */
    /* WHY ??? ---> multiple_inheritance_intermediate_1 */

    return 0;
}