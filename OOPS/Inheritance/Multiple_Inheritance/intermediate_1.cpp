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

    void setLightVehicle(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") {
        this->lightVehicle.serialNumber = serialNumber;
        this->lightVehicle.modelNumber = modelNumber;
        this->lightVehicle.modelName = modelName;
        this->lightVehicle.owner = owner;
    } /* Set lightVehicle in class */

    void setLowWeightVehicle(string serialNumber, string modelNumber) {
        this->lowWeightVehicle.serialNumber = serialNumber;
        this->lowWeightVehicle.modelNumber = modelNumber;
    } /* Set lowWeightVehicle in class */

    void setTwoVehicleParams(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") {
        setLightVehicle(serialNumber, modelName, modelNumber, owner);
        setLowWeightVehicle(serialNumber, modelNumber);
    } /* Set TwoVehicle params instead of using initialiser list */

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

    void setHeavyVehicleParams(string modelNumber, string owner = "Ankit") {
        this->heavyVehicle.modelNumber = modelNumber;
        this->heavyVehicle.owner = owner;
    }

    void setFourVehicleParams(string modelNumber, string owner = "Ankit") {
        setHeavyVehicleParams(modelNumber, owner);
    }

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

    void setTwoVehicleParams(string serialNumber, string modelNumber, string modelName, string owner = "Ankit") {
        TwoVehicle::setTwoVehicleParams(serialNumber, modelNumber, modelName, owner); 
    } /* Set two vehicle params */

    void setFourVehicleParams(string modelNumber, string owner = "Ankit") {
        FourVehicle::setFourVehicleParams(modelNumber, owner); 
    } /* Set two vehicle params */
 
    void getTwoVehicleLightVehicleInfo() {
        LightVehicle lightVehicle = TwoVehicle::getLightVehicleInfo(); /* Get child Object data from parent function */
        cout << "---------------------- Light Weight Vehicle ---------------------------\n"
            << "Serial Number : " << lightVehicle.serialNumber
            << "\nModel Number : " << lightVehicle.modelNumber
            << "\nModel Name : " << lightVehicle.modelName
            << "\nOwner : " << lightVehicle.owner << "\n"
            << "---------------------- Light Weight Vehicle ---------------------------\n";
    }

    void getTwoVehicleLowWeightVehicleInfo() {
        LowWeightVehicle lowWeightVehicle = TwoVehicle::getLowWeightVehicleInfo(); /* Get child Object data from parent function */
        cout << "---------------------- Low Weight Vehicle ---------------------------\n"
            << "Serial Number : " << lowWeightVehicle.serialNumber
            << "\nModel Number : " << lowWeightVehicle.modelNumber << "\n" 
            << "---------------------- Low Weight Vehicle ---------------------------\n";
    }

    void getFourVehicleHeavyVehicleInfo() {
        HeavyVehicle heavyVehicle = FourVehicle::getFourVehicleInfo(); /* Get child Object data from parent function */
        cout << "---------------------- Heavy Vehicle ---------------------------\n"
            << "Model Number : " << heavyVehicle.modelNumber
            << "\nOwner : " << heavyVehicle.owner << "\n"
            << "---------------------- Heavy Vehicle ---------------------------\n";
    }
};

void breakLine() {
    cout << "\n";
}

int main() {
    Bicycle bike("TKD23012345678", "DOM-AL2-2023", "Domane AL 2");
    bike.getTwoVehicleLightVehicleInfo(); breakLine();
    bike.getTwoVehicleLowWeightVehicleInfo(); breakLine();
    bike.getFourVehicleHeavyVehicleInfo(); breakLine();

    /* 
        In this code the parameters are not the properties of the object so we 
        can set the params explicitly using setter
    */
    bike.setTwoVehicleParams("SPX2304567890", "RBX-EX-2023", "Roubaix Expert", "Riyansh");
    bike.getTwoVehicleLightVehicleInfo(); breakLine();
    bike.getTwoVehicleLowWeightVehicleInfo(); breakLine();
    bike.getFourVehicleHeavyVehicleInfo(); breakLine();

    bike.setFourVehicleParams("SYN-CB-2024", "Shreya");
    bike.getTwoVehicleLightVehicleInfo(); breakLine();
    bike.getTwoVehicleLowWeightVehicleInfo(); breakLine();
    bike.getFourVehicleHeavyVehicleInfo(); breakLine();

    return 0;
}