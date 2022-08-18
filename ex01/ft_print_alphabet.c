#include <unistd.h>

void ft_print_alphabet(void)
{
	char ch;

	for (ch='a';ch<='z';ch++){
		write(1, &ch, 1);
	}
}
