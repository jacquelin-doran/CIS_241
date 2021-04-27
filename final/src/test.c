#include "test.h"
#include "math.h"
#include "student.h"
#include <stdlib.h>
#include <string.h>
/**
 * Example for demonstration at start of test.
 */

int example(){
	return 42;
}

/**
 * Warmup (but counts for credit!)
 * Square the value x points to.
 */
void easyPeasy(int* x){
	*x = *x * *x;
}

/**
 * Set a's first name to "Jigglypuff".
 * Set the last name to "Ketchum".
 * Set the g number to 10, the gpa to 1.16.
 */
void one(Student* a){
	set_first_name(a, "Jigglypuff");
	set_last_name(a, "Ketchum");
	set_g_number(a, 10);
	set_gpa(a, 1.16);
}

/**
 * Copy the information from Student b to Student a.
 * (pointer parameters).
 */

void two(Student* a, Student* b){
	set_first_name(a, strdup(get_first_name(b)));
	set_last_name(a, strdup(get_last_name(b)));
	set_gpa(a, get_gpa(b));
	set_g_number(a, get_g_number(b));
}

/**
 * Copy the information from Student a to Student b.
 * (mixed variable type parameters).
 */

void three(Student a, Student* b){
	*b = a;
}

/**
 * Create and return a Student.  Give it the values
 * "T. Yoshisaur" (first_name)
 * "Munchakoopas" (last_name)
 * 1990		  (g_number)
 * 3.1		  (gpa)
 * Mario	  (roommate [defined above])
 * Remember: C is pass by copy ONLY.
 */
Student four(){
	Student a;
	set_first_name(&a, "T. Yoshisaur");
	set_last_name(&a, "Munchakoopas");
	set_gpa(&a, 3.1);
	set_g_number(&a, 1990);
	set_roommate(&a, &Mario);
	return a;
}

/**
 * Create and return a Student*.  Give it the value
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 * Remember: C is pass by copy ONLY.
 */
Student* five(){
	Student* g;
	g = (Student*)malloc(sizeof(student));
	g->first_name = "Luigi";
	g->last_name= "Mario";
	g->g_number= 2;
	g->gpa = 3.54; 

	return g;
}


/**
 * Create a hunk of memory we can use as an array of 10
 * Students.  Set the 4th element (meaning use array
 * index 3) to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
Student* six(){
	Student* hunk =(Student*)malloc(sizeof(student) * 10);
	hunk[3].first_name = "Luigi";
	hunk[3].last_name = "Mario";
	hunk[3].g_number = 2;
	hunk[3].gpa = 3.54;
	
	return hunk;
}

/**
 * Seven will take a pointer to a pointer.  It should
 * create a hunk of memory that can be used as an array
 * of size 10, and will set the pointer correctly so
 * that the "array" is usable in main.
 * Set the 10th (index 9) element equal to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
void seven(Student** students){
	Student* s;
	s = (Student*)malloc(10 * sizeof(student));
	s[3].first_name = "Luigi";
	s[3].last_name = "Mario";
	s[3].gpa = 3.54;
	s[3].g_number = 2;
	*students = s;
		
}

/**
 * Given a, b, and c calculate the first solution for
 * the quadratic equation (given below).
 *
 * -b + sqrt(b^2 - 4ac) / (2a)
 */
double quadratic(double a, double b, double c){
	double solution;
	double squareRoot;
	double denom = (2*a);
	squareRoot = b*b;
	squareRoot -= (4*a*c);
	solution = sqrt(squareRoot);
	solution -= b;
	solution /= denom;
	return solution;

}

/**
 * Given a "string" (a character array) and a length,
 * replace each lower case character with its uppercase
 * equivalent.
 *
 * Do not use any string functions provided by the library.
 * Merely check to see if each character is between the
 * range of values for a lowercase letter.  If it is,
 * replace it with the uppercase value equivalent.
 *
 * If you are writing more than five lines you are doing it wrong.
 */
#include <stdio.h>
#include <ctype.h>
void capitalize(char* str, size_t len){
	int i;
	for(i=0; i <len; i++){
		str[i]= toupper(str[i]);
	}


}
