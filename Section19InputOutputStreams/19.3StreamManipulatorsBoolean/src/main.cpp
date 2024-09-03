#include <iostream>
#include <iomanip>

int main() {

    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

    // Set true/false formatting
    std::cout << std::boolalpha; // change to true/false
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;
    std::cout << std::endl;

    // Setting still stays for future boolean insertions
    std::cout << "noboolalpha example (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha example (10 == 20): " << (10 == 20) << std::endl;
    std::cout << std::endl;

    // Toggle to 0/1
    std::cout << "Toggle" << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;
    std::cout << std::endl;

    // Set back to true/false using setf method
    std::cout << "std::cout.setf(std::ios::boolalpha);" << std::endl;
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;
    std::cout << std::endl;

    // reset to default which is 0/1
    std::cout << "std::resetiosflags(std::ios::boolalpha);" << std::endl;
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "Default (10 == 20): " << (10 == 20) << std::endl;

    return 0;
}