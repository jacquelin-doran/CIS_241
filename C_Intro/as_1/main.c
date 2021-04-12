#include <stdio.h>
#include "circleLib.h"
#include "newLib.h"

int main(int argc, char** argv){
	//double perim = calcPerim(8.8);

	//double area = calcArea(8.8);


	double perim = calcRecPerim(8,8);

	double area = calcRecArea(8,8);
	printf("Permiter = %f, Area = %f" , perim,area);
}

