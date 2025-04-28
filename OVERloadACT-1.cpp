#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:

    int add(int nums[], int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += nums[i];
        }
        return sum;
    }

    float add(float nums[], int size) {
        float sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += nums[i];
        }
        return sum;
    }

    int subtract(int nums[]) {
        return nums[0] - nums[1];
    }

    int multiply(int nums[]) {
        return nums[0] * nums[1];
    }

    float divide(float nums[]) {
        if (nums[1] == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return nums[0] / nums[1];
    }
};

int main() {
    Calculator calc;
    int choice;
    string again;

    do {
        cout << "\n=== Simple Calculator ===" << endl;
        cout << "1. Add two integers" << endl;
        cout << "2. Add three integers" << endl;
        cout << "3. Add two floats" << endl;
        cout << "4. Subtract two integers" << endl;
        cout << "5. Multiply two integers" << endl;
        cout << "6. Divide two floats" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) {
            int nums[2];
            cout << "Enter two integers: ";
            cin >> nums[0] >> nums[1];
            cout << "Result: " << calc.add(nums, 2) << endl;
        }
        else if (choice == 2) {
            int nums[3];
            cout << "Enter three integers: ";
            cin >> nums[0] >> nums[1] >> nums[2];
            cout << "Result: " << calc.add(nums, 3) << endl;
        }
        else if (choice == 3) {
            float nums[2];
            cout << "Enter two floats: ";
            cin >> nums[0] >> nums[1];
            cout << "Result: " << calc.add(nums, 2) << endl;
        }
        else if (choice == 4) {
            int nums[2];
            cout << "Enter two integers: ";
            cin >> nums[0] >> nums[1];
            cout << "Result: " << calc.subtract(nums) << endl;
        }
        else if (choice == 5) {
            int nums[2];
            cout << "Enter two integers: ";
            cin >> nums[0] >> nums[1];
            cout << "Result: " << calc.multiply(nums) << endl;
        }
        else if (choice == 6) {
            float nums[2];
            cout << "Enter two floats: ";
            cin >> nums[0] >> nums[1];
            cout << "Result: " << calc.divide(nums) << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> again;

    } while (again == "y" || again == "Y");

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}
