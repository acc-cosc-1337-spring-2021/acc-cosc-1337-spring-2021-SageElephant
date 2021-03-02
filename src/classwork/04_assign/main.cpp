//write includes statements
#include <iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
  int num;
  char go_again;
  
  do
  {
    do
    {
      cout << "Enter an integer number between 1 and 10: \n";
      cin >> num;
    }
    while (!(num >= 1 && num <= 10));
    
    cout << "The factorial of " << num << " is " << factorial(num) << "\n";

    cout << "Would you like to enter another number? Type 'Y' to continue.";
    cin >> go_again;

  }
  while (go_again == 'Y');
  
  cout << "Thanks! The program has finished. \n";
	return 0;
}