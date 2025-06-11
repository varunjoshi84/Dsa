#include <iostream>
using namespace std;

class A {
protected:
    int x, y;
public:
    void showdataA() {
        cout << x << " " << y << " ";
    }
};

class B : protected A {
protected:
    int z;
public:
    void getdata() {
        cout << "Enter x, y, and z: ";
        cin >> x >> y >> z;
    }
    void showdataB() {
        showdataA();
        cout << z << " ";
    }
};

int main() {
    B obj;
    obj.getdata();
    obj.showdataB();

    return 0;
}
