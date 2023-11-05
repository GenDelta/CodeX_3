//question 3:
#include <iostream>
using namespace std;

inline int addNumbers(int a, int b) {
    // Implement an inline function that adds two numbers
    // and returns the result.
    return a + b;
}

int multiplyNumbers(int x, int y, int z = 1) {
    // Implement a function that multiplies three numbers, with
    // the third number having a default value of 1.
    return x * y * z;
}

int main() {
    int sum = addNumbers(5, 7);
    int product = multiplyNumbers(3, 4); // Use default argument
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    return 0;
}