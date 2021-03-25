#include<string>

/*
Write prototype for function get_gc_content that accepts
a const reference string parameter and returns a double
*/
double get_gc_content(const std::string& dna);

/*
Write prototype for function get_reverse_string that 
accepts a string parameter and returns a string
*/

std::string get_reverse_string(std::string dna);  /* Note: One part of the HW description said to use the function name reverse_string and a different part said get_reverse_string. I used the latter. */

/*
Write prototype for function get_dna_complement that
accepts a string and returns a string
*/

std::string get_dna_complement(std::string dna);
