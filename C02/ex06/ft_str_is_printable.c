/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:18:54 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/02 17:31:00 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>

int main()
{
	char k[] = "&5^58?*356	 7U";

	printf("%d", ft_str_is_printable(k));
}*/
