#include <iostream>   // Include the iostream library for standard input and output
#include <iomanip>    // Include the iomanip library for input/output manipulators

int main() {
    // Display the default format for boolean values (1 for true, 0 for false)
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;  // Outputs: 1
    std::cout << "noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;  // Outputs: 0

    // Set output format to 'true' or 'false' for boolean values
    std::cout << std::boolalpha; // Enables boolalpha, changes output to textual representation (true/false)
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;  // Outputs: true
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;  // Outputs: false
    std::cout << std::endl;  // Print a newline for better output readability

    // The boolalpha setting remains in effect for all subsequent boolean values
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;  // Still outputs: true
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;  // Still outputs: false
    std::cout << std::endl;  // Print another newline

    // Toggle back to the default format (1 or 0) using noboolalpha
    std::cout << "Toggle" << std::endl;  // Display a message indicating the change
    std::cout << std::noboolalpha; // Disables boolalpha, changes output back to numeric representation (1/0)
    std::cout << "noboolalpha example (10 == 10): " << (10 == 10) << std::endl;  // Outputs: 1
    std::cout << "noboolalpha example (10 == 20): " << (10 == 20) << std::endl;  // Outputs: 0
    std::cout << std::endl;  // Print another newline

    // Set back to 'true/false' using the setf method
    std::cout << "std::cout.setf(std::ios::boolalpha);" << std::endl;  // Display the method being used
    std::cout.setf(std::ios::boolalpha); // Sets the format flag to boolalpha for true/false output
    std::cout << "boolalpha example (10 == 10): " << (10 == 10) << std::endl;  // Outputs: true
    std::cout << "boolalpha example (10 == 20): " << (10 == 20) << std::endl;  // Outputs: false
    std::cout << std::endl;  // Print another newline

    // Reset to the default format (1 or 0) using resetiosflags
    std::cout << "std::resetiosflags(std::ios::boolalpha);" << std::endl;  // Display the reset method being used
    std::cout << std::resetiosflags(std::ios::boolalpha); // Resets the format flag, back to default numeric output
    std::cout << "Default (10 == 10): " << (10 == 10) << std::endl;  // Outputs: 1
    std::cout << "Default (10 == 20): " << (10 == 20) << std::endl;  // Outputs: 0

    return 0;  // Return 0 to indicate successful program execution
}
