#include <unistd.h>

void ft_print_numbers(void);

void ft_print_numbers(void)
{
    int num = 0;
    while (num<=9){
        write(1, &num, 1);
        num++;
    }
}