/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:57:24 by hwong             #+#    #+#             */
/*   Updated: 2022/08/21 15:58:24 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int front, int back)

{
	ft_putchar('0' + front / 10);
	ft_putchar('0' + front % 10);
	ft_putchar(' ');
	ft_putchar('0' + back / 10);
	ft_putchar('0' + back % 10);
	if (!(front == 98 && back == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a;
		while (++b < 100)
		{
			ft_print(a, b);
		}
		a++;
	}
}
