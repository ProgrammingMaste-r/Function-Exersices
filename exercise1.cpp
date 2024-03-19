//Write a C++ program to calculate the factorial of a given number using recursion.
#include <iostream> // Including the Input/Output Stream Library

// Recursive function to calculate the factorial
int factorial(int n) {
  // Factorial of 0 or 1 is 1
  if (n == 0 || n == 1)
    return 1;

  // Recursive case: factorial of n is n multiplied by factorial of (n-1)
  return n * factorial(n - 1);
}

int main() {
  int num;
  std::cout << "Input a number: "; // Prompting the user to input a number
  std::cin >> num; // Reading the input number from the user

  // Calculate the factorial using recursion
  int fact = factorial(num); // Calling the recursive function to calculate factorial

  std::cout << "Factorial of " << num << " is: " << fact << std::endl; // Displaying the factorial

  return 0; // Returning 0 to indicate successful execution of the program
}
