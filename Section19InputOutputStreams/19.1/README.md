# Files, streams, and I/O

* c++ uses streams as an interface between the program input and output
* Independent of the actual device
* Sequence of bytes
* Input stream provides data to the program
* Output stream receives data from the program

**Diagram:**
Input Device --> Input Stream --> Program --> Output Stream --> Output Device

## Common Header Files For I/O Streams
- iostream
    * provides definitions for formatted input and output from/to streams
- fstream
    * provides definitions for formatted input and output from/to file streams
- iomanip
    * provides definitions for manipulators used to format stream I/O

