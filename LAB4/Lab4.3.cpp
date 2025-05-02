#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double price;
    
public:
    Car(const string& m = "", int y = 0, double p = 0.0) : model(m), year(y), price(p) {
        cout << "Car Constructor: " << model << " (" << year << ") - $" << price << endl;
    }
    
    ~Car() {
        cout << "Car Destructor: " << model << " destroyed" << endl;
    }
    
    void input() {
        cout << "Enter model: ";
        cin.ignore();
        getline(cin, model);
        
        cout << "Enter year: ";
        cin >> year;
        
        cout << "Enter price: $";
        cin >> price;
    }
    
    void display() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }
};

class CarCollection {
private:
    Car* cars;
    int count;
    
public:
    CarCollection() {
        cout << "How many cars do you want to enter? ";
        cin >> count;
        
        cars = new Car[count]; // Dynamically allocate array of cars
        
        for (int i = 0; i < count; i++) {
            cout << "\nEnter model for car " << (i+1) << ": ";
            cars[i].input();
        }
        
        cout << "CarCollection initialized with " << count << " cars" << endl;
    }
    
    ~CarCollection() {
        delete[] cars; // Free the memory
        cout << "CarCollection destroyed" << endl;
    }
    
    void displayCars() const {
        cout << "\nCar Collection" << endl;
        for (int i = 0; i < count; i++) {
            cars[i].display();
        }
    }
};

int main() {
    CarCollection myCollection;
    myCollection.displayCars();
    
    return 0; // Collection will be destroyed when program exits
}