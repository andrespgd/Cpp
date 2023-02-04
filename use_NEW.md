In C++, new is used to dynamically allocate memory on the heap, which is memory that is not automatically deallocated when the function it was declared in exits. This is useful when you need to allocate objects or variables that need to persist beyond the scope of a single function.

On the other hand, variables declared on the stack (using just the type and the variable name) are automatically deallocated when the function they were declared in exits. This is useful for simple, short-lived variables.

Here is an example that demonstrates when to use new and when not to use it:

```
#include <iostream>

void foo()
{
    int x = 5;
    std::cout << "x in foo(): " << x << std::endl;
}

int main()
{
    int y = 10;
    std::cout << "y in main(): " << y << std::endl;

    int* z = new int(15);
    std::cout << "z in main(): " << *z << std::endl;

    foo();

    std::cout << "y in main(): " << y << std::endl;
    std::cout << "z in main(): " << *z << std::endl;

    delete z;

    return 0;
}
```
In this example, x is declared in foo and is a stack variable, so it will be deallocated when foo returns. y is declared in main and is also a stack variable. z is declared in main using new, so it is a heap variable and will persist after foo returns. Note that the value of y is unchanged after foo returns, but the value of z can still be accessed and printed. The delete operator is used to deallocate z when it is no longer needed to prevent memory leaks.
