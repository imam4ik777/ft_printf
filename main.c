
#include "ft_printf.h"

int main(void)
{
	ft_printf("%s %s\n", "", "a");
	ft_printf("%c\n", 'c');
	ft_printf("%d\n", -1234);
	ft_printf("%d\n", 1234);
	ft_printf("%u\n", 123);
	ft_printf("%x\n", 123);
	ft_printf("%X\n", 123);
	ft_printf("%p\n", 123);
	ft_printf("%%\n");
	ft_printf("abcdef\n");
	ft_printf("%%%\n");
	ft_printf(" %c %c %c ", '0', 0, '1');
	// ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// ft_printf ("%s %s", "", "-");
	// printf(" %s %s ", "", "-");
}
