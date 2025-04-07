// C++ program to demonstrate 
// accessing of data members 
  
#include <iostream>
using namespace std;
class Geeks
{
    // Access specifier
    public:
  
    // Data Members
    string geekname;
  
    // Member Functions()
    void printname()
    {
       cout << "Geekname is: " << geekname;
    }
};