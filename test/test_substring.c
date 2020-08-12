/**
* @file test_substring.c
*
*/

#include "unity.h"
#include "substring.h"
#include <string.h>
#include <stdio.h>

/**
* Required by the unity test framework
*/

void setUp(){}
/**
*  Required by the unity test framework
*/

void tearDown(){}



/**
*Compare function is defined to compare the actual output of substring array and expected outputs with test array  
*@see substring() 
*@return 1 or 0 based on strcmp function under string.h
*@note Returns 0 if both the array have same substrings
*@note Return 1 if both the array elelments are diffent with the string order and index
*/
int compare (char **check_substr, char *instr, int length)
{
  char **substr = NULL;
  substr = substring(instr);
  int iter_1;
  printf("\n");
  for(iter_1=0; iter_1<length ; iter_1++, substr++)
  {
    printf("%s - %s\n", check_substr[iter_1], *substr);
    if(strcmp(check_substr[iter_1], *substr)>0 || strcmp(check_substr[iter_1], *substr)<0)
      return 1;
  }
  return 0;
}  /* int compare (char **check_substr, char *instr, int length) */

/**
*  function to check test_case 1
*/
void test_substring_1 (void)
{
  char *str[] = {"This", "is", "a", "sample", "Unity", "test"};

  TEST_ASSERT_EQUAL(0, compare(str, "This_is_a_sample_Unity_test", 6));
}

/**
*  function to check test_case 2
*/
void test_substring_2 (void)
{
  char *str[] = {"The", "Debris", "of", "absurd"};
  TEST_ASSERT_EQUAL(0, compare(str, "The_Debris_of_absurd", 4));
}

/**
*  function to check test_case 3
*/
void test_substring_3 (void)
{
  char *str[] = {"asdfg:12345", "qwerty:98765"};
  TEST_ASSERT_EQUAL(0, compare(str, "asdfg:12345_qwerty:98765", 2));
} 

/**
*  function to check test_case 4
*/
void test_substring_4 (void)
{
  char *str[] = {"One-more", "light", "goes out", "in", "the", "sky", "of a", "million", "star"};
  TEST_ASSERT_EQUAL(0, compare(str, "One-more_light_goes out_in_the_sky_of a_million_star", 9));
}


/**
*  This function is to check test_cases in unity and evaluate the test results for the substring array.
*/
int test_substring_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_substring_1);
  RUN_TEST(test_substring_2);
  RUN_TEST(test_substring_3);
  RUN_TEST(test_substring_4);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

