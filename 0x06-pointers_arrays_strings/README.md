# THIS CONTAINS THE DESCRIPTION OF EVERY FILE IN THIS DIRECTORY

### 0-strcat.c
contains a function that concatenates two strings
Prototype: char *_strcat(char *dest, char *src);<br>
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte<br>
Returns a pointer to the resulting string dest

### 1-strncat.c
contains a function that concatenates two functions Prototype: char *_strncat(char *dest, char *src, int n);<br>
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and<br>
src does not need to be null-terminated if it contains n or more bytes<br>
Return a pointer to the resulting string dest

### 2-strncpy.c
contains a function that copies a string<br>
Prototype: char *_strncpy(char *dest, char *src, int n);<br>
function should work exactly like strncpy

### 3-strcmp.c
contains a function that compares two string<br>
Prototype: int _strcmp(char *s1, char *s2);<br>
function should work exactly like strcmp

### 4-rev_array.c
contains a function that reverse the content of an array of intergers<br>
Prototype: void reverse_array(int *a, int n);<br>
Where n is the number of elements of the array

### 5-string_toupper.c
contains a function that changes all lowercase letters of a string to uppercase<br>
Prototype: char *string_toupper(char *);<br>

### 6-cap_string.c
contains a function that capitalizes all words of a string.<br>
Prototype: char *cap_string(char *);<br>
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

### 7-leet.c
contains a function that encodes a string into 1337.<br>
Letters a and A should be replaced by 4<br>
Letters e and E should be replaced by 3<br>
Letters o and O should be replaced by 0<br>
Letters t and T should be replaced by 7<br>
Letters l and L should be replaced by 1<br>
Prototype: char *leet(char *);
>this function uses only one if statement, two loops, doesn't use switch and no ternary operation
