#include <iostream>
#include <cmath>
using namespace std;

class BODMAS {
private:
    float result;

public:
    BODMAS() {
        result = 0;
    }

    BODMAS(int a, int b) {
        result = a + b;
    }

    BODMAS(float a, float b) {
        result = a * b;
    }

    BODMAS(int a, int b, char op) {
        if (op == '^') {
            result = pow(a, b);
        } else {
            result = 0;
        }
    }

    void displayResult() {
        cout << result << endl;
    }
};

int main() {
    BODMAS obj1;
    obj1.displayResult();
    
    int x, y;
    cin >> x >> y;
    
    BODMAS obj2(x, y);
    obj2.displayResult();

    BODMAS obj3((float)x, (float)y); 
    obj3.displayResult();

    BODMAS obj4(x, y, '^');
    obj4.displayResult();

    return 0;
}
