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
 * @brief header file for stats.c
 *
 *
 * @author Plaban Mohapatra
 * @date 17/08/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print_statistics
 *
 *  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char print_statistics(char *a,int n);

/**
 * @brief print_array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char print_array(char *a,int n);

/**
 * @brief find_median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_median(char *a,int n);
/**
 * @brief find_mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_mean(char *a,int n);
/**
 * @brief find_maximum
 *
 *  Given an array of data and a length, returns the maximum
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_maximum(char *a,int n);
/**
 * @brief find_minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_minimum(char *a,int n);
/**
 * @brief sort_array
 *
 * Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, 
 * and the last element (n-1) should be the smallest value. )
 *
 * @param *a  A unsigned char pointer to an n-element data array
 * @param n An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char sort_array(char *a,int n);


#endif /* __STATS_H__ */
