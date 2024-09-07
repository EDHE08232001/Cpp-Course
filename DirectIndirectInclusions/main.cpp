#include <iostream> // Directly include <iostream> for standard I/O operations

// <iostream> includes <ostream> internally, so we don't need to include
// <ostream> directly.

int main()
{
    // std::cout is an object of std::ostream class used for output, provided by
    // <iostream>.
    std::cout << "Hello, World!" << std::endl;

    // std::endl is also part of <ostream>, but it's available because <iostream>
    // includes <ostream>.

    // Explicitly including <ostream> here would be redundant because <iostream>
    // covers it. However, if we were using advanced features from <ostream>
    // directly, we might consider including it explicitly for clarity.

    return 0;
}
