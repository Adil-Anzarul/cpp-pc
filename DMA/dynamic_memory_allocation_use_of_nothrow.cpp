/*
Nothrow constant
This constant value is used as an argument for operator new and 
operator new[] to indicate that these functions shall not throw an 
exception on failure, but return a null pointer instead.

By default, when the new operator is used to attempt to allocate 
memory and the handling function is unable to do so, 
a bad_alloc exception is thrown. But when nothrow is used as argument 
for new, it returns a null pointer instead.
*/

/*
#include <iostream>     // std::cout
#include <new>          // std::nothrow

int main () {
  std::cout << "Attempting to allocate 1 MiB... ";
  char* p = new (std::nothrow) char [1048576];

  if (!p) {   // null pointers are implicitly converted to false
    std::cout << "Failed!\n";
  }
  else {
    std::cout << "Succeeded!\n";
    delete[] p;
  }

  return 0;
}
*/


#include <iostream>     
        

using namespace std;
int main () {
  cout << "Attempting to allocate 1 MiB... ";
  char* p = new (nothrow) char [1048576];

  if (!p) {   // null pointers are implicitly converted to false
    cout << "Failed!\n";
  }
  else {
    cout << "Succeeded!\n";
    delete[] p;
  }

  return 0;
}