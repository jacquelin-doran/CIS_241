#include "sorter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/***************************************************************
 *This sort method will take a char** and use it's contents to
 *fill an array. The array is then sorted using Insertion sort.
 *The sorted array is converted back to a single char**.
 *
 *@param contents - a char**, a pointer to a pointer to a char
 *@param size - the number of bytes in contents
 *
 * ************************************************************/
void sort(char** contents, int size){
	printf("Begining sort \n");

	//variables
	int j = 0;
	char *a = strtok(*contents, "\n");
	char** arr = malloc(size*sizeof(char*));

	//fill array
	while (a!= NULL){
		arr[j] = a;
		++j;
		a = strtok(NULL, "\n");
		
	}
	//start sort
	int k;
	char* key;
	for(int i = 1; i<size; ++i){
		key = arr[i];
		k = i-1;

		while(k >= 0 && strcasecmp(arr[k], key) > 0){
		       arr[k+1] = arr[k];
	       		--k;
		}
		arr[k+1] = key;
	}
	printf("Complete sort \n");	

	//create an array to put the sorted list into
	char sorted [size *10];

	//fill array
	for(int i = 0; i<size; ++i){
		strcat(sorted, arr[i]);
		strcat(sorted, "\n");
	}
	*contents = sorted;

}

