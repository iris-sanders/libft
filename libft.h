#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <ctype.h>
# include <string.h>

/// @brief checks if a character is an alphabet (a-z and A-Z) or not
/// @param c the character to be checked
/// @return 1 if character is an alphabeticle character, 0 if not
int ft_isalpha(int c);

/// @brief Checks if character is a digit (0-9) or not.
/// @param c the character to be checked
/// @return 1 if character is digit, 0 if not
int ft_isdigit(int c);

/// @brief checks if isalpha or isdigit is true.
/// @param c the character to be checked
/// @return 1 if true, 0 if false
int ft_isalnum(int c);

/// @brief checks for an ascii character
/// @param c the character to be checked
/// @return 1 if character is an ascii character, 0 if it is not.
int ft_isascii(int c);

/// @brief checks for any printable character, including space.
/// @param c the character to be checked
/// @return 1 if character is printable, 0 if not.
int ft_isprint(int c);

/// @brief counts the length of the string s.
/// @param s the string whose length is to be counted.
/// @return the number of characters in the string before the terminating NUL character.
size_t ft_strlen(const char *s);

/// @brief copies the character 'c' (converted to unsigned char) to the first 'len' characters of the string pointed to, by the argument 'str'
/// @param str pointer to the block of memory to fill
/// @param c the value to be set
/// @param n the number of bytes to be set to the value
/// @return pointer to the memory area 's'.
void    *ft_memset(void *s, int c, size_t n);

/// @brief writes null bytes of size 'n' in the string 's'
/// @param s the string which has to be filled with null bytes.
/// @param n the number of bytes to be filled with null values.
void    ft_bzero(void *s, size_t n);

/// @brief copies 'n' characters from memory area src to memory area dest
/// @param dest the pointer to the destination array where the content is to be copied, type -casted to a pointer of type void*.
/// @param src the pointer to the source of data to be copied, type-casted to a pointer of type void*.
/// @param n the number of bytes to be copied from src
/// @return pointer to destination
void    *ft_memcpy(void *dest, const void *src, size_t n);

/// @brief copies 'n' characters from 'src' to 'dest', but for overlapping memory blocks, memmove copies in reverse which is a safer approach than memcpy
/// @param dest pointer to the destination array where the content is to be copied, type-casted to a pointer of type *void.
/// @param src pointer to the source of data to be copied, type-casted to a pointer of type *void.
/// @param n the number of bytes to be copied from src
/// @return pointer to destination
void    *ft_memmove(void *dest, const void *src, size_t n);

size_t ft_strlcpy(char *dest, char *src, size_t destsize);






#endif