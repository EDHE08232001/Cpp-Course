#include <iostream> // Include the input-output stream library

int main()
{
    std::string name; // Variable to store the user's name
    int age;          // Variable to store the user's age

    // Prompt the user for their name
    std::cout << "Please enter your name: ";
    std::getline(std::cin,
                 name); // Read the entire line of input into the 'name' variable

    // Prompt the user for their age
    std::cout << "Please enter your age: ";
    std::cin >> age; // Read the age input into the 'age' variable

    // Output a message using the input data
    std::cout << "Hello, " << name << "! You are " << age << " years old."
              << std::endl;

    return 0; // Indicate that the program ended successfully
}
