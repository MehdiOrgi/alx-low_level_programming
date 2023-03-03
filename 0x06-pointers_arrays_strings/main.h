#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* 0. memset */
void *_memset(void *s, int c, size_t n);

/* 1. memcpy */
void *_memcpy(void *dest, const void *src, size_t n);

/* 2. strchr */
char *_strchr(char *s, char c);

/* 3. strspn */
unsigned int _strspn(char *s, char *accept);

/* 4. strpbrk */
char *_strpbrk(char *s, char *accept);

/* 5. strstr */
char *_strstr(char *haystack, char *needle);

/* 6. Chess is mental torture */
int print_chessboard(char (*a)[8]);

/* 7. The line of life is a ragged diagonal between duty and desire */
char *leet(char *str);

/* 8. Double pointer, double fun */
void print_diagsums(int *a, int size);

/* 9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure */
void set_string(char **s, char *to);

#endif /* MAIN_H */

