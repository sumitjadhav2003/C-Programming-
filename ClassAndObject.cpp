#include <iostream>
using namespace std;


class Car {
public:
    // Data members
    string brand;
    int year;

    // Member function 
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object 
    Car myCar;


    myCar.brand = "Toyota";
    myCar.year = 2022;

    myCar.brand = "TaTa";
    myCar.year = 2020;
  
    myCar.displayDetails();
    myCar.displayDetails();

    return 0;
}
