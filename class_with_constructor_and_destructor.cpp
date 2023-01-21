#include <iostream>

class MyClass {
    int x;
    int y;

    public:
        // constructor
        MyClass(int x_val, int y_val) : x(x_val), y(y_val) {
            std::cout << "MyClass object created with x = " << x << " and y = " << y << std::endl;
        }

        // destructor
        ~MyClass() {
            std::cout << "MyClass object destroyed with x = " << x << " and y = " << y << std::endl;
        }

        // method
        void print() {
            std::cout << "x = " << x << ", y = " << y << std::endl;
        }
};


int main() {
    // creates an object of MyClass with x = 5 and y = 10
    MyClass obj1(5, 10); 

    // prints x = 5, y = 10
    obj1.print(); 

    // do something with obj1
    // ...

    // obj1 is automatically destroyed when it goes out of scope
    return 0;
}

