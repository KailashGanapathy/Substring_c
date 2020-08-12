/**
* @file memory_allocation.c
*
*/

#include "memory_allocation.h"
#include <stdlib.h>

/**
* This function is used to allocate memory the number of substring get appended
* @param row_memory_size is dynammically allocated with (char*) times row_memory_size.
* @note void* is set as return dataype, it actually returns char**;
*/

 void* row_memory_allocation (int row_memory_size)
 {
    char **strarr = malloc ((row_memory_size) * sizeof(char*));
    return strarr;
 }

/**
* This function is used to allocate memory the particular substring to be added
* @param column_memory_size is dynammically allocated with (char) times column_memory_size.
* @note void* is set as return dataype, it actually returns char*;
*/

 void* column_memory_allocation (int column_memory_size)
 {
     char *strarr = malloc ((column_memory_size) * sizeof(char));
     return strarr;
 }

