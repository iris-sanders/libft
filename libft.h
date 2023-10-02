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

/// @brief copies characters from src to dest, but it doesnt exceed the maximum size of dest, ensures that dest always ends with a null terminator and is a valid C string. If destsize is zero, the destination buffer is too small to copy anything so it returns the length of the source string (ft_strlen(src)). This is a safety check to avoid trying to copy into a buffer that cannot hold any data. destsize - 1, ensures that we don't go beyond the maximum allowed size in the destination buffer.
/// @param dest destination buffer where the string will be copied to.
/// @param src source string from which data will be copied.
/// @param destsize is the maximum number of characters that can be copied to dest without causing problems.
/// @return length of src 
size_t ft_strlcpy(char *dest, const char *src, size_t destsize);

/// @brief concatenates the source string ‘src’ to the end of the destination string ‘dest’ while ensuring that the total length of the concatenated string does not exceed a specified maximum size ‘destsize’.
/// @param dest pointer to a character array (string) where the function will concatenate the 'src' string.
/// @param src pointer to a constant character array (string) that contains the characters to be added to the end of the dest string.
/// @param destsize maximum size or capacity of the dest string. It specifies how many characters can be safely added to dest before it reaches its limit.
/// @return If the destination string is already at or exceeds this size, it returns the sum of destsize and the length of the source string. Otherwise, it performs the concatenation, and returns the total length of the combined string.
size_t ft_strlcat(char *dest, const char *src, size_t destsize);







#endif