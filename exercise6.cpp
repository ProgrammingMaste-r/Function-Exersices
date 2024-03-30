//Write a C++ program to reverse a string using recursion.
//This one is the one i tried it also works
/*#include <iostream>
using namespace std;

string reverse(char name[],int size)
{
    if (size < 0)
        return "";
    return name[size]+reverse(name,size-1);
}
int main ()
{
    char Name[]= "Binyam Cheru";
    int size=sizeof(Name)/sizeof(Name[0]);
    string out = reverse(Name,size-1);
    cout << out;
    return 0;
}*/
//The answer from w3resourses
// Recursive function to reverse a string
#include <iostream> // Including the Input/Output Stream Library
#include <string> // Including the String Library

// Recursive function to reverse a string
void reverse_String(std::string & text, int start, int end) {
  // Base case: when start >= end, the string is fully reversed
  if (start >= end)
    return;

  // Swap characters at start and end indices
  std::swap(text[start], text[end]);

  // Recursive case: move to the next pair of characters
  reverse_String(text, start + 1, end - 1);
}

int main() {
  std::string text; // Declaring a string variable to store user input
  std::cout << "Input a string: ";
  std::getline(std::cin, text); // Taking a string input from the user

  // Reverse the string using recursion
  reverse_String(text, 0, text.length() - 1);

  std::cout << "Reversed string: " << text << std::endl; // Displaying the reversed string

  return 0; // Returning 0 to indicate successful execution of the program
}

