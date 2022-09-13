## README

---

### Functions & Nested Loops

### 1. Program that prints *_putchar*

Write a program that prints `_putchar`, followed by a new line.

* The program should return 0

```
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar

julien@ubuntu:~/0x02$ ./0-putchar 

_putchar

julien@ubuntu:~/0x02$ 
```

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a function that prints the alphabet, in lowercase, followed by a new line.

* Prototype: void print_alphabet(void);
* You can only use _putchar twice in your code

```
julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
```

