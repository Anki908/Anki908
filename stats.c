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
 * @file <stats.c> 
 * @brief <my first assessment>
 *
 * 
 *
 * @author <ankit saini>
 * @date <2021-09-03>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


print_statics(test,SIZE);
print_statics(test,SIZE);
/* Add other Implementation File Code Here */
}

unsigned char print_statics(unsigned char *arr_pointer, unsigned int arr_size)
{
	print_array(arr_pointer, arr_size);
	printf("median : %d \n", find_median(arr_pointer,arr_size));
	printf("mean : %d \n", find_mean(arr_pointer, arr_size));
	printf("maximum : %d \n", find_maximum(arr_pointer,arr_size));
	printf("minimum : %d \n", find_minimum(arr_pointer,arr_size));
}
unsigned char print_array(unsigned char *arr_pointer, unsigned int arr_size)
{	
	printf("[");
	for(int i=0;i<SIZE;i++)
	{ 
	printf("%d ", arr_pointer[i]);
	};
	printf("]\n");
	
}

unsigned char find_median(unsigned char *arr_pointer, unsigned int arr_size)
{
	int tmp;
	for(int i=0;i<SIZE;i++)
	{		
		for(int j=i+1;j<SIZE;j++)
		{
			if(arr_pointer[i]>arr_pointer[j])
			{
				tmp=arr_pointer[i];
				arr_pointer[i]=arr_pointer[j];
				arr_pointer[j]=tmp;
			}
		}
	};
	
	if(SIZE%2==0){return (arr_pointer[SIZE/2-1]+arr_pointer[SIZE/2])/2;}
	else{return arr_pointer[SIZE/2];}
	
	
}

unsigned char find_mean(unsigned char *arr_pointer, unsigned int arr_size)
{
	int sum;
	for(int i=0;i<SIZE;i++)
	{
		sum+=arr_pointer[i];
	}
	return sum/SIZE;
}

unsigned char find_maximum(unsigned char *arr_pointer, unsigned int arr_size)
{
	int max=arr_pointer[0];
	for(int i=0;i<SIZE;i++)
	{
		if(max<arr_pointer[i])
		{
			max=arr_pointer[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char *arr_pointer, unsigned int arr_size)
{
	int min=arr_pointer[0];
	for(int i=0;i<SIZE;i++)
	{
		if(min>arr_pointer[i])
		{
			min=arr_pointer[i];
		}
	}
	return min;
}

unsigned char sort_array(unsigned char *arr_pointer, unsigned int arr_size)
{
	int tmp;
	for(int i=0;i<SIZE;i++)
	{		
		for(int j=i+1;j<SIZE;j++)
		{
			if(arr_pointer[i]<arr_pointer[j])
			{
				tmp=arr_pointer[i];
				arr_pointer[i]=arr_pointer[j];
				arr_pointer[j]=tmp;
			}
		}
	};
}
