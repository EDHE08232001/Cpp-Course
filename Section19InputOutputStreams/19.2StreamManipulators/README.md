# Stream Manipulators
* streams have useful member functions to control formatting
* can be used on input and output streams
* the time of the effect on the streamvaries
* can be used as member functions or as a manipulator
    - `std::cout.width(10)` // member function
    - `std::cout << std::setw(10)` // manipulator