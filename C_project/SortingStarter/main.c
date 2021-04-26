#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
	
/*
 * Read the file from the command-line.
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 *
 */

int main(int argc, char** argv){
	
	//variables 
	int numlines = 0;
	char* contents;

	// Read the original file.
	size_t numBytes = load_file(argv[1], &contents);


	//find number of lines 
	for(int i = 0; i < numBytes; i++){
		if(contents[i] =='\n'){
			numlines++;
		}
	}
	printf("The number of lines in file is %d \n", numlines);

	// Sort the file with the function you wrote.
	sort(&contents, numlines);

	// Write out the new file.
	save_file(argv[2], contents, numBytes);

}

// You can see if your file worked correctly by using the
// command:
//
// diff ORIGINAL_FILE NEW_FILE
//
// If the command returns ANYTHING the files are different.
