#include <iostream>

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
    {
        throw 0;
    }
    return static_cast<double>(miles) / gallons;
}

int main()
{
    try
    {
        double miles_per_gallon = calculate_mpg(100, 0);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex)
    {
        std::cout << "Exception is caught: " << ex << std::endl;
    }
}