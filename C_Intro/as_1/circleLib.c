#include "circleLib.h"

const double PI =3.14159;

double calcPerim(double radius){
	double perim;
	perim = radius * 2 * PI;
	
	return perim;
}

double calcArea(double radius){
	double area;
	area = (radius *radius) * PI;

	return area;
}

