// Recursive function to calculate the sum of digits
#include <iostream> // Including the Input/Output Stream Library

int sumOfDigits(int number) {
  // If the number is a single digit, return the number itself
  if (number >= 0 && number <= 9)
    return number;

  // Recursive case: Calculate the sum of the last digit and the sum of the rest of the digits
  return (number % 10) + sumOfDigits(number / 10);
}

int main() {
  int n;
  std::cout << "Input a number: "; // Prompting the user to input a number
  std::cin >> n; // Reading the input number from the user

  // Calculate the sum of digits using recursion
  int sum_digits = sumOfDigits(n); // Calling the recursive function to compute the sum of digits

  std::cout << "Sum of digits of " << n << " is: " << sum_digits << std::endl; // Displaying the sum of digits

  return 0; // Returning 0 to indicate successful execution of the program
}
