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
 * @file <stats.h>
 * @brief my first assessment
 *
 * 
 *
 * @author ankit saini
 * @date 2021-09-03
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param arr_pointer : A unsigned char pointer to an n-element data array
 * @param arr_size : An unsigned integer as the size of the array
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return An unsigned char result from the function
 */


unsigned char print_statics(unsigned char *arr_pointer, unsigned int arr_size);
unsigned char print_array(unsigned char *arr_pointer, unsigned int arr_size);
unsigned char find_median(unsigned char *arr_pointer,unsigned int arr_size);
unsigned char find_mean(unsigned char *arr_pointer, unsigned int arr_size);
unsigned char find_maximum(unsigned char *arr_pointer, unsigned int arr_size);
unsigned char find_minimum(unsigned char *arr_pointer, unsigned int arr_size);
unsigned char sort_array(unsigned char *arr_pointer, unsigned int arr_size);


#endif /* __STATS_H__ */
