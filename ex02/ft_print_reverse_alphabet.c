#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char ch;

	for (ch='z';ch>='a';ch++){
		write(1, &ch, 1);
	}
}
