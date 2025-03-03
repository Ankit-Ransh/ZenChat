#include<bits/stdc++.h>
using namespace std;

class Brand {
public:
    string name, description, modelNumber, modelName;
    int since;
    bool isActive;

    Brand(string name, string description, string modelNumber, string modelName, int since, bool isActive = true) 
        : name(name), description(description), modelNumber(modelNumber), modelName(modelName), since(since), isActive(isActive) {};
};

class Product {
public:
    string name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate;
    int age;
    bool isExpired;
    Brand brand;

    Product(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : name(name), dateOfManufacture(dateOfManufacture), expiryDate(expiryDate), 
            brand(company, description, serialNumber, manufacturer, age, isExpired) {};

    void setExpiryInformation(bool isExpired) {
        this->brand.isActive = isExpired;
    }   
};

class Distributer {
private:
    Product product;

public:
    Distributer(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : product(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    void setExpiryInformation(bool isExpired) {
        this->product.setExpiryInformation(isExpired);
    }

    Product getProduct() {
        return product;
    }
};

class WholeSaler : protected Distributer {
public: 
    WholeSaler(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : Distributer(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    void setExpiryInformation(bool isExpired) {
        Distributer::setExpiryInformation(isExpired);
    }

    Product getProduct() {
        return Distributer::getProduct();
    }
};

class Retailer : protected WholeSaler {
public:
    Retailer(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : WholeSaler(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    void setExpiryInformation(bool isExpired) {
        WholeSaler::setExpiryInformation(isExpired);
    }

    void getProductInformation() {
        Product product = WholeSaler::getProduct();
        cout << " ----------- Product Information --------------- \n"
            << "Name : " << product.name 
            << "\nCompany : " << product.brand.name 
            << "\nDescription : " << product.brand.description 
            << "\nSerial Number : " << product.brand.modelNumber 
            << "\nManufacturer : " << product.brand.modelName 
            << "\nDate of Manufacture : " << product.dateOfManufacture 
            << "\nExpiry Date : " << product.expiryDate 
            << "\nSince : " << product.brand.since 
            << "\nIs Expired : " << product.brand.isActive 
            << "\n----------- Product Information --------------- \n\n";
    }
};

int main() {
    Retailer soap("Soap", "Dove", "Moisturizing soap bar", "SOAP123456", "Unilever", "2025-01-01", "2025-12-31", 1999);
    soap.getProductInformation(); /* Cannot alter the object as we don't have setters */

    Retailer shampoo("Shampoo", "Pantene", "Nourishing and strengthening shampoo", "SHP987654", "Pantene Corp", "2025-05-01", "2026-05-01", 2020);
    shampoo.setExpiryInformation(true);
    shampoo.getProductInformation();

    return 0;
}