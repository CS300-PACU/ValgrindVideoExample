/****************************************************************************
 File name:  	functions.c
 Author:			chadd williams
 Date:				Sept 28, 2023
 Class:				CS 300
 Assignment:	Valgrind Example
 Purpose:			Demonstrate various valgrind errors
 ****************************************************************************/


#include "../include/functions.h"

/****************************************************************************
	Function: 	 	getStars

	Description: 	dynamically allocate a string of stars

	Parameters:		count - the number of stars to put in the string

	Returned:	 		a pointer to the dynamic string
****************************************************************************/
char *getStars(int count)
{
	// create a dynamic array for all the stars plus one character
	// for the '\0' [NULL terminator]
	char* szStars = (char*) malloc(count * sizeof(char) + 1);

	for(int i = 0; i < count; ++i)
	{
		szStars[i] = '*';
	}

	// set the NULL terminate in the last position of the
	// array
	szStars[count] = '\0'; 

	return szStars;
}


/****************************************************************************
	Function: 	 	printHello

	Description: 	Print a message to screen, use the parameter in the message

	Parameters:		szMsg - the message to print

	Returned:	 		None
****************************************************************************/
void printHello(const char *szMsg)
{
	printf("Hello! - %s - \n", szMsg);
}

/****************************************************************************
	Function: 	 	printGoodBye

	Description: 	Print a message to screen, use the parameter in the message

	Parameters:		pLetter - a letter to print

	Returned:	 		None
****************************************************************************/
void printGoodBye(const char *pLetter, int number)
{
	printf("BYE! - %c - %d - \n", *pLetter, number);	
}
