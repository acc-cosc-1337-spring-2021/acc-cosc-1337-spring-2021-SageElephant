#include "dna.h"
using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
  double g_or_c_count = 0;
  
  for(auto i: dna)
  {
    if(i == 'G' || i == 'C')
    {
      g_or_c_count++;
    }
  }
  
  double percentage = g_or_c_count / dna.size();
  return percentage;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
  int len = dna.length();
  string dna_updated;

  for(auto i = len-1; i >= 0; i--)
  {
    dna_updated.push_back(dna[i]);
  }

  return dna_updated;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
  string str_updated = get_reverse_string(dna);

  for(auto& i : str_updated)
  {
    switch(i)
    {
      case 'A':
        i = 'T';
        break;
      case 'T':
        i = 'A';
        break;
      case 'C':
        i = 'G';
        break;
      case 'G':
        i = 'C';
        break;
      default:
        i = 'X';  // X indiates an error
        break;
    }
  }
  return str_updated;
}