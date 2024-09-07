#include <iostream>

int main()
{
    double number{};

    std::cout << "Enter a number: ";
    std::cin >> number;

    try
    {
        if (number == 0)
        {
            throw 0;
        }

        std::cout << "Print " << number << std::endl;
    }
    catch (int &ex)
    {
        std::cout << "Exception Caught" << std::endl;
    }
}