#include <iostream> // Include the iostream library for input and output
#include <iomanip>

int main()
{
    int num{255}; // Initialize an integer variable 'num' with the value 255

    // Default output in decimal (base 10)
    std::cout << "Default (Decimal): " << num << std::endl;

    // Display the number in different bases
    std::cout << std::dec << num << " (Decimal)" << std::endl;     // Decimal format (base 10)
    std::cout << std::hex << num << " (Hexadecimal)" << std::endl; // Hexadecimal format (base 16)
    std::cout << std::oct << num << " (Octal)" << std::endl;       // Octal format (base 8)

    // Show base prefixes using std::showbase
    std::cout << std::showbase; // Enable base prefix
    std::cout << "With showbase:" << std::endl;
    std::cout << std::dec << num << " (Decimal)" << std::endl;     // Decimal format with prefix
    std::cout << std::hex << num << " (Hexadecimal)" << std::endl; // Hexadecimal format with prefix
    std::cout << std::oct << num << " (Octal)" << std::endl;       // Octal format with prefix

    // Show positive sign using std::showpos
    std::cout << std::showpos; // Enable '+' sign for positive numbers
    std::cout << std::dec << num << " (Decimal with positive sign)" << std::endl;

    // Reset manipulators
    std::cout << std::resetiosflags(std::ios::basefield | std::ios::showbase | std::ios::showpos);
    std::cout << "After reset:" << std::endl;
    std::cout << std::dec << num << " (Decimal without showbase or positive sign)" << std::endl;

    // Set uppercase for hexadecimal output
    std::cout.setf(std::ios::uppercase);
    std::cout << std::hex << num << " (Uppercase Hexadecimal)" << std::endl;

    return 0;
}
