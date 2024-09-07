#include "Account.h"
#include "Checking_Account.h"
#include "IllegalBalanceException.h"
#include <iostream>
#include <memory>

using namespace std;

int main() {
  try {
    // Create a unique pointer to a Checking_Account object
    // The constructor may throw an IllegalBalanceException if a negative
    // balance is passed
    std::unique_ptr<Account> moes_account =
        std::make_unique<Checking_Account>("Moe", -10.0);

    // If the account creation succeeds, display the account details
    std::cout << *moes_account << std::endl;

  } catch (const std::exception &ex) {
    // Catch any other standard exceptions that might occur
    std::cerr << "An unexpected error occurred: " << ex.what() << std::endl;
  } catch (...) {
    // Catch any non-standard exceptions (not derived from std::exception)
    std::cerr << "An unknown error occurred." << std::endl;
  }

  // Indicate that the program has completed execution
  std::cout << "Program completed successfully" << std::endl;
  return 0;
}
