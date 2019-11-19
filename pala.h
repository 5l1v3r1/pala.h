/*
 *    .:: pala.h Header File ::.
 *
 *    Version: 1.0
 *
 *    Author:    Nuri Furkan Pala
 *    E-Mail:    nrfurkan@gmail.com
 *    Website:   https://www.nurifurkanpala.com/
 */


#include <stdio.h>


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
 * --------------------------
 *   It shows version of this header file.
 */
void pala_version() {
	printf("Version: 1.0\n");
}

/*
 * Function:  pala_credits
 * --------------------------
 *   It shows credits.
 */
void pala_credits() {
	printf(".:: pala.h Header File ::.\nAuthor:    Nuri Furkan Pala\nE-Mail:    nrfurkan@gmail.com\nWebsite:   https://www.nurifurkanpala.com/\n");
}

/*
 * Function:  pala_getLowerCaseEnglishLetter
 * -----------------------------------------
 *   It returns a lower case English letter from given index.
 *
 *   index:  Index of letter.
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
 *   index:  Index of letter.
 *
 *   returns:  Upper case char from wanted index.
 */
char pala_getUpperCaseEnglishLetter(long long index) {
	char realIndex = index % 26;
	return realIndex + 65;
}
