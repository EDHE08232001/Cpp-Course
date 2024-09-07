#ifndef ILLEGAL_BALANCE_EXCEPTION_H
#define ILLEGAL_BALANCE_EXCEPTION_H

#include <exception> // Include standard exception header

// Custom exception class derived from std::exception
class IllegalBalanceException : public std::exception {
public:
  // Default constructor, marked noexcept to guarantee no exceptions are thrown
  IllegalBalanceException() noexcept = default;

  // Destructor, also marked noexcept to guarantee no exceptions are thrown
  ~IllegalBalanceException() noexcept = default;

  // Overriding the what() function from std::exception
  // This function returns a descriptive error message
  // It is marked as const because it doesn't modify any class members
  // It is marked as noexcept to guarantee no exceptions are thrown
  virtual const char *what() const noexcept override {
    return "Illegal Balance Exception";
  }
};

#endif // ILLEGAL_BALANCE_EXCEPTION_H
