#ifndef _MAIN_H_
#define _MAIN_H_
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _is_zero(char *argv[]);
char *_in_array(char *ar, int lar);
int _checknum(char *argv[], int n);
int _is_positive(const char *s);
char *mul(const char *num1, const char *num2);
int _putchar(char c);
#endif
