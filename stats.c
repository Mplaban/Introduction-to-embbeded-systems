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
 * @brief c code for calculations of stats of array.
 *
 *
 * @author Plaban Mohapatra
 * @date 17/08/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
    print_statistics(test,SIZE);
	return 0;

}

/* Add other Implementation File Code Here */
void print_statistics(char *a,int n)
{
	int min = find_minimum(a,n);
	int max = find_maximum(a,n);
	int medain = find_median(a,n);
	int mean = find_mean(a,n);
	printf("The minimum number of array = %d\n",min);
	printf("The maximum number of array = %d\n",max);
	printf("The median number of array = %d\n",medain);
	printf("The mean number of array = %d\n",mean);
}
void print_array(char *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
unsigned char find_median(char *a,int n)
{
	int i,median,first_number ,second_number;
	sort_array(a,n);
	if(n%2 == 0)
	{
		i = n/2;
		first_number=a[i-1];
		second_number=a[i];
		median = (first_number+second_number)/2;
	}
	else
	{
		i = n/2;
		median = a[i-1];
	}
	return (unsigned char) median;

}

unsigned char find_mean(char *a,int n)
{
	int i;
	int sum=0;
	for(i =0;i<n;i++)
	{
		sum =sum + a[i];
	}
	return (unsigned char)(sum/n);

}

unsigned char find_maximum(char *a,int n)
{
	int i=0;
	unsigned char  max=a[0];
	for (i=1;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

unsigned char find_minimum(char *a,int n)
{
	int i=0;
	unsigned char min=a[0];
	for (i=1;i<n;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}

void sort_array(char *a,int n)
{
	int key,j;
	for(int i=1;i<n;i++)
	{
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]<key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}

}
