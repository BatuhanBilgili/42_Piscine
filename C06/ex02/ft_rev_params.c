/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:08:43 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/12 22:12:25 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = ac - 1;
	if (ac > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
