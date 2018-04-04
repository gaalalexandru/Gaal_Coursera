//Something like nothing
/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief stats.c
 *
 * <Add Extended Description Here>
 *
 * @author Gaal Alexandru
 * @date  04.04.2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* 
 of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test);
}

void print_statistics(char *array) {
unsigned char median_numbers = (2 - (SIZE%2));
unsigned char median_value[2] = {0,0};  //two members, because in case of even number of elements in arrat, we have two medians

  printf("The array we calculate statistics for is: \r\n");
  print_array(array,SIZE);
  printf("The mean value for the unsorted array is: %d \r\n", find_mean(array,SIZE));
  printf("The median value for the unsorted array is: "); 
  find_median(array, SIZE, median_value);
  print_array(median_value,median_numbers);
  printf("\r\n");
  printf("The maximum value for the unsorted array is: %d \r\n", find_maximum(array,SIZE));
  printf("The minimum value for the unsorted array is: %d \r\n", find_minimum(array,SIZE));
}

void print_array(unsigned char *array, unsigned char length) {
  unsigned char index = 0;
  for(index = 0; index < length; index++) {
    printf("%d",array[index]);
    if(index != (length-1)) {
      printf(", "); //just a separator
    }
  }
  printf("\r\n");
}

unsigned int find_mean(unsigned char *array, unsigned char length) {
  unsigned char index = 0;
  unsigned long int result = 0;  //long int because we use this variable also for calculating the sum of all members
  for(index = 0; index < length; index++) {
    result += array[index]; //calculate the sum of all members
  }
  result /= length; //calculate the average;
  return result;
}

void find_median(unsigned char *array, char length, unsigned char *result) {
  if((length%2) == 0) { //even number of array members
    result[0] = array[(length/2)-1];
    result[1] = array[(length/2)];
  } else {  //odd number of array members
    result[0] = array[(length/2)];
  }
}

unsigned char find_maximum(unsigned char *array, unsigned char length) {
  unsigned char index = 0;
  unsigned char result = array[0]; 
  for(index = 0; index < length; index++) {
    if(result < array[index]) {
      result = array[index];
    }
  }
  return result;
}

unsigned char find_minimum(unsigned char *array, unsigned char length) {
  unsigned char index = 0;
  unsigned char result = array[0]; 
  for(index = 0; index < length; index++) {
    if(result > array[index]) {
      result = array[index];
    }
  }
  return result;
}
