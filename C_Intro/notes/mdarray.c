#include <stdio.h>

void printer(int mult[12][12]){
	for(int i=0;i<12;++i){
		for(int j=0; j<12; ++j){
			printf("%d\t", mult[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char** argv){

	int mult[12][12]; //static defnition
	printf ("The size of mult is %lu.\n", sizeof(mult));
	for(int i=0; i<12; i++){
		for(int j=0; j<12; ++j){
			mult[i][j] = (i+1) * (j+1);
		}
	}
	printer(mult);
}
