/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:35:43 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/02 18:36:42 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char k[] = "BuYazIyibuyukYaP";

	printf("%s", ft_strupcase(k));
}*/
