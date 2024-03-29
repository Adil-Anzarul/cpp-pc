/*
// Method 1: using a single pointer – In this method, a memory block of size M*N 
// is allocated and then the memory blocks are accessed using pointer arithmetic.
// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Dimensions of the 2D array
	int m = 3, n = 4, c = 0;

	// Declare a memory block of
	// size m*n
	int* arr = new int[m * n];

	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Assign values to
			// the memory block
			*(arr + i * n + j) = ++c;
		}
	}

	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Print values of the
			// memory block
			cout << *(arr + i * n + j)
				<< " ";
		}
		cout << endl;
	}

	//Delete the array created
	delete[] arr;

	return 0;
}

*/

// Method 2: using an array of pointer: Here an array of pointers is created 
// and then to each memory block

// C++ program to dynamically allocate
// the memory for 2D array in C++
// using new operator
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Dimensions of the array
	int m = 3, n = 4, c = 0;

	// Declare memory block of size M
	int** a = new int*[m];

	for (int i = 0; i < m; i++) {

		// Declare a memory block
		// of size n
		a[i] = new int[n];
	}

	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Assign values to the
			// memory blocks created
			a[i][j] = ++c;
		}
	}

	// Traverse the 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Print the values of
			// memory blocks created
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	//Delete the array created
	for(int i=0;i<m;i++) //To delete the inner arrays
	delete [] a[i];
	delete [] a;			 //To delete the outer array
							//which contained the pointers
							//of all the inner arrays
	
	return 0;
}
