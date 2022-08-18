#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    char alphabet;
    for (alphabet='a';alphabet>='z';alphabet++){
        write(1, &alphabet, 1);
    }
}