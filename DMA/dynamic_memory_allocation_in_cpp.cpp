/*
// Syntax to use new operator: 
// To allocate memory of any data type, the syntax is:
// pointer-variable = new data-type;

int *p = new int;

// We can also initialize the memory using new operator:
// pointer-variable = new data-type(value);
// Example:
int *p = new int(25);
float *q = new float(75.25);

// Allocate block of memory: new operator is also used to allocate a block(an array) 
// of memory of type data-type.
// pointer-variable = new data-type[size];
// where size(a variable) specifies the number of elements in an array.
// Example:
        
int *p = new int[10]

// Dynamically allocates memory for 10 integers continuously of type int and 
// returns pointer to the first element of the sequence, which is assigned to 
// p(a pointer). p[0] refers to first element, p[1] refers to second element 
// and so on.



// Syntax:

// Release memory pointed by pointer-variable
// delete pointer-variable;  
// Here, pointer-variable is the pointer that points to the data object created 
// by new.
// Examples:

//   delete p;
//   delete q;
// To free the dynamically allocated array pointed by pointer-variable, use 
// following form of delete:

// Release block of memory 
// pointed by pointer-variable
// delete[] pointer-variable;  

// Example:
   // It will free the entire array
   // pointed by p.
//    delete[] p;
*/


// C++ program to illustrate dynamic allocation
// and deallocation of memory using new and delete
#include <iostream>
using namespace std;

int main ()
{
	// Pointer initialization to null
	int* p = NULL;

	// Request memory for the variable
	// using new operator
	p = new(nothrow) int;
	if (!p)
		cout << "allocation of memory failed\n";
	else
	{
		// Store value at allocated address
		*p = 29;
		cout << "Value of p: " << *p << endl;
	}

	// Request block of memory
	// using new operator
	float *r = new float(75.25);

	cout << "Value of r: " << *r << endl;

	// Request block of memory of size n
	int n = 5;
	int *q = new(nothrow) int[n];

	if (!q)
		cout << "allocation of memory failed\n";
	else
	{
		for (int i = 0; i < n; i++)
			q[i] = i+1;

		cout << "Value store in block of memory: ";
		for (int i = 0; i < n; i++)
			cout << q[i] << " ";
	}

	// freed the allocated memory
	delete p;
	delete r;

	// freed the block of allocated memory
	delete[] q;

	return 0;
}




