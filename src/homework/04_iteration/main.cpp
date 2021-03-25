//write include statements
#include <iostream>
#include "dna.h"
//write using statements
using std::cout;    using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna;
  string user_choice;
  char quit_prog;

  do
  {
    
    cout<<"Enter 1 for GC Content. Enter 2 for DNA Complement: \n";
    cin >> user_choice;

    if (user_choice == "1")
    {
      cout<<"Enter a DNA strand (using all caps) \n";
      cin >> dna;
      cout<<"The GC Content is: " << get_gc_content(dna) << "\n";
    }
    else if(user_choice == "2")
    {
      cout<<"Enter a DNA strand (using all caps) \n";
      cin >> dna;
      cout<<"The DNA Complement is: " << get_dna_complement(dna) << "\n";
    }
    else
    {
      cout<<"You entered an invalid menu selection \n";
    }

    cout<<"Would you like to quit program? Type 'Y' or 'y' to quit. \n";
    cout<<"Enter any other key to continue: \n";
    cin >> quit_prog;

  }
  while(!(quit_prog == 'Y' || quit_prog == 'y'));
  
  return 0;
}