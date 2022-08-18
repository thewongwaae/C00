#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    char alphabet;
    for (alphabet='z';alphabet<='a';alphabet++){
        write(1, &alphabet, 1);
    }
}