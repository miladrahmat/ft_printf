# LIBFT

***The very first individual project in the 42 cursus.***

## Content

- [Introduction](#introduction)
- [Function overview](#function-overview)
  - [Libc functions](#libc-functions)
  - [Additional functions](#additional-functions)  
- [Bonus](#bonus)
  - [Bonus functions](#bonus-functions)
- [Makefile](#makefile)
- [Installation](#installation)

## Introduction

In this project I created my own library that I can use throughout the 42 cursus. I re-created some of `libc` functions and created some additional useful functions.

The purpose of the project is to understand the way these functions work, to implement and learn how to use them.

## Function overview


### Libc functions

This was part 1 of the project, where I redid a set of functions from `libc`, the functions have the same prototypes and implement the same behaviors as the originals. The only difference is their names. They begin with the ***ft_*** prefix. For instance, **strlen** is **ft_strlen**.

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------|
|[**ft_isalpha**](https://github.com/miladrahmat/Libft/blob/master/ft_isalpha.c)|tests for any alphabetical characters: `a` to `z` and `A` to `Z`| returns zero if character tests false and non-zero if character tests true|
|[**ft_isdigit**](https://github.com/miladrahmat/Libft/blob/master/ft_isdigit.c)|tests for a decimal digit character: `1`, `2`, `3`, `4`, `5`,  `6`, `7`, `8` and `9`| retruns zero if the character tests false and non-zero if the character tests true|
|[**ft_isalnum**](https://github.com/miladrahmat/Libft/blob/master/ft_isalnum.c)|tests for any character for which **ft_isalpha** or **ft_isdigit** is true|returns zero if the character tests false and non-zero if the character tests true|
|[**ft_isascii**](https://github.com/miladrahmat/Libft/blob/master/ft_isascii.c)|tests for an ASCII character|returns zero if the character tests false and non-zero if the character tests true|
|[**ft_isprint**](https://github.com/miladrahmat/Libft/blob/master/ft_isprint.c)|tests for any printable character in the ASCII table (including `space`)|returns zero if the character tests false and non-zero if the character tests true|
|[**ft_strlen**](https://github.com/miladrahmat/Libft/blob/master/ft_strlen.c)|computes the length of the given string|returns the number of characters that precede the terminating NULL character `\0`|
|[**ft_memset**](https://github.com/miladrahmat/Libft/blob/master/ft_memset.c)|writes `len` bytes of value `c` to the string `str`|returns the string `str`|
|[**ft_bzero**](https://github.com/miladrahmat/Libft/blob/master/ft_bzero.c)|writes n zeroed bytes to the string `str`||
|[**ft_memcpy**](https://github.com/miladrahmat/Libft/blob/master/ft_memcpy.c)|copies `n` bytes from memory area `src` to `dst`|returns the original value of `dst`|
|[**ft_memmove**](https://github.com/miladrahmat/Libft/blob/master/ft_memmove.c)|copies `len` bytes of value from string `src` to string `dst` (safer alternative to **ft_memcpy** if the two strings overlap)|returns the original value of `dst`|
|[**ft_strlcpy**](https://github.com/miladrahmat/Libft/blob/master/ft_strlcpy.c)|copies up to `dstsize - 1` characters from the string `src` to the string `dst` and NULL-terminating the result|returns the total length of the string it tried to create (length of `src`)|
|[**ft_strlcat**](https://github.com/miladrahmat/Libft/blob/master/ft_strlcat.c)|appends the string `src` to the end of the string `dst` (at most `dstsize - ft_strlen(dst) - 1` characters) and NULL-terminate the result|returns the total length of the string it tried to create|
|[**ft_toupper**](https://github.com/miladrahmat/Libft/blob/master/ft_toupper.c)|converts a lowercase letter to the corresponding uppercase letter|if the argument is a lowercase letter, the function returns the corresponding uppercase letter if there is one. Otherwise the function returns the argument unchanged|
|[**ft_tolower**](https://github.com/miladrahmat/Libft/blob/master/ft_tolower.c)|converts a uppercase letter to the corresponding lowercase letter|if the arfument is a uppercase letter, the function returns the corresponding lowercase letter if there is one. Otherwise the function returns the argument unchanged|
|[**ft_strchr**](https://github.com/miladrahmat/Libft/blob/master/ft_strchr.c)|locates the first occurance of `c` in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear in the string|
|[**ft_strrchr**](https://github.com/miladrahmat/Libft/blob/master/ft_strrchr.c)|locates the last occurance of `c` in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear in the string|
|[**ft_memchr**](https://github.com/miladrahmat/Libft/blob/master/ft_memchr.c)|locates the first occurance of `c`(converted to `unsigned char`) in the string `s`|returns a pointer to the located character or **NULL** if the character does not appear within `n` bytes|
|[**ft_memcmp**](https://github.com/miladrahmat/Libft/blob/master/ft_memcmp.c)|compares byte string `s1` against byte string `s2` (both strings are assumed to be `n` bytes long)|returns zero if the strings are identical, otherwise returns the difference between the first two differing bytes|
|[**ft_strnstr**](https://github.com/miladrahmat/Libft/blob/master/ft_strnstr.c)|locates the first occurance of the string `needle` in the string `haystack` (no more than `len` characters are searched)|if `needle` is an empty string, `haystack` is returned. If `needle` occurs nowhere in `haystack`, **NULL** is returned. Otherwise a pointer to the first character of the first occurance of `needle` is returned|
|[**ft_atoi**](https://github.com/miladrahmat/Libft/blob/master/ft_atoi.c)|converts the initial portion of the string `str` to `int` representation||
|[**ft_calloc**](https://github.com/miladrahmat/Libft/blob/master/ft_calloc.c)|contiguously allocates enough space for `count` objects that are `size` bytes of memory|returns a pointer to the allocated memory|
|[**ft_strdup**](https://github.com/miladrahmat/Libft/blob/master/ft_strdup.c)|allocates sufficient memory for a copy of the string `s1` and does the copy|returns a pointer to the new string (can be used as an argument for `free`)|


### Additional functions

This was part 2 of the project, where I created some functions that are not included in the `libc` library but will be very useful in future 42 projects.

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------|
|[**ft_substr**](https://github.com/miladrahmat/Libft/blob/master/ft_substr.c)|allocates and returns a substring from the string `s`|returns the substing or **NULL** if the allocation fails|
|[**ft_strjoin**](https://github.com/miladrahmat/Libft/blob/master/ft_strjoin.c)|allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`|reteurns the new string or **NULL** if the allocation fails|
|[**ft_strtrim**](https://github.com/miladrahmat/Libft/blob/master/ft_strtrim.c)|allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string|returns the trimmed string or **NULL** if the allocation fails|
|[**ft_split**](https://github.com/miladrahmat/Libft/blob/master/ft_split.c)|allocates and returns an array of strings obtained by splitting the string using the character `c` as a delimiter and **NULL** terminates the array|retrurns the array of new strings resulting from the split or **NULL** if the allocation fails|
|[**ft_itoa**](https://github.com/miladrahmat/Libft/blob/master/ft_itoa.c)|allocates and returns a string representing the integer received as an argument|returns the string representing the integer or **NULL** if the allocation fails|
|[**ft_strmapi**](https://github.com/miladrahmat/Libft/blob/master/ft_strmapi.c)|applies the function `f` to each character of the string `s`, and passing its first index as argument to allocate and create a new string resulting from the successive applications of `f`|returns the string crated from the successive applications of `f` or **NULL** if the allocation fails|
|[**ft_striteri**](https://github.com/miladrahmat/Libft/blob/master/ft_striteri.c)|applies the function `f` on each character of the string passed as argument, passing its index as first argument||
|[**ft_putchar_fd**](https://github.com/miladrahmat/Libft/blob/master/ft_putchar_fd.c)|outputs the character `c` to the given file descriptor||
|[**ft_putstr_fd**](https://github.com/miladrahmat/Libft/blob/master/ft_putstr_fd.c)|outputs the string `s` to the given file descriptor||
|[**ft_putendl_fd**](https://github.com/miladrahmat/Libft/blob/master/ft_putendl_fd.c)|outputs the string `s` to the given file descriptor followed by a newline||
|[**ft_putnbr_fd**](https://github.com/miladrahmat/Libft/blob/master/ft_putnbr_fd.c)|outputs the integer `n` to the given file descriptor||

## Bonus

The bonus part is for learning to use structs and lists. For this I had to create the following struct in my [libft.h](https://github.com/miladrahmat/Libft/blob/master/libft.h) file:
```
typedef struct s_list
{
   void *content;
   struct s_list *next;
}  t_list;
```
The members of the `t_list` struct are:

- content: The data contained in the node.
 `void *` allows to store any kind of data.

 - next: The address of the next node or **NULL** if the next node is the last one.

### Bonus functions

| Function name    | Description                                    | Return values                                                           |
|------------------|------------------------------------------------|-------------------------------------------------------------------------
|[**ft_lstnew**](https://github.com/miladrahmat/Libft/blob/master/ft_lstnew_bonus.c)|allocates and returns a new node. The member variable `content` is initialized with the value of the parameter `content`. The variable `next` is initialized to NULL|returns the new node|
|[**ft_lstadd_front**](https://github.com/miladrahmat/Libft/blob/master/ft_lstadd_front_bonus.c)|adds the node `new` at the beginning of the list||
|[**ft_lstsize**](https://github.com/miladrahmat/Libft/blob/master/ft_lstsize_bonus.c)|counts the number of nodes in a list|returns the length of the list|
|[**ft_lstlast**](https://github.com/miladrahmat/Libft/blob/master/ft_lstlast_bonus.c)|returns the last node of the list|returns the last node of the list|
|[**ft_lstadd_back**](https://github.com/miladrahmat/Libft/blob/master/ft_lstadd_back_bonus.c)|adds the node `new` at the end of the list||
|[**ft_lstdelone**](https://github.com/miladrahmat/Libft/blob/master/ft_lstdelone_bonus.c)|takes as a parameter a node and frees the memory of the node's content using the function `del` given as a parameter and free the node||
|[**ft_lstclear**](https://github.com/miladrahmat/Libft/blob/master/ft_lstclear_bonus.c)|deletes and frees the given node and every successor of that node, using the function `del` and `free`||
|[**ft_lstiter**](https://github.com/miladrahmat/Libft/blob/master/ft_lstiter_bonus.c)|iterates the list `lst` and appllies the function `f` on the content of each node||
|[**ft_lstmap**](https://github.com/miladrahmat/Libft/blob/master/ft_lstmap_bonus.c)|iterates the list `lst` and applies the function `f` on the content of each node. Creates a new list resulting of the successive applications of the function `f`|returns the new list or **NULL** if the allocation fails|

### Makefile

In this project I've created a [Makefile](https://github.com/miladrahmat/Libft/blob/master/Makefile) to make compilations easier. You can compile the files by simply running `make` in your command line and it will compile the files into `libft.a`. You can run `make clean` to remove the object files from the directory and `make fclean` to remove the object files and the compiled `libft.a` file. You can also run `make re` to re-compile the files if you made any changes.

## Installation

You can test this library by running this in the command line:
```
git clone https://github.com/miladrahmat/Libft.git
cd Libft
make
make clean
```
If you'd like to include the bonus functions in the library you can also run:
```
make bonus
make clean
```
After that you can use the library by simply including `"libft.h"` in your functions.
