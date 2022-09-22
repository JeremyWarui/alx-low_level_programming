#ifndef _MAIN_H_
#define _MAIN_H_

/**
  * _putchar - prints the character
  */

int _putchar(char c);

/**
  * _strcat - function tht joins two strings
  */
char *_strcat(char *dest, char *src);

/**
  * _strncat - concatenate two strings limited by n
  */

char *_strncat(char *dest, char *src, int n);

/**
  * _strncpy - copy string with n bytes
  */

char *_strncpy(char *dest, char *src, int n);

/**
  * _strcmp - function that compares two strings
  */
int _strcmp(char *s1, char *s2);

/**
  * reverse_array - reverse an array
  */

void reverse_array(int *a, int n);

/**
  * string_toupper - change all lowercases to upper
  */

char *string_toupper(char *);

/**
  * cap_string - capitalise the words
  */

char *cap_string(char *);

/**
  * leet - encode a string
  */

char *leet(char *);

/**
  * rot13 - encode string using rot13
  */

char *rot13(char *);

/**
  * print_number - to print integers
  */

void print_number(int n);

/**
  * print_buffer - 10bytes ata time
  */
void print_buffer(char *b, int size);




#endif
