#include <unistd.h>

void	ft_putnbr(int nb)
{
	write(1, nb, 1);
}

int	main(void)
{
	ft_putnbr(42);
}