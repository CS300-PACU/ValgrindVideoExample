/****************************************************************************
 File name:  	main.c
 Author:			chadd williams
 Date:				Sept 28, 2023
 Class:				CS 300
 Assignment:	Valgrind Example
 Purpose:			Demonstrate various valgrind errors
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "../include/functions.h"

 /****************************************************************************
  Function: 	 	main

  Description: hello world!

  Parameters:	argc - the number of command line arguments
               argv - the actual command line arguments

  Returned:	 	EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {
  
	char *szMsg;
	int count;

	//char *pLetter;

	szMsg = getStars(count);

	printHello(szMsg);

	//printGoodBye(pLetter);

  return EXIT_SUCCESS;
}
