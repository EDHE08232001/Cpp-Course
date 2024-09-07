#include <iostream>

class DivideByZeroException
{
};

class NegativeValueException
{
};

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
    {
        throw DivideByZeroException();
    }

    if (miles < 0 || gallons < 0)
    {
        throw NegativeValueException();
    }

    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;

    try
    {
        miles_per_gallons = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallons << std::endl;
    }
    catch (const DivideByZeroException &ex)
    {
        std::cerr << "No Divide By 0" << std::endl;
    }
    catch (const NegativeValueException &ex)
    {
        std::cerr << "No Negative Values" << std::endl;
    }
}