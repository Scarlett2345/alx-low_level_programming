0.Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n)<br/>
1.Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);<br/>
2.Write a function that returns the length of a string.

Prototype: int _strlen(char *s);<br/>
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.<br/>
3.Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);<br/>
FYI: The standard library provides a similar function: puts. Run man puts to learn more.<br/>
4.Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);<br/>
5.Write a function that reverses a string.

Prototype: void rev_string(char *s);<br/>
6.Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);<br/>
7.Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);<br/>
The function should print the second half of the string<br/>
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2<br/>
8.Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);<br/>
where n is the number of elements of the array to be printed<br/>
Numbers must be separated by comma, followed by a space<br/>
The numbers should be displayed in the same order as they are stored in the array<br/>
You are allowed to use printf<br/>
9.Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest<br/>
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.<br/>
10.Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);<br/>
The number in the string can be preceded by an infinite number of characters<br/>
You need to take into account all the - and + signs before the number<br/>
If there are no numbers in the string, the function must return 0<br/>
You are not allowed to use long<br/>
You are not allowed to declare new variables of “type” array<br/>
You are not allowed to hard-code special values<br/>
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.<br/>
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.<br/>
11.Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library<br/>
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)<br/>
man srand, rand, time<br/>
gdb and objdump can help<br/>
