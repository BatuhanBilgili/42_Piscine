/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:25:11 by bbilgili          #+#    #+#             */
/*   Updated: 2022/08/28 13:06:23 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int		sut;
	int		sat;

	sat = 1;
	while (sat <= b && a > 0)
	{
		sut = 1;
		while (sut <= a)
		{
			if ((sut == 1 && sat == 1) || (sut == a && sat == 1))
				ft_putchar('A');
			else if ((sat == b && sut == 1) || (sat == b && sut == a))
				ft_putchar('C');
			else if ((sut == 1) || (sut == a) || (sat == 1) || (sat == b))
				ft_putchar('B');
			else
				ft_putchar(' ');
			sut++;
		}
		ft_putchar('\n');
		sat++;
	}
}
