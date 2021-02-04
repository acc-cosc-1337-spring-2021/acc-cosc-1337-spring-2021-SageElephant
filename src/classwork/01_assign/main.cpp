//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using namespace std;



int main() 
{
  int num;
	cout << "Enter your number: ";
	cin >> num;
	int result;
	result = multiply_numbers(num);
	cout << "Your number multiplied by 5 = " << result << endl;
	
	int num1 = 4;
	result = multiply_numbers(num1);
	cout << "The second result is: 4 x 5 = " << result << endl;
	return 0;
}