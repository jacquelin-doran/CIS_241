int doSomething(int x); //declare method>
{
}

int main(int argc, char** argv){
	int x; //declaring a variable> 
	x = doSomething(x); //defining variable, using method>
}

//this will compile and create a .o file. But it will not be able to create an executable
//file. We will get a linker command failed error. When we define doSomething, 
//then we are able to compile into an executable file.
//

#include "library.h"

int main(int argc, char** argv){
	int x;
	x = doSomething(x);

}

//created library.c and library.h with the doSomething function, method call and 
//function definition. Our include tag at the top for main and for library.c to
//link them together and be able to use the doSomething method all around.
//
//We run clang-c main.c to get our main object file.
//Then run clang -c library.c to get our library object file.
//Finally run clang main.o library.o to put them togther and get an executable file
//

//We are doing an example where we have a librayr2.h and it should include library.h
//and main is also including library.h. To guard against compiling library.h twice
//we use include guards in ONLY the head files.
//
#ifndef _LIBRARY_H_
#define _LIBRARY_H


