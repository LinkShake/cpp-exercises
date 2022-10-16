
#include <iostream>

#define uint unsigned int

uint factorial(uint n) {
    uint s = 1;
    for (uint i = 1; i <= n; i++) {
        s *= i;
    }

    return s;
}

uint recursiveFactorial(uint n) {
    if (n == 1 || n == 0) {
        return 1;
    } 

    return n * recursiveFactorial(n - 1);
}

int main()
{
    uint n;
    std::cout << "insert the number for the factorial function: ";
    std::cin >> n;

    std::cout << "factorial: " << factorial(n) << std::endl;
    std::cout << "recursiveFactorial: " << recursiveFactorial(n) << std::endl;
}

