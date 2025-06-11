#include <iostream>
#include <cmath>
using namespace std;

class BODMAS {
private:
    float result;

public:
    BODMAS() {
        result = 0;  // Initialize result to 0
        cout << "Default constructor called. Result = " << result << endl;
    }

    // Constructor with two integer inputs
    BODMAS(int a, int b) {
        result = a + b;  // Example of addition
        cout << "Result (addition of integers): " << result << endl;
    }

    // Constructor with two float inputs
    BODMAS(float a, float b) {
        result = a * b;  // Example of multiplication
        cout << "Result (multiplication of floats): " << result << endl;
    }

    // Constructor with operation (power example)
    BODMAS(int a, int b, char op) {
        if (op == '^') {
            result = pow(a, b);  // Power operation (a^b)
            cout << "Result (power operation): " << result << endl;
        } else {
            cout << "Enter only '^' symbol for power operation" << endl;
        }
    }

    // Method to display result
    void displayResult() {
        cout << "Final result: " << result << endl;
    }
};

int main() {
    // Using default constructor
    BODMAS obj1;
    obj1.displayResult();

    // Using constructor with two integers
    BODMAS obj2(10, 5);
    obj2.displayResult();

    // Using constructor with two floats
    BODMAS obj3(4.2f, 3.8f);
    obj3.displayResult();

    // Using constructor for power operation
    BODMAS obj4(2, 3, '^');
    obj4.displayResult();

    return 0;
}
