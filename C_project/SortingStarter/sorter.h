#ifndef SORTER_H
#define SORTER_H


/****************************************************
 *Sort method that takes in a char** and will put the
 *contents into an array or char* then sort that array 
 *via Insertion sort. Finally it will convert the array
 *back into a char**.
 *
 *
 *@param contents - a pointer to a pointer to a char. 
 *in our case it is a string of chars
 *
 *@param size - the byte size of the contents
 *
 ************** ************************************/

void sort(char** contents, int size);


#endif /*SORTER_H*/


