#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details." << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

class Developer : public Employee {
public:
    void showDetails() override {
        cout << "I am a Developer. I write code." << endl;
    }
};

int main() {
    Employee* employees[2];
    employees[0] = new Manager();
    employees[1] = new Developer();

    cout << "What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "Enter your choice (1 or 2): ";
    int choice;
    cin >> choice;

    if (choice == 1 || choice == 2) {
        employees[choice - 1]->showDetails();
    } else {
        cout << "Invalid choice." << endl;
    }

    delete employees[0];
    delete employees[1];

    return 0;
}
