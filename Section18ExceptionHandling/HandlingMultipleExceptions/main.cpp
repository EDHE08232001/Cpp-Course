#include <iostream>
#include <string>

double calculate_mps(int miles, int gallons)
{
    if (gallons == 0)
    {
        throw 0;
    }

    if (miles < 0 || gallons < 0)
    {
        throw std::string{"Negative Value Error"};
    }

    return static_cast<double>(miles) / gallons;
}

int main()
{
    try
    {
        double miles_per_gallon{calculate_mps(10, 0)};
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex)
    {
        std::cerr << "Your can't divide by 0" << std::endl;
    }
    catch (std::string &ex)
    {
        std::cerr << ex << std::endl;
    }
}