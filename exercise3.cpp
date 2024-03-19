// Recursive function to calculate the nth Fibonacci number
#include <iostream> // Including the Input/Output Stream Library

int fibonacci(int n) {
  // Initial: Fibonacci of 0 is 0, Fibonacci of 1 is 1
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  // Recursive case: Fibonacci of n is the sum of the previous two Fibonacci numbers
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  std::cout << "Input a number: "; // Prompting the user to input a number
  std::cin >> n; // Reading the input number from the user

  // Find the nth Fibonacci number using recursion
  int fib_num = fibonacci(n); // Calling the recursive function to calculate Fibonacci number

  std::cout << "The " << n << "th Fibonacci number is: " << fib_num << std::endl; // Displaying the Fibonacci number

  return 0; // Returning 0 to indicate successful execution of the program
}
