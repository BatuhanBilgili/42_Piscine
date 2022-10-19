/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:37:38 by bbilgili          #+#    #+#             */
/*   Updated: 2022/08/27 23:04:16 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char charC)
{
	write(1, &charC, 1);
}

void	ft_putnbr(int sayi)
{
	if (sayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		sayi = 147483648;
	}
	if (sayi < 0)
	{
		ft_putchar('-');
		sayi *= -1;
	}
	if (sayi < 10)
	{
		ft_putchar(sayi + 48);
		return ;
	}
	else
		ft_putnbr(sayi / 10);
	ft_putnbr(sayi % 10);
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
