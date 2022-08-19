/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:56:55 by hwong             #+#    #+#             */
/*   Updated: 2022/08/19 14:56:55 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 7)
	{
		write(1, ',', 1);
		write(1, ' ', 1);
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	while (num1 <= 7)
	{
		while (num2 <= 8)
		{
			while (num3 <= 9)
			{
				ft_print(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb();
}
