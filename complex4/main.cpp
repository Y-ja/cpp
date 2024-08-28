#include <iostream>
#include "com4.h"

int main() {
    Complex c1(4.0, 3.0),c2(3.0, 4.0);
 

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot;

    try {
        quot = c1 / c2;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "c1-> " << c1 << std::endl;
    std::cout << "c2-> " << c2 << std::endl;
    std::cout << "Sum-> " << sum << std::endl;
    std::cout << "Difference-> " << diff << std::endl;
    std::cout << "Product-> " << prod << std::endl;
    std::cout << "Quotient-> " << quot << std::endl;

    return 0;
}
