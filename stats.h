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
 * @file stats.h 
 * @brief Header file for array statistic calculation
 *
 * Contains the following function declarations 
 * print_statistics, print_array,
 *
 * @author Gaal Alexandru
 * @date 04.04.2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(char *array);
/**
 * @brief calls the statistic calculation functions
 *
 * call order:
 * 1. print_array
 * 2. print mean
 * 3. print median
 * 4. print max
 * 5. print min
 *
 * @param array input parameter of function, pointer to array

 * @return void
 */

void print_array(unsigned char *array, unsigned char length);
/**
 * @brief print the array we work on
 *
 * @param array - input parameter of function, pointer to array
 * @param length - length of array
 *
 * @return void
 */

unsigned int find_mean(unsigned char *array, unsigned char length);
/**
 * @brief calculate the average / mean value
 *
 * @param array - input parameter of function, pointer to array
 * @param length - length of array
 *
 * @return average value
 */

void find_median(unsigned char *array, char length, unsigned char *result);
/**
 * @brief find the median value(s)
 *
 * if number of elements in array is even we have two median values
 *
 * @param array - input parameter of function, pointer to array
 * @param length - length of array
 * @param result - the array to store the result
 *
 * @return void
 */
unsigned char find_maximum(unsigned char *array, unsigned char length);
unsigned char find_minimum(unsigned char *array, unsigned char length);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param array input parameter of function, pointer to array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

#endif /* __STATS_H__ */
