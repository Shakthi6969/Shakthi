#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string model;
    int year;
    float price;

public:
    Car(string m = "", int y = 0, float p = 0.0) : model(m), year(y), price(p) {}

    virtual ~Car() {
        cout << "Car destroyed: " << model << endl;
    }

    void inputBasic() {
        cout << "Model: ";
        cin.ignore();
        getline(cin, model);

        cout << "Year: ";
        cin >> year;

        cout << "Price: $";
        cin >> price;
    }

    void displayBasic() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price;
    }

    virtual void input() {
        inputBasic();
    }

    virtual void display() const {
        displayBasic();
        cout << endl;
    }
};

class ElectricCar : public Car {
private:
    float batterySize;

public:
    ElectricCar() : batterySize(0.0) {}

    ~ElectricCar() override {
        cout << "Destroying Electric Car: " << model << endl;
    }

    void input() override {
        inputBasic();
        cout << "Battery size (kWh): ";
        cin >> batterySize;
    }

    void display() const override {
        displayBasic();
        cout << ", Battery: " << batterySize << " kWh" << endl;
    }
};

class GasCar : public Car {
private:
    float fuelCapacity;

public:
    GasCar() : fuelCapacity(0.0) {}

    ~GasCar() override {
        cout << "Destroying Gas Car: " << model << endl;
    }

    void input() override {
        inputBasic();
        cout << "Fuel capacity (L): ";
        cin >> fuelCapacity;
    }

    void display() const override {
        displayBasic();
        cout << ", Fuel: " << fuelCapacity << " L" << endl;
    }
};

class HybridCar : public Car {
private:
    float batterySize;
    float fuelCapacity;

public:
    HybridCar() : batterySize(0.0), fuelCapacity(0.0) {}

    ~HybridCar() override {
        cout << "Destroying Hybrid Car: " << model << endl;
    }

    void input() override {
        inputBasic();
        cout << "Battery size (kWh): ";
        cin >> batterySize;
        cout << "Fuel capacity (L): ";
        cin >> fuelCapacity;
    }

    void display() const override {
        displayBasic();
        cout << ", Battery: " << batterySize << " kWh, Fuel: " << fuelCapacity << " L" << endl;
    }
};

int main() {
    int n;
    cout << "Number of cars to enter: ";
    cin >> n;

    Car** cars = new Car*[n];
    int* types = new int[n];

    for (int i = 0; i < n; i++) {
        int type;
        cout << "\nCar " << i + 1 << " Type:\n";
        cout << "1. Electric\n2. Gas\n3. Hybrid\nChoice: ";
        cin >> type;

        types[i] = type;

        switch (type) {
            case 1: cars[i] = new ElectricCar(); break;
            case 2: cars[i] = new GasCar(); break;
            case 3: cars[i] = new HybridCar(); break;
            default: cout << "Invalid type, creating generic car.\n"; cars[i] = new Car(); break;
        }

        cars[i]->input();
    }

    cout << "\n--- Fleet Information ---\n";
    for (int i = 0; i < n; i++) {
        switch (types[i]) {
            case 1: static_cast<ElectricCar*>(cars[i])->display(); break;
            case 2: static_cast<GasCar*>(cars[i])->display(); break;
            case 3: static_cast<HybridCar*>(cars[i])->display(); break;
            default: cars[i]->display(); break;
        }
    }

    cout << "\n--- Cleaning Up ---\n";
    for (int i = 0; i < n; i++) {
        delete cars[i];
    }

    delete[] cars;
    delete[] types;

    return 0;
}
