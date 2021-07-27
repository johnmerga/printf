#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdbool.h>

/* macros */
#define FLUSH -1
#define PF_INIT {false, false, false}
#define NIL "(nil)"
#define HEXA "0x"
#define NULL_STRING "(null)"
#define NUL '\0'
#define KILOBYTE 1024
#define ABS(x) (((x) <  0) ? -(x) : (x))

/**
 * struct modifiers - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct modifiers
{
	_Bool plus;
	_Bool space;
	_Bool hash;
} mods;


/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, mods *);

/* get_flags */
int get_flags(char s, mods *f);

#endif  /* _HOLBERTON_H */
