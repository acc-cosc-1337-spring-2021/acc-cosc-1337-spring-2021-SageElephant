//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"

//Write namespace using statements for cout and cin
using std::cout;   using std::cin;

int main() 
{
int grade;

cout << "Please enter a grade between 0 and 100: ";
cin >> grade;

if (grade >= 0 && grade <= 100)
{
  cout << "(If function) Your letter grade is " << get_letter_grade_using_if(grade) << "\n";
  cout << "(Switch function) Your letter grade is " << get_letter_grade_using_switch(grade) << "\n";
}
else
{
  cout << "Number out of range. You must enter a number between 0 and 100.";
}

	return 0;
}

