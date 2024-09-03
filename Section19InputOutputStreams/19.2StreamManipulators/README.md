# Stream Manipulators
* streams have useful member functions to control formatting
* can be used on input and output streams
* the time of the effect on the streamvaries
* can be used as member functions or as a manipulator
    - `std::cout.width(10);` // member function
    - `std::cout << std::setw(10);` // manipulator

## Common Stream Manipulator
- Boolean
    * boolalpha, noboolalpha
- Integer
    * dec, hec, oct, showbase, noshowbase, showpos, noshowpos
    * uppercase, nouppercase
- Floating point
    * fixed, scientific...
- Field width, justification and fill
    * setw, left, right...
- Others
    * endl, flush, skipws...