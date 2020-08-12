/**
* @file substring.c
*
*/

#include "substring.h"
#include "memory_allocation.h"
#include <string.h>
#include <stdlib.h>

/**
* This function used to break the string to substring, 
* The delimeter is initially counted to calculate number of substrings are to be broken.
* whenever the delimeter '_' is detected the substring is dynamically allocate its memory of its size by calling column_memory_allocation function 
* @see row_memory_allocation()
* @see column_memory_allocation()
* @param instr is the string to be broken to substrings
* substring_array_index is used to point the index of substring in array of strings.
* column_memory_index is calculated to allocate memory for substring in array of string
*/

void* substring (char* instr)
{
    char **strarr = NULL, *buffer = NULL;

    int iter, substring_array_index=0, row_memory_size_counter=1, column_memory_index = 0;
    

    for(iter=0; iter<strlen(instr); iter++)
    {
        if(instr[iter] == '_')
        {
            row_memory_size_counter++;
        }
    }
    /**
    * @param row_memory_size_counter Calculated delimeter value used to allocate the memory for number of substring. 
    */

    strarr = row_memory_allocation (row_memory_size_counter);

    /**
    * @param buffer of size 50 is used to store the substring before it get append to the array of strings. 
    */

    buffer = column_memory_allocation(50);      /* Allocate buffer_memory */

    

    for(iter=0; iter<strlen(instr); iter++, column_memory_index++)
    {
        if(instr[iter] == '_')
        {

            buffer[column_memory_index] = '\0';
            strarr[substring_array_index] = column_memory_allocation (column_memory_index);
            strcpy(strarr[substring_array_index], buffer);
            substring_array_index++;
            iter++;
            column_memory_index = 0;
        }
        buffer[column_memory_index] = instr[iter];
    }
        buffer[column_memory_index] = '\0';
        strarr[substring_array_index] = column_memory_allocation(column_memory_index);
        strcpy(strarr[substring_array_index], buffer);
        free(buffer);       
    return strarr;
}

