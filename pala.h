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




/* CHAR ARRAY OPERATION FUNCTIONS */


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




/* ARRAY FUNCTIONS */


/*
 * Function:  pala_showIntegerArray
 * --------------------------------
 *   This functions shows each elements where in given integer array.
 *
 *   array:  The array which wanted to show.
 *   size:   The size of given array.
 */
void pala_showIntegerArray(int *array, unsigned long long size) {
	unsigned long long i;
	for (i = 0; i < size; ++i) {
		printf("%d ", array[i]);
	}
}




/* SWAP FUNCTIONS */


/*
 * Function:  pala_swapIntegers
 * ----------------------------
 *   This function swaps integer.
 *
 *   a:  The first given integer.
 *   b:  The second given integer.
 */
void pala_swapIntegers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}




/* SORTING ALGORITHMS */


/*
 * Function:  pala_sortIntegerArrayWithBubbleSort
 * ----------------------------------------------
 *   This function sorts integer array ascendingly.
 *
 *   array:    Given array which wanted to sort with bubble sort.
 *   size:     The size of array.
 *
 *   returns:  Sorted integer array.
 */
int * pala_sortIntegerArrayWithBubbleSort(int *array, unsigned long long size) {
	unsigned long long i, j;
	for (i = 0; i < size - 1; ++i) {
		for (j = 0; j < size - i - 1; ++j) {
			if (array[j] > array[j + 1]) {
				pala_swapIntegers(&array[j], &array[j + 1]);
			}
		}
	}
}




/* SEARCHING ALGORITHMS */


/*
 * Function:  pala_findIntegerFromArrayWithIterativeSearch
 * -------------------------------------------------------
 *   This function finds index of searching number in the given array.
 *
 *   array:    The array which searched for.
 *   search:   The number which wanted to searching.
 *   size:     The size of given array.
 *
 *   returns:  The index of first found search number in the array. If there is no then, it returns -1.
 */
long long pala_findIntegerFromArrayWithIterativeSearch(long long *array, long long search, unsigned long long size) {
	unsigned long long i;
	for (i = 0; i < size; ++i) {
		if (array[i] == search) {
			return i;
		}
	}
	return -1;
}
