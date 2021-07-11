// 1) Using a single pointer:
// A simple way is to allocate memory block of size r*c and access elements 
// using simple pointer arithmetic.


// #include <stdio.h>
// #include <stdlib.h>
  
// int main()
// {
//     int r = 3, c = 4;
//     int *arr = (int *)malloc(r * c * sizeof(int));
  
//     int i, j, count = 0;
//     for (i = 0; i <  r; i++)
//       for (j = 0; j < c; j++)
//          *(arr + i*c + j) = ++count;
  
//     for (i = 0; i <  r; i++)
//       for (j = 0; j < c; j++)
//          printf("%d ", *(arr + i*c + j));
  
//    /* Code for further processing and free the 
//       dynamically allocated memory */
    
//    return 0;
// }

// 2) Using an array of pointers
// We can create an array of pointers of size r. Note that from C99, 
// C language allows variable sized arrays. After creating an array of pointers, 
// we can dynamically allocate memory for every row.

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int r = 3, c = 4, i, j, count;

// 	int *arr[r];
// 	for (i=0; i<r; i++)
// 		arr[i] = (int *)malloc(c * sizeof(int));

// 	// Note that arr[i][j] is same as *(*(arr+i)+j)
// 	count = 0;
// 	for (i = 0; i < r; i++)
// 	for (j = 0; j < c; j++)
// 		arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

// 	for (i = 0; i < r; i++)
// 	for (j = 0; j < c; j++)
// 		printf("%d ", arr[i][j]);

// 	/* Code for further processing and free the
// 	dynamically allocated memory */

// return 0;
// }


// 3) Using pointer to a pointer
// We can create an array of pointers also dynamically using 
// a double pointer. Once we have an array pointers allocated dynamically, 
// we can dynamically allocate memory and for every row like method 2.



#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int r = 3, c = 4, i, j, count;
  
    int **arr = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));
  
    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count
  
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", arr[i][j]);
  
   /* Code for further processing and free the 
      dynamically allocated memory */
  
   return 0;
}

/*
// 4) Using double pointer and one malloc call


#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    int r=3, c=4, len=0;
    int *ptr, **arr;
    int count = 0,i,j;
  
    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr = (int **)malloc(len);
  
    // ptr is now pointing to the first element in of 2D array
    ptr = (int *)(arr + r);
  
    // for loop to point rows pointer to appropriate location in 2D array
    for(i = 0; i < r; i++)
        arr[i] = (ptr + c * i);
  
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count
  
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
  
    return 0;
}
*/

