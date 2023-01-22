/*
In this example, the new operator is used to dynamically 
allocate memory for an instance of the MyClass class. 

The memory is properly released using the delete operator, 
which calls the destructor of the class and frees the memory. 

The heap-allocated object is being used through a pointer 
variable and the object is being deleted when it's no longer needed. 

This is a good example of using the new operator to 
dynamically allocate memory and ensure that the memory 
is properly released when it is no longer needed.
*/


#include <iostream>

class MyClass {
public:
    MyClass(int value) : m_value(value) { }
    ~MyClass() { }

    int getValue() { return m_value; }

private:
    int m_value;
};

int main() {
    // Allocate memory dynamically for an instance of MyClass
    MyClass* pMyClass = new MyClass(5);

    std::cout << "Value: " << pMyClass->getValue() << std::endl;

    // Release the memory
    delete pMyClass;

    return 0;
}
