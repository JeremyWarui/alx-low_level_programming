#ifndef _MAIN_H_
#define _MAIN_H_


/**
* _putchar - Prints character and outputs to stdout
* @c: the character to output
*
* Return: 1 for success and -1 for err
*/

int _putchar(char c);

/**
* print_alphabet - Prints al alphabets in lowercase
* Return: void is returned
*/

void print_alphabet(void);

/**
  * print_alphabet_x10 - Prints all alphabets ten times
  * Return: void is returned
  */

void print_alphabet_x10(void);

/**
  * _isLower - check if the letters are in lowercase
  * @c: the character to check
  * Return: 1 if true and 0 if false
  */
int _islower(int c);

/**
  * _isalpha - check for alphabetic characters
  * @c: the character to check
  * Return: 1 if true 0 if false
  */
int _isalpha(int c);

/**
  * print_sign - Prints the sign of a number
  * @n: the number to check
  * Return: 1 if greater than 0 and 0 if zero and -1
  * if less zero
  */

int print_sign(int n);

/**
  * _abs - Print absolute value of an integer
  * @int: data type for parameter
  * Return: 0 for success
  */

int _abs(int);





#endif
