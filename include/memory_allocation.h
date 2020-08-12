/**
* @file memory_allocation.h
*
*/

#ifndef __MEMORY_ALLOCATION_H__
#define __MEMORY_ALLOCATION_H__

/**
* The Array of String pointer need to allocate with memory to store substrings
* Row memory allocation is dynamically allocated with (number delimeter "_" + 1) of size
*/

void* row_memory_allocation (int row_memory_size);

/**
* Column memory allocation is dynamically allocated with (length of the substring)
*/ 

void* column_memory_allocation (int column_memory_size);
/**
* @note Both Row memory allocation and Column memory allocation returns (void*) of pointer of the string array 
*/

#endif /* #ifndef __MEMORY_ALLOCATION_H__ */