#include <stdio.h>
#include <stdlib.h>

void printer(int* mult, int size){
	for(int i=0;i<12;++i){
		for(int j=0; j<12; ++j){
			printf("%d\t", *(mult + size * i +j));
		}
		printf("\n");
	}
}

int main(int argc, char** argv){
	
	int size = atoi(argv[1]);
	//cant do this mult[size][size]



	int* mult = malloc(size*size*sizeof(int)); //pointer that opperates like mult[144]
	//pointer into the first space in memory
	
	printf ("The size of mult is %lu.\n", sizeof(mult)); //always 8 because its a pointer
	for(int i=0; i<12; i++){
		for(int j=0; j<12; ++j){
			*(mult + size * i + j) = (i+1) * (j+1); //go into this address in mult
		}
	}
	printer(mult,size);
}
