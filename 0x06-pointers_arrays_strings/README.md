0.Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);<br/>
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte<br/>
Returns a pointer to the resulting string dest<br/>
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.<br/>
1.Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);<br/>
The _strncat function is similar to the _strcat function, except that<br/>
it will use at most n bytes from src; and<br/>
src does not need to be null-terminated if it contains n or more bytes<br/>
Return a pointer to the resulting string dest<br/>
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.<br/>

