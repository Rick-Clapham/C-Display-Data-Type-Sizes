#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
	char myChar = 'H';
	char myString[50] = "My String";
	short myShort = 43;
	short myShortArray[50];
	int myInt = 4;
	int myIntArray[50];
	long myLong = 92233720368547;
	float myFloat = 8;
	double myDouble = 88.12345;
	double myDoubleArray[50]; 
	fprintf(stdout, "\nRichard Clapham 821-490-125\n");
	
	fprintf(stdout, "\nSize of Specific Data Types\n");
	fprintf(stdout, "The size of a char is: %d bytes\n", sizeof(char));
	fprintf(stdout, "The size of a short is: %d bytes\n", sizeof(short));
	fprintf(stdout, "The size of a int is: %d bytes\n", sizeof(int));
	fprintf(stdout, "The size of a long is: %d bytes\n", sizeof(long));
	fprintf(stdout, "The size of a float is: %d bytes\n", sizeof(float));
	fprintf(stdout, "The size of a double is: %d bytes\n", sizeof(double));

	fprintf(stdout, "\nSize of Declared Variables\n");
	fprintf(stdout, "The size of a char is: %d bytes\n", sizeof(myChar));
	fprintf(stdout, "The size of a short is: %d bytes\n", sizeof(myShort));
	fprintf(stdout, "The size of a int is: %d bytes\n", sizeof(myInt));
	fprintf(stdout, "The size of a long is: %d bytes\n", sizeof(myLong));
	fprintf(stdout, "The size of a float is: %d bytes\n", sizeof(myFloat));
	fprintf(stdout, "The size of a double is: %d bytes\n", sizeof(myDouble));
	fprintf(stdout, "The size of a String is: %d bytes\n", sizeof(myString));
	fprintf(stdout, "The size of a short array of 50 is: %d bytes\n", sizeof(myShortArray));
	fprintf(stdout, "The size of a int array of 50 is: %d bytes\n", sizeof(myIntArray));
	fprintf(stdout, "The size of a double array of 50 is: %d bytes\n", sizeof(myDoubleArray));

	fprintf(stdout, "\nSize of Pointers\n");
	fprintf(stdout, "The size of a pointer to myChar is: %d bytes\n", sizeof(&myChar));
	fprintf(stdout, "The size of a pointer to myInt is: %d bytes\n", sizeof(&myInt));
	fprintf(stdout, "The size of a pointer to main is: %d bytes\n", sizeof(&main));
	return 0;
}
