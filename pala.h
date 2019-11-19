/*
 *    .:: pala.h Header File ::.
 *
 *    Version: 1.1
 *
 *    Author:   Nuri Furkan Pala
 *    E-Mail:   nrfurkan@gmail.com
 *    Website:  https://www.nurifurkanpala.com/
 */



#include <stdio.h>
#include <tgmath.h>




/* SPECIAL FUNCTIONS */


/*
 * Function:  pala_helloWorld
 * --------------------------
 *   It is just a test function for testing if this header file works or not.
 */
void pala_helloWorld() {
	printf("Hello World!\n");
}

/*
 * Function:  pala_version
 * -----------------------
 *   It shows version of this header file.
 */
void pala_version() {
	printf("Version: 1.1\n");
}

/*
 * Function:  pala_credits
 * -----------------------
 *   It shows credits.
 */
void pala_credits() {
	printf(".:: pala.h Header File ::.\nAuthor:   Nuri Furkan Pala\nE-Mail:   nrfurkan@gmail.com\nWebsite:  https://www.nurifurkanpala.com/\n");
}




/* CHAR ARRAY OPERATION FUNCTIONS*/


/*
 * Function:  pala_getLowerCaseEnglishLetter
 * -----------------------------------------
 *   It returns a lower case English letter from given index.
 *
 *   index:    Index of letter.
 *
 *   returns:  Lower case char from wanted index.
 */
char pala_getLowerCaseEnglishLetter(long long index) {
	char realIndex = index % 26;
	return realIndex + 97;
}

/*
 * Function:  pala_getUpperCaseEnglishLetter
 * -----------------------------------------
 *   It returns a upper case English letter from given index.
 *
 *   index:    Index of letter.
 *
 *   returns:  Upper case char from wanted index.
 */
char pala_getUpperCaseEnglishLetter(long long index) {
	char realIndex = index % 26;
	return realIndex + 65;
}

/*
 * Function:  pala_getSizeOfCharArray
 * ----------------------------------
 *   It returns the size of char array.
 *
 *   charArray:  Char array.
 *
 *   returns:    The size of char array.
 */
unsigned long long pala_getSizeOfCharArray(char *charArray) {
	unsigned long long result = 0;
	while (charArray[result] != '\0') {
		++result;
	}
	return result;
}

/*
 * Function:  pala_getHowManyInCharArray
 * -------------------------------------
 *   It returns how many specific char in char array.
 *
 *   charArray:  Char array.
 *   wanted:     Wanted char for searching.
 *
 *   returns:    The size of char array.
 */
unsigned long long pala_getHowManyInCharArray(char *charArray, char wanted) {
	unsigned long long result = 0;
	unsigned long long i = 0;
	for (i = 0; charArray[i] != '\0'; ++i) {
		if (charArray[i] == wanted) {
			++result;
		}
	}
	return result;
}




/* MATHEMATICS FUNCTIONS */


/*
 * Function:  pala_getRightTriangleHypotenuse
 * ------------------------------------------
 *   It returns hypotenuse of right triangle using two edges.
 *
 *   edge1:    The first edge of right triangle.
 *   edge2:    The second edge of right triangle.
 *
 *   returns:  Hypotenuse of right triangle.
 */
long double pala_getRightTriangleHypotenuse(long double edge1, long double edge2) {
	return powl(powl(edge1, 2) + powl(edge2, 2), 0.5);
}

/*
 * Function:  pala_getRightTriangleEdge
 * ------------------------------------
 *   It returns edge of right triangle using one hypotenuse and one edge.
 *
 *   edge:        The known edge of right triangle.
 *   hypotenuse:  The hypotenuse of right triangle.
 *
 *   returns:     Unknown edge of right triangle.
 */
long double pala_getRightTriangleEdge(long double edge, long double hypotenuse) {
	return powl(powl(hypotenuse, 2) - powl(edge, 2), 0.5);
}
