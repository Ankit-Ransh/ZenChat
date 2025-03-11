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
};

class Distributer {
private:
    Product product;

public:
    Distributer(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : product(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    Product getProduct() {
        return product;
    }
};

class WholeSaler : protected Distributer {
public: 
    WholeSaler(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : Distributer(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    Product getProduct() {
        return Distributer::getProduct();
    }
};

class Retailer : protected WholeSaler {
public:
    Retailer(string name, string company, string description, string serialNumber, string manufacturer, 
        string dateOfManufacture, string expiryDate, int age, bool isExpired = false) 
        : WholeSaler(name, company, description, serialNumber, manufacturer, dateOfManufacture, expiryDate, age, isExpired) {};

    void getProductInformation() {
        Product product = WholeSaler::getProduct();
        cout << " ----------- Product Information --------------- \n"
            << "Name : " << product.name 
            << "\nCompany : " << product.company 
            << "\nDescription : " << product.description 
            << "\nSerial Number : " << product.serialNumber 
            << "\nManufacturer : " << product.manufacturer 
            << "\nDate of Manufacture : " << product.dateOfManufacture 
            << "\nExpiry Date : " << product.expiryDate 
            << "\nSince : " << product.age 
            << "\nIs Expired : " << product.isExpired 
            << "\n----------- Product Information --------------- \n";
    }
};

int main() {
    Retailer soap("Soap", "Dove", "Moisturizing soap bar", "SOAP123456", "Unilever", "2025-01-01", "2025-12-31", 12);
    soap.getProductInformation();

    /* 
        You will not get the brand information in product why? -- intermediate_0.cpp 

        *
            Brand is member of product so to get information from inside the brand we need 
            product.brand.X where X are properties of brand 
        *
    */

    return 0;
}